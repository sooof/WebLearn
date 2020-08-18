/*Convright:
 *Filename:
 *File tag:
 *Function:
 *Autor:
 *Email:
 *Date:
 *Version:
 */

// lib choose
#include "../lib/libch.h"

// program part choose
#define PART  FOUR



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
    string first_name = "???";
    int age = -1;
    cin >> first_name;
    cin >> age;
    cout << "Hello, " << first_name << " (age "<< age <<")\n"; 

#endif

#if PART == FOUR
    cout << "Hello, This is PART " << PART << "\n";
    cout << "Please enter a floating-point value: \n";
    double n;
    
    cin >> n;
    cout << "n == " << n 
         << "\nn+1 == " << n+1 
         << "\nthree time n== " << 3*n
         << "\ntwice n == " << n+n
         << "\nnhalf of n== " << n/2
         << "\nsquared root of n == " << sqrt(n)
         << '\n'; 

#endif

}