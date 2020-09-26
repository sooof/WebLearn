#include <iostream>
using namespace std;
//void foo (int a) {}
int foo (int a) {
    cout << "foo(int)" << endl;
}
void bar (int a) {}
int foo (int a, double b){
    cout << "foo(int, double)" << endl;
}
// int foo (double a, int b){
//     cout << "foo(double, int)" << endl;
// }
int main(void){
    foo(100);
    foo(1.3, 100);
    //foo(100, 1.32);
    foo(100,100);
    return 0;
}


