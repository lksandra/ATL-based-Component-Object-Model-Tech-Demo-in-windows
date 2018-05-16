/////////////////////////////////////////////////////////////////////////////
//  clientCplusCplus.h: This module defines the interface for providing helper
//						conversion methods.e 
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
//this client application provides helper conversion methods			   //
//
/////////////////////////////////////////////////////////////////////////////
//required files:
//===============
//NIL
/////////////////////////////////////////////////////////////////////////////
//Public INterface:
//=================
//vector<string> client::clientHelper::getFilePatterns(int argc, char* argv[]).
//this static method retrieves the file patterns that are entered from the 
//commandline.
//--------------------------------------------------------------------------
//client::clientHelper::convertVectorToCcomSA(std::vector<string>& input, 
//													CComSafeArray<BSTR>& sa)
//this static method converts a given vector<string> to CComSafeArray<BSTR>
//---------------------------------------------------------------------------
//client::clientHelper::convertCcomSAToVector(CComSafeArray<BSTR>& ccomsa, 
//											std::vector<string>& outputVec)
//this static method converts given CComSafeArray<bstr> to vector<string>
/////////////////////////////////////////////////////////////////////////////
//maintenance history: V1.0, 22/04/2018.
//===================================
//NIL
/////////////////////////////////////////////////////////////////////////////


#pragma once
#include <vector>
#include <iostream>
#include <string>
#include <atlsafe.h>


namespace client {


	class clientHelper {
	public:
		static std::vector<std::string> getFilePatterns(int argc, char* argv[]);
		static void convertVectorToCcomSA(std::vector < std:: string > & input, CComSafeArray<BSTR>& outputSA);
		static void convertCcomSAToVector(CComSafeArray<BSTR>& ccomsa, std::vector<std::string>& outputVec);
	private:
		CComSafeArray<BSTR> matchingFileList;
		CComSafeArray<BSTR> lineNumberListForTheFile;



	};
}