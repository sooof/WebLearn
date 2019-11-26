package main

import (
	"fmt"
)

/*1>
func main() {
	s := make([]int, 5)
	s = append(s, 1, 2, 3)
	fmt.Println(s)
}
// 11:50:02_@raylea:GoLearnEveryday$ go run main_day0030.go
// [0 0 0 0 0 1 2 3]

*/

func main() {
	s := make([]int, 0)
	s = append(s, 1, 2, 3, 4)
	fmt.Println(s)
}

//
//11:57:20_@raylea:GoLearnEveryday$ go run main_day0030.go
//[1 2 3]
