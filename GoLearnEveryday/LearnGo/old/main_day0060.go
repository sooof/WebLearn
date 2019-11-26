package main

import "fmt"

type MyInt1 int   //MyInt1是基于int创建的新类型
type MyInt2 = int //MyInt是类型别名，其本质还是int

func main() {
	var i int = 0
	//var i1 MyInt1 = i // MyInt1是新类型
	var i1 MyInt1 = MyInt1(i)
	var i2 MyInt2 = i
	fmt.Println(i1, i2)
}

//通过变量访问其成员name：p.name ; (*p).name
