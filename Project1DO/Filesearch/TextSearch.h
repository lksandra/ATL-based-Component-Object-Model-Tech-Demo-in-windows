/////////////////////////////////////////////////////////////////////////////
//  TextSearch.h: This module defines the interface for functionality of   //
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
//this COM component helps in searching a given set of files for a search  //
//string. It obtains the file List from the Filemgr component.
/////////////////////////////////////////////////////////////////////////////
//required files:
//===============
//Filesearch_i.h
//resource.h
/////////////////////////////////////////////////////////////////////////////
//Public INterface:
//=================
//CTextSearch::sendIFmPtr(IUnknown* Fileptr, BSTR regexstring).
//this method receives the fileManager pointer and search string.
//--------------------------------------------------------------------------
//CTextSearch::getResults)(SAFEARRAY** fileList, SAFEARRAY** lineNumbers)
//this method can be called to retrieve the results, which consists of two
//lists. one list for fileList and other for associated lineNumber strings.
/////////////////////////////////////////////////////////////////////////////
//maintenance history: V1.0, 22/04/2018.
//===================================
//NIL
/////////////////////////////////////////////////////////////////////////////

#pragma once
#include "resource.h"       // main symbols



#include "Filesearch_i.h"
#include <atlbase.h>
#include <atlsafe.h>
#include <vector>
#include <string>




#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Single-threaded COM objects are not properly supported on Windows CE platform, such as the Windows Mobile platforms that do not include full DCOM support. Define _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA to force ATL to support creating single-thread COM object's and allow use of it's single-threaded COM object implementations. The threading model in your rgs file was set to 'Free' as that is the only threading model supported in non DCOM Windows CE platforms."
#endif

using namespace ATL;


// CTextSearch

class ATL_NO_VTABLE CTextSearch :
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CTextSearch, &CLSID_TextSearch>,
	public IDispatchImpl<ITextSearch, &IID_ITextSearch, &LIBID_FilesearchLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
public:
	CTextSearch()
	{
	}

DECLARE_REGISTRY_RESOURCEID(106)


BEGIN_COM_MAP(CTextSearch)
	COM_INTERFACE_ENTRY(ITextSearch)
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



	
	STDMETHOD(sendIFmPtr)(IUnknown* Fileptr, BSTR regexstring);
	STDMETHOD(getResults)(SAFEARRAY** fileList, SAFEARRAY** lineNumbers);

private:
	IUnknown * fmPtr;
	std::string regexstring;
	std::vector<std::string> fileListVector;
	std::vector<std::string> lineNumberStringsVector;
	bool searchFilesForMatchingString();
	CComSafeArray<BSTR> fileListCcomSA;
	CComSafeArray<BSTR> lineNumberStringsCcomSA;
};

OBJECT_ENTRY_AUTO(__uuidof(TextSearch), CTextSearch)
