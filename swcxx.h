#pragma once
#include <crts.h>
#include <iostream>
#include <stdio.h>
enum CRTS_Event
{
    CRTS_Success = 0
};
#define CPP_SLAVE_FUNC(func) extern "C" void *SLAVE_FUN(func)()
