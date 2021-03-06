/////////////////////////////////////////////////////////////////////////////
//  FIles.h: This module implements the interface for functionality of		 //
//                      Filemgr component                               //
//  ver 1.0                                                                //
//  Language:     C++                                                       //
//  Platform:     windows10. toshiba satellite                             //
//  Application:  Demonstrating Project 1 for CSE775. To search for files
//					in a directory for given file patterns.
//				  												   //
//                                                              //
//                                                                         //
//  Author:       Lakshmi kanth sandra, 229653990                          //
//  Reference:    Prof Jim Fawcett                                         //
/////////////////////////////////////////////////////////////////////////////
//Module Operations:
//==================
//this COM component helps in searching a given directory for set of files
//that match the file extension patterns.								  //
//
/////////////////////////////////////////////////////////////////////////////
//required files:
//===============
//FIles.h
//FileSystem.h
/////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////
//maintenance history: V1.0, 22/04/2018.
//===================================
//NIL
/////////////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "FIles.h"
#include <string>
#include <iostream>
#include <vector>
#include <atlsafe.h>
#include "../FileSystem-Windows/FileSystem.h"

using namespace std;


// CFIles
//returns all the files matching the extension pattern in a given directory path.
bool CFIles::getAllFiles(string& filePath, vector<string>& filePatterns, vector<string>& output) {
	try {

		filePath = FileSystem::Path::getFullFileSpec(filePath);
		if (filePath.length() != 0) {
			FileSystem::Directory::setCurrentDirectory(filePath);
			vector<string> allFiles = FileSystem::Directory::getFiles();

			for (auto eachFile : allFiles) {
				string fullPathOfFile = FileSystem::Path::getFullFileSpec(eachFile.c_str());
				string extension = "*." + FileSystem::Path::getExt(fullPathOfFile);
				if (find(filePatterns.begin(), filePatterns.end(), extension) != filePatterns.end()) {
					output.push_back(fullPathOfFile);
				}
			}


			vector<string> subDir = FileSystem::Directory::getDirectories();
			for (int i = 2; i < (int)subDir.size(); i++) {
				string dirFullSpec = FileSystem::Path::getFullFileSpec(subDir[i].c_str());
				getAllFiles(dirFullSpec, filePatterns, output);
				FileSystem::Directory::setCurrentDirectory(filePath);
			}
		}
		return true;
	}
	catch (...) {
		cout << "\nerror in finding file list in getAllFiles method of FIles.cpp" << endl;
		return false;
	}


};


//recieves file search path and file patters from the client.
STDMETHODIMP CFIles::sendFileProperties(BSTR path, SAFEARRAY** patterns)
{
	try {

		CW2A pathAnsiString = path;
		std::string pathString = (std::string)pathAnsiString;
		cout << "\npath string reccvd by fileManager COM:\n" << pathString << endl;
		CComSafeArray<BSTR> filePatternSafeArray(**patterns);
		vector<string> filePatterns;
		CFIles::convertCcomSAToVector(filePatternSafeArray, filePatterns);
		vector<string> output;
		if (filePatterns.size() > 0) {

			if (getAllFiles(pathString, filePatterns, output)) {
				cout << "\nfiles filtered successfully by fileManager COM" << endl;
			}
			else {
				cout << "\nfiles NOT filtered by fileManager COM" << endl;
				return E_FAIL;
			}
		}
		else {
			cout << "\nfilePatterns empty or transfer failed. File Search aborted by fileManager COM " << endl;
			return E_ABORT;
		}

		for (auto each : output) {
			cout << each << endl;
		}
		this->outputFileList = output;

		return S_OK;
	}
	catch (...) {
		cout << "\nsome error in FIles.cpp::sendFileProperties" << endl;
		return E_FAIL;
	}
}

//retirves the persisted fileList results
STDMETHODIMP CFIles::getFmResults(SAFEARRAY** fileList)
{
	try {
		CComSafeArray<BSTR> sa(this->outputFileList.size());
		CFIles::convertVectorToCcomSA(this->outputFileList, sa);

		cout << "\nDemonstrating R5: FileManager COM sending results to textSearch COM" << endl;
		cout << "============================================================================" << endl;
		*fileList = sa.Detach();
		cout << "\nfileManager COM successfully sent results to textSearch COM" << endl;
		
		return S_OK;
	}
	catch (...) {
		cout << "\nsome error in sending file list results to textSearch component." << endl;
		return E_FAIL;
	}
	
	
}

//heler method.
std::vector<std::string> CFIles::getFileListProperty()
{
	return this->outputFileList;
}

//conversion method from vector to ccomaray.
void CFIles::convertVectorToCcomSA(std::vector<std::string>& input, CComSafeArray<BSTR>& sa)
{
	for (long i = 0; i <(long)input.size(); i++) {
		CComBSTR bstr(input[i].c_str());
		auto hr = sa.SetAt(i, bstr.Detach());
		if (FAILED(hr)) {
			wcout << "\nsome error in adding string to safearray" << endl;
		}
	}
}

//conversion method from ccomarray to vector
void CFIles::convertCcomSAToVector(CComSafeArray<BSTR>& ccomsa, std::vector<std::string>& outputVec)
{
	try {
		for (int i = 0; i < (int)ccomsa.GetCount(); i++) {
			CW2A ansifilepath(ccomsa[i]);
			//	cout << "fileName:\n" << string(ansifilepath) << endl;
			outputVec.push_back(string(ansifilepath));
		}
	}
	catch (...) {
		std::cout << "\nerror in converting ccomSA to vector" << std::endl;
	}
}
