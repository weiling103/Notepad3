﻿#include "StyleLexers.h"

KEYWORDLIST KeyWords_NULL = { "", "", "", "", "", "", "", "", "" };


EDITLEXER lexStandard = { 
SCLEX_NULL, IDS_LEX_DEF_TXT, L"Default Text", L"txt; text; wtx; log; asc; doc", L"", 
&KeyWords_NULL, {
    /*  0 */ { STYLE_DEFAULT, IDS_LEX_STD_STYLE, L"Default Style", L"font:Default; size:10", L"" },
    /*  1 */ { STYLE_LINENUMBER, IDS_LEX_STD_MARGIN, L"Margins and Line Numbers", L"size:-2; fore:#FF0000", L"" },
    /*  2 */ { STYLE_BRACELIGHT, IDS_LEX_STD_BRACE, L"Matching Braces (Indicator)", L"fore:#00FF40; alpha:40; alpha2:40; indic_roundbox", L"" },
    /*  3 */ { STYLE_BRACEBAD, IDS_LEX_STD_BRACE_FAIL, L"Matching Braces Error (Indicator)", L"fore:#FF0080; alpha:140; alpha2:140; indic_roundbox", L"" },
    /*  4 */ { STYLE_CONTROLCHAR, IDS_LEX_STD_CTRL_CHAR, L"Control Characters (Font)", L"size:-1", L"" },
    /*  5 */ { STYLE_INDENTGUIDE, IDS_LEX_STD_INDENT, L"Indentation Guide (Color)", L"fore:#A0A0A0", L"" },
    /*  6 */ { SCI_SETSELFORE+SCI_SETSELBACK, IDS_LEX_STD_SEL, L"Selected Text (Colors)", L"back:#0A246A; eolfilled; alpha:95", L"" },
    /*  7 */ { SCI_SETWHITESPACEFORE+SCI_SETWHITESPACEBACK+SCI_SETWHITESPACESIZE, IDS_LEX_STD_WSPC, L"Whitespace (Colors, Size 0-12)", L"fore:#FF4000", L"" },
    /*  8 */ { SCI_SETCARETLINEBACK, IDS_LEX_STD_LN_BACKGR, L"Current Line Background (Color)", L"back:#FFFF00; alpha:50", L"" },
    /*  9 */ { SCI_SETCARETFORE+SCI_SETCARETWIDTH, IDS_LEX_STD_CARET, L"Caret (Color, Size 1-3)", L"", L"" },
    /* 10 */ { SCI_SETEDGECOLOUR, IDS_LEX_STD_LONG_LN, L"Long Line Marker (Colors)", L"fore:#FFC000", L"" },
    /* 11 */ { SCI_SETEXTRAASCENT+SCI_SETEXTRADESCENT, IDS_LEX_STD_X_SPC, L"Extra Line Spacing (Size)", L"size:2", L"" },
    /* 12 */ { SCI_FOLDALL+SCI_MARKERSETALPHA, IDS_LEX_STD_BKMRK, L"Bookmarks and Folding (Colors, Size)", L"size:+2; fore:#000000; back:#808080; alpha:80", L"" },
    /* 13 */ { SCI_MARKERSETBACK+SCI_MARKERSETALPHA, IDS_LEX_STR_63262, L"Mark Occurrences (Indicator)", L"alpha:100; alpha2:100; indic_roundbox", L"" },
    /* 14 */ { SCI_SETHOTSPOTACTIVEFORE, IDS_LEX_STR_63264, L"Hyperlink Hotspots", L"italic; fore:#0000FF", L"" },
             { -1, 00000, L"", L"", L"" } } };


EDITLEXER lexStandard2nd = { 
SCLEX_NULL, IDS_LEX_STR_63266, L"2nd Default Text", L"txt; text; wtx; log; asc; doc", L"", 
&KeyWords_NULL,{
    /*  0 */ { STYLE_DEFAULT, IDS_LEX_2ND_STYLE, L"2nd Default Style", L"font:Courier New; size:10", L"" },
    /*  1 */ { STYLE_LINENUMBER, IDS_LEX_2ND_MARGIN, L"2nd Margins and Line Numbers", L"font:Tahoma; size:-2; fore:#FF0000", L"" },
    /*  2 */ { STYLE_BRACELIGHT, IDS_LEX_2ND_BRACE, L"2nd Matching Braces (Indicator)", L"fore:#00FF40; alpha:80; alpha2:220; indic_roundbox", L"" },
    /*  3 */ { STYLE_BRACEBAD, IDS_LEX_2ND_BRACE_FAIL, L"2nd Matching Braces Error (Indicator)", L"fore:#FF0080; alpha:140; alpha2:220; indic_roundbox", L"" },
    /*  4 */ { STYLE_CONTROLCHAR, IDS_LEX_2ND_CTRL_CHAR, L"2nd Control Characters (Font)", L"size:-1", L"" },
    /*  5 */ { STYLE_INDENTGUIDE, IDS_LEX_2ND_INDENT, L"2nd Indentation Guide (Color)", L"fore:#A0A0A0", L"" },
    /*  6 */ { SCI_SETSELFORE + SCI_SETSELBACK, IDS_LEX_2ND_SEL, L"2nd Selected Text (Colors)", L"eolfilled", L"" },
    /*  7 */ { SCI_SETWHITESPACEFORE + SCI_SETWHITESPACEBACK + SCI_SETWHITESPACESIZE, IDS_LEX_2ND_WSPC, L"2nd Whitespace (Colors, Size 0-12)", L"fore:#FF4000", L"" },
    /*  8 */ { SCI_SETCARETLINEBACK, IDS_LEX_2ND_LN_BACKGR, L"2nd Current Line Background (Color)", L"back:#FFFF00; alpha:50", L"" },
    /*  9 */ { SCI_SETCARETFORE + SCI_SETCARETWIDTH, IDS_LEX_2ND_CARET, L"2nd Caret (Color, Size 1-3)", L"", L"" },
    /* 10 */ { SCI_SETEDGECOLOUR, IDS_LEX_2ND_LONG_LN, L"2nd Long Line Marker (Colors)", L"fore:#FFC000", L"" },
    /* 11 */ { SCI_SETEXTRAASCENT + SCI_SETEXTRADESCENT, IDS_LEX_2ND_X_SPC, L"2nd Extra Line Spacing (Size)", L"", L"" },
    /* 12 */ { SCI_FOLDALL + SCI_MARKERSETALPHA, IDS_LEX_2ND_BKMRK, L"2nd Bookmarks and Folding (Colors, Size)", L"size:+2; fore:#000000; back:#808080; alpha:80; charset:2; case:U", L"" },
    /* 13 */ { SCI_MARKERSETBACK + SCI_MARKERSETALPHA, IDS_LEX_STR_63263, L"2nd Mark Occurrences (Indicator)", L"fore:#0x000000; alpha:100; alpha2:220; indic_box", L"" },
    /* 14 */ { SCI_SETHOTSPOTACTIVEFORE, IDS_LEX_STR_63265, L"2nd Hyperlink Hotspots", L"bold; fore:#FF0000", L"" },
             { -1, 00000, L"", L"", L"" } } };


EDITLEXER lexANSI = { 
SCLEX_NULL, IDS_LEX_ANSI_ART, L"ANSI Art", L"nfo; diz", L"", 
&KeyWords_NULL,{
    { STYLE_DEFAULT, IDS_LEX_STR_63126, L"Default", L"font:Lucida Console; none; size:10.5", L"" },
    { STYLE_LINENUMBER, IDS_LEX_STD_MARGIN, L"Margins and Line Numbers", L"font:Lucida Console; size:-2", L"" },
    { STYLE_BRACELIGHT, IDS_LEX_STD_BRACE, L"Matching Braces", L"size:+0", L"" },
    { STYLE_BRACEBAD, IDS_LEX_STD_BRACE_FAIL, L"Matching Braces Error", L"size:+0", L"" },
    { SCI_SETEXTRAASCENT + SCI_SETEXTRADESCENT, IDS_LEX_STD_X_SPC, L"Extra Line Spacing (Size)", L"size:-1", L"" },
    { -1, 00000, L"", L"", L"" } } };


EDITLEXER lexLATEX = { 
SCLEX_LATEX, IDS_LEX_LATEX, L"LaTeX Files", L"tex; latex; sty", L"", 
&KeyWords_NULL, {
    { STYLE_DEFAULT, IDS_LEX_STR_63126, L"Default", L"", L"" },
    //{ SCE_L_DEFAULT, IDS_LEX_STR_63126, L"Default", L"", L"" },
    { MULTI_STYLE(SCE_L_COMMAND,SCE_L_SHORTCMD,SCE_L_CMDOPT,0), IDS_LEX_STR_63236, L"Command", L"fore:#0000FF", L"" },
    { MULTI_STYLE(SCE_L_COMMENT,SCE_L_COMMENT2,0,0), IDS_LEX_STR_63127, L"Comment", L"fore:#008000", L"" },
    { MULTI_STYLE(SCE_L_MATH,SCE_L_MATH2,0,0), IDS_LEX_STR_63283, L"Math", L"fore:#FF0000", L"" },
    { SCE_L_SPECIAL, IDS_LEX_STR_63306, L"Special Char", L"fore:#AAAA00", L"" },
    { MULTI_STYLE(SCE_L_TAG,SCE_L_TAG2,0,0), IDS_LEX_STR_63282, L"Tag", L"fore:#0000FF", L"" },
    { SCE_L_VERBATIM, IDS_LEX_STR_63307, L"Verbatim Segment", L"fore:#666666", L"" },
    { -1, 00000, L"", L"", L"" } } };





