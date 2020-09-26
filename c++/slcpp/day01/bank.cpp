#include <iostream>
//农业银行namespac
namespace abc {
int  balance = 0;
    void save (int money) {
        balance += money;
    }

    void draw (int money) {
        balance -= money;
    }
}

//建设银行namespace
namespace ccb {
int  balance = 0;
    void save (int money) {
        balance += money;
    }

    void draw (int money) {
        balance -= money;
    }

    void salary (int money){
        balance += money;
    }
}
namespace abc {
    void salary (int money) {
        balance += money;
    }
    void print (int money) {
        std::cout << "农业银行 : ";
        save(money);
    }
}

 int main(void) {

     abc::save(5000);
     std::cout << "农业银行: " << abc::balance << std::endl;
     abc::draw(3000);
     std::cout << "农业银行: " << abc::balance << std::endl;

     ccb::save(8000);
     std::cout << "建设银行: " << ccb::balance << std::endl;
     ccb::draw(3000);
     std::cout << "建设银行: " << ccb::balance << std::endl;

     return 0;
 }