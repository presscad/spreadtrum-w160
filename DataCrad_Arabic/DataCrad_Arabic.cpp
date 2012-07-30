// DataCrad_Arabic.cpp : Defines the initialization routines for the DLL.
//

#include "stdafx.h"
#include "DataCrad_Arabic.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

//
//	Note!
//
//		If this DLL is dynamically linked against the MFC
//		DLLs, any functions exported from this DLL which
//		call into MFC must have the AFX_MANAGE_STATE macro
//		added at the very beginning of the function.
//
//		For example:
//
//		extern "C" BOOL PASCAL EXPORT ExportedFunction()
//		{
//			AFX_MANAGE_STATE(AfxGetStaticModuleState());
//			// normal function body here
//		}
//
//		It is very important that this macro appear in each
//		function, prior to any calls into MFC.  This means that
//		it must appear as the first statement within the 
//		function, even before any object variable declarations
//		as their constructors may generate calls into the MFC
//		DLL.
//
//		Please see MFC Technical Notes 33 and 58 for additional
//		details.
//

/////////////////////////////////////////////////////////////////////////////
// CCommonApp

BEGIN_MESSAGE_MAP(CCommonApp, CWinApp)
	//{{AFX_MSG_MAP(CCommonApp)

	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CCommonApp construction

CCommonApp::CCommonApp()
{
	// TODO: add construction code here,
	// Place all significant initialization in InitInstance
}

/////////////////////////////////////////////////////////////////////////////
// The one and only CCommonApp object
#define COMP_Common_DataCrad	3
#define LANG_ARABIC	    0x01
#define FUNC_NOCALL		    1
CCommonApp theApp;

int GetFuncCall()
{
	return FUNC_NOCALL;
}

int GetLang()
{
	return LANG_ARABIC;
}

int GetComp()
{
	return COMP_Common_DataCrad;
}


