#include <iostream>
using namespace std;
void print (bool sex) {
    if(sex)
        cout << "男生" << endl;
    else
        cout << "女生" << endl;
}
int main(void) {
    // enum E {a, b ,c};
    // E e;
    //  e = a;
    //  e = b;
    //  e = c;
    bool b = true;
    cout << sizeof(b) << endl;
    cout << "bool = " << b << endl;
    cout << boolalpha << "b = "<< b << endl;

    bool sex;
    sex = 3;
    print(sex);
            
    return 0;
}