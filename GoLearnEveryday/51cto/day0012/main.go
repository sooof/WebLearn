package main

import (
	aa "GoLearnEveryday/51cto/day0012/add"
	"fmt"
)

//import "GoLearnEveryday/day1/list"
// func List(n int) {
// 	for i := 0; i <= n; i++ {
// 		fmt.Printf("%d+%d=%d\n", i, n-i, n) /*format:*/
// 	}
// }
func main() {
	aa.Add()

	fmt.Println(aa.Name)
	fmt.Println(aa.Age)
	// list.List(6)
}
