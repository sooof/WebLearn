package main

import (
	"fmt"
)

/*

//1>
func main() {
  //new([]int)之后的list是一个*[]int类型的指针，不能对指针执行append操作
	//可以make()初始化后使用  list := make([]int, 0),
	//同样的，map和channel建议使用make()或字面量的初始化？？？
	//list := new([]int)
	list := make([]int, 0)
	list = append(list, 1)//first must slice
	fmt.Println(list)
}
*/
/*
//2>
func main() {
	s1 := []int{1, 2, 3}
	s2 := []int{4, 5}
	s1 = append(s1, s2)//s2 err，
	//append的第二个参数不能直接使用slice,需要使用...操作符
	//
	fmt.Println(s1)
}
*/

var (
	//size     := 1024
	size     = 1024
	max_size = size * 2
)

func main() {
	fmt.Println(size, max_size)
}
