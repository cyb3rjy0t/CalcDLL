// calDLL.cpp : Defines the exported functions for the DLL.
//

#include "pch.h"
#include "framework.h"
#include "calDLL.h"


// This is an example of an exported variable
CALDLL_API int ncalDLL=0;

// This is an example of an exported function.
CALDLL_API int fncalDLL(void)
{
    return 0;
}

// This is the constructor of a class that has been exported.
CcalDLL::CcalDLL()
{
    return;
}
