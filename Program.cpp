
#include "analyze.h"

#include <stdio.h>
#include <Windows.h>
#include <iostream>


bool is_IsDebuggerPresent();


using namespace std;


int main(void)
{
    cout << "Starting." << endl;

    if (is_IsDebuggerPresent()) {

        cout << "isDebuggerPresent Triggered" << endl;
    }
    else {
        cout << "isDebuggerPresent Did Not Trigger" << endl;
    }


    getchar();
    return 0;
}