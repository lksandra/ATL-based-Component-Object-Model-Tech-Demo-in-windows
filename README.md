# ATL-based-Component-Object-Model-Tech-Demo-in-windows
This project attempts to demo Component Object Model using ATL classes. clientCplusPlus is a client which wishes to findout the linenumbers in files where a given regex search string 		exists.

**Project Design**  
The above objective is achieved by designing two components, where one component(Filemgr) is for finding the files present in the given directory with matching file extensions. Oher 		component(Filesearch) searches for the given search string in the above found files and returns the line numbers to the clientCplusPlus.

In this design the client merely passes the directory path to the filemgr component and it returns the list of files to search for. The client in turn passes those obtained list of 		files to the Filesearch component which in turn searches for the matching string and returns the linenumbers.

In such a design there is no need to re-compile the windows client even if the two components are modified, as those are being dynamically loaded at run time by client.
	
such dynamic loading and component based design is very essential for large projects as well as to share the same code resource in multiple processes and save precious RAM.

**COM for LINUX**  
There is no linux counterpart to COM. However, I have developed a C++ based tech demo in ubuntu by using the concepts of COM viz. Object factories, Compiling to Dlls, Dynamic loading
of dlls etc. It can be found in my repository list.
