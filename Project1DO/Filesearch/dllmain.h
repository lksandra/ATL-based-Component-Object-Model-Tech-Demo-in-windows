// dllmain.h : Declaration of module class.

class CFilesearchModule : public ATL::CAtlDllModuleT< CFilesearchModule >
{
public :
	DECLARE_LIBID(LIBID_FilesearchLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_FILESEARCH, "{6f663281-771f-4fe7-8310-ad0c3ba6b0ef}")
};

extern class CFilesearchModule _AtlModule;
