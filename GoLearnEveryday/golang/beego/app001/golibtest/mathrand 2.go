package golibtest

import (
	"fmt"
	"math/rand"
	"strconv"
	"time"
)

func init() {
	//已时间化为种子因子.***beego是否已经设定了Seed???***
	rand.Seed(time.Now().UnixNano())
}

// Mrand01 Outputs to terminal
func Mrand01() {
	fmt.Println("My favorite number is", rand.Intn(10))
	fmt.Println("My favorite number is", rand.Intn(10))
	fmt.Println("My favorite number is", rand.Intn(10))
	fmt.Println("My favorite number is", rand.Intn(10))
	fmt.Println("My favorite number is", rand.Intn(10))
	fmt.Println("My favorite number is", rand.Intn(10))
	fmt.Println("My favorite number is", rand.Intn(10))
	fmt.Println("My favorite number is", rand.Intn(10))
	fmt.Println("My favorite number is", rand.Intn(10))
}

// Mrand01tohtml Outputs to html
func Mrand01tohtml() string {
	var i int = rand.Intn(10)
	str1 := strconv.Itoa(i)
	return "My favorite number is " + str1
}

// Mrandseed01tohtml Outputs to html
func Mrandseed01tohtml() string {
	var i int = rand.Int()
	str1 := strconv.Itoa(i)
	return "My favorite number is " + str1
}
