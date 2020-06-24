package main

import (
	"beego/app001/golibtest"
	_ "beego/app001/routers"

	"github.com/astaxie/beego"
)

func main() {
	// beego.BConfig.WebConfig.ViewsPath = "dist"

	//beego.SetStaticPath
	golibtest.Mrand01()
	beego.Run()
}
