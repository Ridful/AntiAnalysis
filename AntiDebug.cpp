
#include "analyze.h"

#include <stdio.h>
#include <Windows.h>
#include <iostream>

using namespace std;


bool is_IsDebuggerPresent() {
    if (IsDebuggerPresent()) {
        return true;
    }
}


