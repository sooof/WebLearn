
#define ONE   1
#define TWO   2


// lib choose
#include "../lib/libch.h"


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