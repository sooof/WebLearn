package main

import (
	_ "beego/app001/routers"

	"github.com/astaxie/beego"
)

func main() {
	// beego.BConfig.WebConfig.ViewsPath = "dist"

	//beego.SetStaticPath
	beego.Run()
}
