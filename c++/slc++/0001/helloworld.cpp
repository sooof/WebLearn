
#define ONE   1
#define TWO   2


// lib choose
#define B_LIB_H         1
#define B_GITHUB_LIB_H  0
#define STD_LIB_H       0

#if B_LIB_H
#include "../lib/std_lib_facilities.h"
#endif

#if B_GITHUB_LIB_H
#include "../github.com/BjarneStroustrup/Programming-_Principles_and_Practice_Using_Cpp/std_lib_facilities.h"
#endif

#if STD_LIB_H
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
inline void keep_window_open() {char ch; cin>>ch;}
#endif

// program part choose
#define PART  TWO

int main()
{
#if PART == ONE
    cout << "Hello, This is PART " << PART << "\n";
    cout << "Hello, World!\n";
	return 0;
#endif

#if PART == TWO
    cout << "Hello, This is PART " << PART << "\n";
    cout << "Hello, World!\n";
    keep_window_open();
    return 0;
#endif
}