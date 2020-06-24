package main

import (
	"fmt"
)

func variableZeroValue() {
	// var a int
	// var b string
	// var c bool
	// fmt.Printf("%d %q %v", a, b, c)
	var a, b int = 2, 3
	fmt.Printf("%d %q ", a, b)
}

func main() {
	variableZeroValue()
	// fmt.Println("aa.Age")
	// fmt.Println(aa.Name)
	// fmt.Println(aa.Age)
	// list.List(6)
}
