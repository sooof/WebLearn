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
#include "../../lib/libch.h"

using namespace std;
// program part choose
#define PART  ONE

void forEach(int a[], const int& len){
    for(int i =0; i < len; ++i)
        cout << a[i] +5<< ' ';
    cout << endl;
}


int SAFE_MAIN(int argc, char* argv[])
// int main(int argc, char* argv[])
{
#if PART == ONE
    cout << "Hello, This is PART " << PART << "\n";
    std::cout << "Hello, World!\n";

    int a[] = {12, 6, 90, 8};
    forEach(a, 4);

    for(int i = 0; i < 4; ++i)
        cout << a[i] << ' ';
    cout << endl;

	return 0;
#endif

#if PART == TWO
    cout << "Hello, This is PART " << PART << "\n";
    
    int a,b;
    if(argv[1]==0x00||argv[2]==0x00) {	
        printf("Please input argv[1] and argv[2].\n");		    return 0;
    }
    a = atoi(argv[1]);
	b = atoi(argv[2]);
  
	std::cout << a + b <<std::endl;
    return 0;
#endif

#if PART == THREE
    cout << "Hello, This is PART " << PART << "\n";
    cout << "Hello, World!\n";

    return 0;
#endif
}