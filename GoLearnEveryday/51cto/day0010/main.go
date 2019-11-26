package main

import "fmt"

func List(n int) {
	for i := 0; i <= n; i++ {
		fmt.Printf("%d+%d=%d\n", i, n-i, n) /*format:*/
	}
}
func main() {
	List(6)
}
