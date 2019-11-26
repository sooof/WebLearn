package main

import (
	"fmt"
)

func main() {
	sn1 := struct {
		age  int
		name string
	}{age: 11, name: "qq"}
	sn2 := struct {
		age  int
		name string
	}{age: 11, name: "qq"}

	if sn1 == sn2 {
		fmt.Println("sn1 ==sn2")
	}

	sm1 := struct {
		age int
		m   map[string]string
	}{age: 11, m: map[string]string{"a": "1"}}
	sm2 := struct {
		age int
		m   map[string]string
	}{age: 11, m: map[string]string{"a": "1"}}

	//if sm1 == sm2 {
	//struct里面包含了不可比较的类型map
	//1，结构体只能比较是否相等，但不能比较大小
	//2，相同但结构体才能进行比较，结构体是否相同不但与属性类型有关，还与属性顺序相关。
	//3，如果struct的所有成员都可以比较，则该
	//	fmt.Println("sm1 == sm2")
	//}
	fmt.Println(sm1)
	fmt.Println(sm2)

}
