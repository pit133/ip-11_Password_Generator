#include "handling_main_argument.h"

#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string.h>

using namespace std;

int handling_main_argument(
    int argc,
    char* argv[],
    int* quantity_password,
    int* length_password,
    bool* digit_flag,
    bool* small_symbol_flag,
    bool* large_symbol_flag,
    bool* special_symbol_flag)
{
    int i = 1;
    int temp = 0;
   
    if (i == argc) {
        return 0;
    }
    temp = atoi(argv[i]);
    if (temp != 0) {
        *quantity_password = temp;
        i++;
    }

    if (i == argc) {
        return 0;
    }
    temp = atoi(argv[i]); 

    if (temp != 0) {
        *length_password = temp;
        cout << *length_password;
        i++;
    }

    if (i == argc) {
        return 0;
    }

    for (int j = i; j <= argc; j++)
    {
        if (!strcmp(argv[j], "-h")) {
            cout << "HELP\n";
            i++;
        }

        if (!strcmp(argv[j], "-0")) {
            *digit_flag = false;
            i++;
        }

        if (!strcmp(argv[j], "-A")) {
            *large_symbol_flag = false;
            i++;
        }

        if (!strcmp(argv[j], "-a")) {
            *small_symbol_flag = false;
            cout << "small";
            i++;
        }

        if (i == argc) {
            return 0;
        }
    }
  
    if (i == 1) {
        return 1;
    }
    return 0;
}
