# C++ Error

```
sooof@svm:~/WorkSpace/c++$ g++ hello.cpp
hello.cpp: In function ‘int main()’:
hello.cpp:5:2: error: ‘cout’ was not declared in this scope
  cout << "Hello, World!";
  ^~~~
```

```
sooof@svm:~/WorkSpace/c++$ g++ hello.cpp
hello.cpp:2:10: fatal error: ./lib/std_lib_facilitis.h: No such file or directory
 #include "./lib/std_lib_facilitis.h"
          ^~~~~~~~~~~~~~~~~~~~~~~~~~~
compilation terminated.
```

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
