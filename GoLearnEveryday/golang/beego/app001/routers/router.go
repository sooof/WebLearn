package routers

import (
	"beego/app001/controllers"

	"github.com/astaxie/beego"
)

func init() {
	// beego.DelStaticPath("/static")
	// beego.SetStaticPath("//", "dist")
	// beego.SetStaticPath("//", "static")
	beego.Router("/", &controllers.MainController{})
}
