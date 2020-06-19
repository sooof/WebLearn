# C++ Error


## 0x01 ---

* 无头文件

```
sooof@svm:~/WorkSpace/c++$ g++ hello.cpp
hello.cpp: In function ‘int main()’:
hello.cpp:5:2: error: ‘cout’ was not declared in this scope
  cout << "Hello, World!";
  ^~~~
```

* 头文件拼写错误，无此文件

```
sooof@svm:~/WorkSpace/c++$ g++ hello.cpp
hello.cpp:2:10: fatal error: ./lib/std_lib_facilitis.h: No such file or directory
 #include "./lib/std_lib_facilitis.h"
          ^~~~~~~~~~~~~~~~~~~~~~~~~~~
compilation terminated.
```

* 没有“终止符

```
sooof@svm:~/WorkSpace/c++$ g++ hello.cpp
hello.cpp:5:10: warning: missing terminating " character
  cout << "Hello, World!;
          ^
hello.cpp:5:10: error: missing terminating " character
  cout << "Hello, World!;
          ^~~~~~~~~~~~~~~
hello.cpp: In function ‘int main()’:
hello.cpp:6:2: error: expected primary-expression before ‘return’
  return 0;
  ^~~~~~

```

* integer 是错误的，int是正确的

```
sooof@svm:~/WorkSpace/c++$ g++ hello.cpp
hello.cpp:5:10: warning: missing terminating " character
  cout << "Hello, World!;
          ^
hello.cpp:5:10: error: missing terminating " character
  cout << "Hello, World!;
          ^~~~~~~~~~~~~~~
hello.cpp:3:1: error: ‘integer’ does not name a type
 integer main()
 ^~~~~~~

```
