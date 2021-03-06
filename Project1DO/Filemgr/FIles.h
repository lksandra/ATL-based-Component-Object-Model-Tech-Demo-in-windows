/////////////////////////////////////////////////////////////////////////////
//  FIles.h: This module defines the interface for functionality of		 //
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
//Filemgr_i.h
//resource.h
/////////////////////////////////////////////////////////////////////////////
//Public INterface:
//=================
//CFIles::getFmResults(SAFEARRAY** fileList).
//this method sends the list of files that were persisted. acepts a safearray
//out parameter.
//--------------------------------------------------------------------------
//CFIles::sendFileProperties(BSTR path, SAFEARRAY** patterns)
//this method can be called to send the directory path to search for and file patterns
//that need to be matched.
//---------------------------------------------------------------------------
/////////////////////////////////////////////////////////////////////////////
//maintenance history: V1.0, 22/04/2018.
//===================================
//NIL
/////////////////////////////////////////////////////////////////////////////

#pragma once
#include "resource.h"       // main symbols



#include "Filemgr_i.h"
#include <vector>
#include <string>
#include <atlsafe.h>



#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Single-threaded COM objects are not properly supported on Windows CE platform, such as the Windows Mobile platforms that do not include full DCOM support. Define _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA to force ATL to support creating single-thread COM object's and allow use of it's single-threaded COM object implementations. The threading model in your rgs file was set to 'Free' as that is the only threading model supported in non DCOM Windows CE platforms."
#endif

using namespace ATL;


// CFIles

class ATL_NO_VTABLE CFIles :
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CFIles, &CLSID_FIles>,
	public IDispatchImpl<IFIles, &IID_IFIles, &LIBID_FilemgrLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
public:
	CFIles()
	{
	}

DECLARE_REGISTRY_RESOURCEID(108)


BEGIN_COM_MAP(CFIles)
	COM_INTERFACE_ENTRY(IFIles)
	COM_INTERFACE_ENTRY(IDispatch)
END_COM_MAP()



	DECLARE_PROTECT_FINAL_CONSTRUCT()

	HRESULT FinalConstruct()
	{
		return S_OK;
	}

	void FinalRelease()
	{
	}

public:



	
	STDMETHOD(sendFileProperties)(BSTR path, SAFEARRAY** patterns);
	STDMETHOD(getFmResults)(SAFEARRAY** fileList);

private:
	//retrievs all the files with a given pattern from the dirctory.
	bool getAllFiles(std::string& filePath, std::vector<std::string>& filePatterns, std::vector<std::string>& output);
	//result file list is stored.
	std::vector<std::string> outputFileList;
	//retrieves the outputFileList 
	std::vector<std::string> getFileListProperty();
	//helper method for conversions
	static void convertVectorToCcomSA(std::vector < std::string > & input, CComSafeArray<BSTR>& outputSA);
	static void convertCcomSAToVector(CComSafeArray<BSTR>& ccomsa, std::vector<std::string>& outputVec);
};

OBJECT_ENTRY_AUTO(__uuidof(FIles), CFIles)
