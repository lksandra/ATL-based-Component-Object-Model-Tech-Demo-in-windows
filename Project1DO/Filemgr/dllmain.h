// dllmain.h : Declaration of module class.

class CFilemgrModule : public ATL::CAtlDllModuleT< CFilemgrModule >
{
public :
	DECLARE_LIBID(LIBID_FilemgrLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_FILEMGR, "{c4b5b771-71dc-4efb-9407-0a53afd2ed25}")
};

extern class CFilemgrModule _AtlModule;
