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
#define PART  THREE

class Solution {
    public:
    int reverse(int x) {
        int ans = 0;
        while (x != 0) {
            int pop = x % 10;
            // if (ans > Integer.MAX_VALUE / 10 || (ans == Integer.MAX_VALUE / 10 && pop > 7)) 
            //     return 0;
            // if (ans < Integer.MIN_VALUE / 10 || (ans == Integer.MIN_VALUE / 10 && pop < -8)) 
            //     return 0;
            ans = ans * 10 + pop;
            x /= 10;
        }
        return ans;
    }
};


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
   
    // std::cout << 321%10 <<std::endl;
    int v = 1234;
    Solution m;
    
    std::cout << m.reverse(v) <<std::endl;
    cout << "Hello, World!\n";
    return 0;
#endif
}