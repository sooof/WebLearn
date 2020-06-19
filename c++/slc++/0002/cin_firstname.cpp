#define ZERO  0
#define ONE   1
#define TWO   2
#define THREE 3
#define FOUR  4

// lib choose
#if ZERO
#define B_LIB_H 
#else 
#define B_GITHUB_LIB_H
#endif

#ifdef B_LIB_H
#include "../lib/std_lib_facilities.h"
#endif

#ifdef B_GITHUB_LIB_H
#include "../github.com/BjarneStroustrup/Programming-_Principles_and_Practice_Using_Cpp/std_lib_facilities.h"
#endif



// program part choose
#define PART  THREE



int main()
{
#if PART == ONE
    cout << "Hello, This is PART " << PART << "\n";
    cout << "Please enter your frist name (followed by 'enter'):\n";
    string first_name;
    cin >> first_name;
    cout << "Hello, " << first_name << "!\n";
#endif

#if PART == TWO
    cout << "Hello, This is PART " << PART << "\n";
    cout << "Please enter your first name and age\n";
    string first_name;
    int age;
    cin >> first_name;
    cin >> age;
    cout << "Hello," << first_name << " (age "<< age <<")\n"; 
#endif

#if PART == THREE
    cout << "Hello, This is PART " << PART << "\n";
    cout << "Please enter your first name and age \n";
#endif

}