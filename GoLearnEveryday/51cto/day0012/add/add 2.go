package add

import "fmt"

var Name string = "Hello world"
var Age = 10

func Add() {
	fmt.Printf( /*format:*/ "%d\n", Age)
	// for i := 0; i <= n; i++ {
	// 	fmt.Printf( /*format:*/ "%d+%d=%d\n", i, n-i, n)
	// }
}
