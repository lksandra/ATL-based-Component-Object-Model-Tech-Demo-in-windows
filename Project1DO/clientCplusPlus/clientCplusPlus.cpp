/////////////////////////////////////////////////////////////////////////////
//  clientCplusCplus.h: This module implements the interface for providing helper
//						conversion methods and also tests both Filemgr and
//						testSearch component.
//						
//																			 //
//  ver 1.0                                                                //
//  Language:     C++                                                       //
//  Platform:     windows10. toshiba satellite                             //
//  Application:  Demonstrating Project 1 for CSE775.  tsting Filemgr and 
//					textSearch components.
//				  												   //
//                                                              //
//                                                                         //
//  Author:       Lakshmi kanth sandra, 229653990                          //
//  Reference:    Prof Jim Fawcett                                         //
/////////////////////////////////////////////////////////////////////////////
//Module Operations:
//==================
//this client application implements helper conversion methods and tests			   //
//fileManger and textSearch components.
/////////////////////////////////////////////////////////////////////////////
//required files:
//===============
//Filemgr_i.h
//Filemgr_i.c
//Filesearch_i.h
//Filesearch_i.c
//clientCplusCplus.h
/////////////////////////////////////////////////////////////////////////////
//maintenance history: V1.0, 22/04/2018.
//===================================
//NIL
/////////////////////////////////////////////////////////////////////////////


#include "stdafx.h"
#include "../Filemgr/Filemgr_i.h"
#include "../Filemgr/Filemgr_i.c"
#include "../Filesearch/Filesearch_i.h"
#include "../Filesearch/Filesearch_i.c"

#include "clientCplusCplus.h"
#include <atlbase.h>
#include <iostream>
#include <string>
#include <atlsafe.h>




using namespace std;
using namespace client;

//helper method to parse file patterns from the command line.
vector<string> client::clientHelper::getFilePatterns(int argc, char* argv[]) {
	vector<string> output;
	for (int i = 2; i < argc-1; i++) {
		output.push_back(string(argv[i]));

	};
	return output;
}

//helper method to convert vector to ccom safearray.
void client::clientHelper::convertVectorToCcomSA(std::vector<string>& input, CComSafeArray<BSTR>& sa)
{
	for (long i = 0; i <(long)input.size(); i++) {
		CComBSTR bstr(input[i].c_str());
		auto hr = sa.SetAt(i, bstr.Detach());
		if (FAILED(hr)) {
			wcout << "\nsome error in adding string to safearray" << endl;
		}
	}
}

//helper method to convert ccom safearray to vector.
void client::clientHelper::convertCcomSAToVector(CComSafeArray<BSTR>& ccomsa, std::vector<string>& outputVec)
{
	try {
		for (int i = 0; i < (int)ccomsa.GetCount(); i++) {
			CW2A ansifilepath(ccomsa[i]);
		
			outputVec.push_back(string(ansifilepath));
		}
	}
	catch (...) {
		std::cout << "\nerror in converting ccomSA to vector" << std::endl;
	}
	

};

int main(int argc, char* argv[])
{
	cout << "\ndemonstrating R1,2,3" << endl;
	cout << "===============================================================" << endl;
	string searchDir = argv[1];
	cout << "\ndirctory search path is:\n " << searchDir << endl;
	
	
	CComBSTR searchDirBSTR(searchDir.c_str());
	CComSafeArray<BSTR> sa(argc - 3);
	vector<string> searchPatterns = client::clientHelper::getFilePatterns(argc, argv);

	clientHelper::convertVectorToCcomSA(searchPatterns, sa);

	
	string tempsearchstring = argv[argc-1];
	CComBSTR regexsearchstring(tempsearchstring.c_str());
	cout << "\nregexsearchstring is: " << tempsearchstring << endl;


	CoInitialize(NULL);
	CComQIPtr<IFIles> pFileManager;
	CComQIPtr<ITextSearch> pTextSearch;
	cout << "\ndemonstrating R5: FileManager COM" << endl;
	cout << "==================================================================" << endl;
	cout << "\ncalling cocreateinstance for FileManager component" << endl;
	pFileManager.CoCreateInstance(CLSID_FIles);
	
	

	HRESULT pathSent;
	if (pFileManager) {
		cout << "\nsuccessfully created instance of fileManager COM" << endl;
		cout << "\nattempting to send file search path and file patterns to fileManager component" << endl;
		pathSent = pFileManager->sendFileProperties((BSTR)searchDirBSTR, sa.GetSafeArrayPtr());
	}
	else {
		cout << "\nfileManager COM instance failed to create" << endl;
		return 0;
	}

	if (SUCCEEDED(pathSent)) {
		cout << "\nfile path and patterns successfully sent to fileManager component" << endl;
	}
	else {
		cout<< "\nfile path and patterns could NOT be sent to fileManager component" << endl;
	};

	cout << "\ndemonstrating R4:TextSearch component" << endl;
	cout << "========================================================================" << endl;
	cout << "\ncalling cocreateinstance on textSearch component" << endl;
	pTextSearch.CoCreateInstance(CLSID_TextSearch);
	HRESULT pFmSent;
	if (pTextSearch) {
		cout << "\nsuccessfully created instance of textSearch COM" << endl;
		cout << "\nattempting to send fileManager pointer and search string to textSearch COM" << endl;
		pFmSent = pTextSearch->sendIFmPtr(pFileManager, (BSTR)regexsearchstring);
	}
	else {
		cout << "\nfailed to create instance of TextSearch COM" << endl;
	}
	if (SUCCEEDED(pFmSent)) {
		cout << "\nfileManager pointer and search string successfully sent to textSearch COM" << endl;
	}
	else {
		cout << "\nfileManager pointer and search string could not be sent to textSearch component" << endl;
	};

	SAFEARRAY resultFileListSA;
	SAFEARRAY lineNumberStringsSA;
	SAFEARRAY* PresultFileSA = &resultFileListSA;
	SAFEARRAY* PlineNumberStringsSA = &lineNumberStringsSA;
	cout << "\nattempting to getresults from the textSearch COM" << endl;
	auto hrlt = pTextSearch->getResults(&PresultFileSA, &PlineNumberStringsSA);
	if (SUCCEEDED(hrlt)) {
		cout << "\nSuccessfully obtained lineNumbers Results from textSearch component" << endl;
	}
	else {
		cout << "\nUnsuccessfull in obtaining results from the textSearch component " << endl;
	}

	CComSafeArray<BSTR> resultFileListCcom(*PresultFileSA);
	CComSafeArray<BSTR> lineNumberStringsCcom(*PlineNumberStringsSA);
	vector<string> resultFileListVector;
	vector<string> resultLineNumberString;

	clientHelper::convertCcomSAToVector(resultFileListCcom, resultFileListVector);
	clientHelper::convertCcomSAToVector(lineNumberStringsCcom, resultLineNumberString);


	cout << "\n\n printing the fileName and associated lineNumbers" << endl;

	for (int i = 0; i <(int)resultFileListVector.size(); i++) {
		cout << "\nfileName:\n" << resultFileListVector[i].c_str() << endl << endl;
		cout << "matching lineNumbers:\n" << resultLineNumberString[i] << endl;
	};
	
	string s;
	cout << "\n PRESS ANY CHARACTER AND ENTER TO EXIT" << endl;
	cin >> s;
	
	return 0;
}


