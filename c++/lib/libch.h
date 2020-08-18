#define ZERO  0
#define ONE   1
#define TWO   2
#define THREE 3
#define FOUR  4

// lib choose
#define B_LIB_H         1
#define B_GITHUB_LIB_H  0
#define STD_LIB_H       0

// #if ZERO
// #define B_LIB_H        1
// #elif ZERO
// #define B_GITHUB_LIB_H 1
// #else 
// #define STD_LIB_H      1
// #endif

#if B_LIB_H
#include "../lib/std_lib_facilities.h"
#include "../lib/safe_main.hpp"
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