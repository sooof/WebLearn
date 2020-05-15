package controllers

import (
	"github.com/astaxie/beego"
)

type MainController struct {
	beego.Controller
}

func (c *MainController) Get() {
	c.Ctx.WriteString("appname:"+beego.AppConfig.String("appname")+
	"\n httpport:" + beego.AppConfig.String("httpport") +
	"\n runmode:" + beego.AppConfig.String("runmode"))
}
