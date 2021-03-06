/******************************************************************************
*                                                                             *
*                                                                             *
* Notepad3                                                                    *
*                                                                             *
* Version.h                                                                   *
*   Based on code from Notepad2-mod, (c) XhmikosR 2010-2015                   *
*                                                                             *
*                                                  (c) Rizonesoft 2008-2018   *
*                                                 https://www.rizonesoft.com  *
*                                                                             *
*                                                                             *
*******************************************************************************/

#ifndef NOTEPAD3_VERSION_H
#define NOTEPAD3_VERSION_H

#ifndef _T
#if !defined(ISPP_INVOKED) && (defined(UNICODE) || defined(_UNICODE))
#define _T(text) L##text
#else
#define _T(text) text
#endif
#endif

#define DO_STRINGIFYA(x)    #x
#define DO_STRINGIFYW(x) _T(#x)
#define STRG(x)     DO_STRINGIFYA(x)
#define TSTRG(x)    DO_STRINGIFYW(x)

#include "VersionEx.h"

// ----------------------------------------------------------------------------

#define VERSION_FILEVERSION_NUM      VERSION_MAJOR,VERSION_MINOR,VERSION_REV,VERSION_BUILD

#define VERSION_FILEVERSION          STRG(VERSION_MAJOR) "." STRG(VERSION_MINOR) "." \
                                     STRG(VERSION_REV) "." STRG(VERSION_BUILD)

#if defined(_WIN64)
#define  VERSION_FILEVERSION_LONG    APPNAME " (64-bit)" VERSION_PATCH " v" VERSION_FILEVERSION
#else
#define  VERSION_FILEVERSION_LONG    APPNAME VERSION_PATCH " v" VERSION_FILEVERSION
#endif

#if defined(_DEBUG) || defined(DEBUG)
#pragma message("Debug Build: " VERSION_FILEVERSION_LONG)
#else
#pragma message("Release Build: " VERSION_FILEVERSION_LONG)
#endif

#define VERSION_LEGALCOPYRIGHT         L"Copyright © 2015-2018 Rizonesoft"
//#define VERSION_LEGALCOPYRIGHT_LONG  L"© Rizonesoft 2015-2018"
#define VERSION_AUTHORNAME             L"© Rizonesoft"
#define VERSION_WEBPAGEDISPLAY         L"https://www.rizonesoft.com"
#define VERSION_COMPANYNAME            L"© Rizonesoft"
//#define VERSION_MODPAGEDISPLAY       L"https://xhmikosr.github.io/notepad2-mod/"
//#define VERSION_WEBPAGE2DISPLAY      L"http://www.flos-freeware.ch"

#define VERSION_SCIVERSION             L"Scintilla v" TSTRG(SCINTILLA_VER) L"  (RegEx: Onigmo v" TSTRG(ONIGMO_REGEX_VER) L")"

// ============================================================================

#define VERSION_UPDATE_CHECK         L"https://www.rizonesoft.com/downloads/notepad3/update/?version=" VERSION_FILEVERSION

// ============================================================================

// Compiler specific
#if defined(_MSC_VER)
    #if (_MSC_VER >= 1915)
        #if(_MSC_FULL_VER >= 191526726)
            #define VER_CPL     MS Visual C++ 2017 v15.8.(0-3)
        #endif
    #elif (_MSC_VER >= 1914)
        #if(_MSC_FULL_VER >= 191426433)
            #define VER_CPL     MS Visual C++ 2017 v15.7.(5-6)
        #elif(_MSC_FULL_VER >= 191426431)
            #define VER_CPL     MS Visual C++ 2017 v15.7.4
        #elif(_MSC_FULL_VER >= 191426430)
            #define VER_CPL     MS Visual C++ 2017 v15.7.3
        #elif(_MSC_FULL_VER >= 191426429)
            #define VER_CPL     MS Visual C++ 2017 v15.7.2
        #elif(_MSC_FULL_VER >= 191426428)
            #define VER_CPL     MS Visual C++ 2017 v15.7.(0-1)
        #endif
    #elif (_MSC_VER >= 1913)
        #if (_MSC_FULL_VER >= 191326132)
            #define VER_CPL     MS Visual C++ 2017 v15.6.7
        #elif(_MSC_FULL_VER >= 191326131)
            #define VER_CPL     MS Visual C++ 2017 v15.6.6
        #elif(_MSC_FULL_VER >= 191326129)
            #define VER_CPL     MS Visual C++ 2017 v15.6.(3-5)
        #elif(_MSC_FULL_VER >= 191326128)
            #define VER_CPL     MS Visual C++ 2017 v15.6.(0-2)
        #endif
    #elif (_MSC_VER >= 1912)
        #if(_MSC_FULL_VER >= 191225835)
            #define VER_CPL     MS Visual C++ 2017 v15.5.(5-7)
        #elif(_MSC_FULL_VER >= 191225834)
            #define VER_CPL     MS Visual C++ 2017 v15.5.(3-4)
        #elif(_MSC_FULL_VER >= 191225831)
            #define VER_CPL     MS Visual C++ 2017 v15.5.2
        #elif(_MSC_FULL_VER >= 191225830)
            #define VER_CPL     MS Visual C++ 2017 v15.5
        #else
            #define VER_CPL     MS Visual C++ 2017 (version unknown)
        #endif
    #elif (_MSC_VER >= 1911)
        #if((_MSC_FULL_VER >= 191125542) && (_MSC_FULL_VER <= 191125547))
           #define VER_CPL     MS Visual C++ 2017 v15.4
        #elif((_MSC_FULL_VER >= 191125506) && (_MSC_FULL_VER <= 191125508))
           #define VER_CPL     MS Visual C++ 2017 v15.3
        #else
           #define VER_CPL     MS Visual C++ 2017 (version unknown)
        #endif
    #elif (_MSC_VER >= 1910)
        #if ((_MSC_FULL_VER >= 191025017) && (_MSC_FULL_VER <= 191025019))
           #define VER_CPL     MS Visual C++ 2017 v15.2
        #else
            #define VER_CPL    MS Visual C++ 2017 RC
        #endif
    #elif (_MSC_VER == 1900)
        #if (_MSC_FULL_VER == 190024210) || (_MSC_FULL_VER == 190024215)
            #define VER_CPL    MS Visual C++ 2015 Update 3
        #elif (_MSC_FULL_VER == 190023918)
            #define VER_CPL    MS Visual C++ 2015 Update 2
        #elif (_MSC_FULL_VER == 190023506)
            #define VER_CPL    MS Visual C++ 2015 Update 1
        #elif (_MSC_FULL_VER == 190023506)
            #define VER_CPL    MS Visual C++ 2015 Update 1
        #else
            #define VER_CPL    MS Visual C++ (version unknown)
        #endif
    #else
        #define VER_CPL        MS Visual C++ (version unknown)
    #endif
#else
    #define VER_CPL            (Unknown Compiler)
#endif

#pragma message("Compiler " STRG(VER_CPL) "  (v" STRG(_MSC_FULL_VER) ")")

#define VERSION_COMPILER  L"Compiler: " TSTRG(VER_CPL) L" (VC v" TSTRG(_MSC_VER) L")"


#endif // NOTEPAD3_VERSION_H
