#include <iostream>
using namespace std;
namespace ns1 {
    int foo (int a) {
        cout << "ns1::foo(int)" << endl;
        return a;
    }
};
namespace ns2 {
    double foo (double a){
        cout << "ns2::foo(double)" << endl;
        return a;
    }
}
int main() {
//    using namespace ns1;
    using namespace ns2;
    cout << foo(100) << endl;
    cout << foo(31.3) << endl;
    // using ns1::foo;
    // cout << foo(100) << endl;
    // cout << foo(3.14) << endl;
    // using ns2::foo;
    // cout << foo(100) << endl;
    // cout << foo(3.14) << endl;
    return 0;
}