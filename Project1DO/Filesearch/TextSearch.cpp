/////////////////////////////////////////////////////////////////////////////
//  TextSearch.cpp: This module implements the functionality of			   //
//                      textSearch component                               //
//  ver 1.0                                                                //
//  Language:     C++                                                       //
//  Platform:     windows10. toshiba satellite                             //
//  Application:  Demonstrating Project 1 for CSE775. To search a regex 
//				  string												   //
//                                                              //
//                                                                         //
//  Author:       Lakshmi kanth sandra, 229653990                          //
//  Reference:    Prof Jim Fawcett                                         //
/////////////////////////////////////////////////////////////////////////////
//Module Operations:
//==================
//this module implements the textSearch component functionality            //
/////////////////////////////////////////////////////////////////////////////
//required files:
//===============
//FileSystem.h
//Filemgr_i.h
//TextSearch.h
/////////////////////////////////////////////////////////////////////////////
//maintenance history: V1.0, 22/04/2018.
//===================================
//NIL
/////////////////////////////////////////////////////////////////////////////


#include "stdafx.h"
#include "TextSearch.h"
#include <atlsafe.h>
#include <vector>
#include <string>
#include <iostream>
#include <regex>
#include "../FileSystem-Windows/FileSystem.h"
#include "../Filemgr/Filemgr_i.h"
using namespace FileSystem;








//recieves fileManager pointer and regex search string.
STDMETHODIMP CTextSearch::sendIFmPtr(IUnknown* Fileptr, BSTR regexstring)
{

	if (Fileptr != nullptr && regexstring != nullptr) {
		this->fmPtr = Fileptr;
		CW2A tempAnsi = regexstring;
		this->regexstring = std::string(tempAnsi);
	}
	if (this->fmPtr) {
		std::cout << "\npointer to fileManager COM received and persisted by textSearch COM" << std::endl;
	}
	return S_OK;
}

//returns two lists viz files list, associated lineNumber strings.
STDMETHODIMP CTextSearch::getResults(SAFEARRAY** fileList, SAFEARRAY** lineNumbers)
{
	try {

		CComQIPtr<IFIles> Ifm = this->fmPtr;
		if (!Ifm)
			return E_NOINTERFACE;
		SAFEARRAY filesList;
		SAFEARRAY* pfileList = &filesList;
		std::cout << "\nDemonstaring R4 & 5: textSearch COM attempting to get fileList results from fileManager COM " << std::endl;
		std::cout << "===================================================================================================\n";
		auto hfr = Ifm->getFmResults(&pfileList);
		if (SUCCEEDED(hfr)) {
			std::cout << "\ntextSearch COM successfully obtained results from the fileManager COM" << std::endl;

		}
		else {
			std::cout << "\ntextSearch COM Unsuccessful in obtaining results from the fileManager COM" << std::endl;

		}
		CComSafeArray<BSTR> fileListCcom;
		fileListCcom.Attach(pfileList);

		//converting ccom array to vector of file list.
		for (long i = 0; i < (LONG)fileListCcom.GetCount(); i++) {
			CW2A fileString = fileListCcom[i];
			fileListVector.push_back(std::string(fileString));
		};


		if (!searchFilesForMatchingString()) {
			std::cout << "\nsome error while file searching for string.CTextSearch::getResults " << std::endl;
			return E_FAIL;
		};
		std::cout << "\ntextSearch COM successfully searched for the given search string\n";
		*fileList = this->fileListCcomSA.Detach();
		*lineNumbers = this->lineNumberStringsCcomSA.Detach();

		return S_OK;
	}
	catch (...) {
		std::cout << "\nsome error in CText::getResults" << std::endl;
		return E_FAIL;
	}

}
//searches for mathcing regex string in a given list of files.
bool CTextSearch::searchFilesForMatchingString()
{
	try {

		for (auto each : fileListVector) {
			File fileToRead(each);
			fileToRead.open(File::in, File::text);
			std::string s;
			std::string linenumberString = "";
			std::regex rx(this->regexstring);

			long count = 1;
			while (fileToRead.isGood()) {
				s = fileToRead.getLine();
				if (std::regex_search(s, rx)) {
					linenumberString += std::to_string(count) += " ";


				}
				count++;
			}
			CComBSTR bstrFilePath(each.c_str());
			this->fileListCcomSA.Add(bstrFilePath);
			CComBSTR bstrLineNumberString(linenumberString.c_str());
			this->lineNumberStringsCcomSA.Add(bstrLineNumberString);
			count = 0;
		};
		return true;
	}
	catch (...) {

		return false;
	}

}





