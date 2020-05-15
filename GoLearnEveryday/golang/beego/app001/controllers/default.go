package controllers

import (
	"github.com/astaxie/beego"
)

type MainController struct {
	beego.Controller
}

func (c *MainController) Get() {
	//	c.Ctx.WriteString("appname:"+beego.AppConfig.String("appname")+
	//	"\n httpport:" + beego.AppConfig.String("httpport") +
	//	"\n runmode:" + beego.AppConfig.String("runmode"))

	c.Data["Website"] = "beego.me"
	c.Data["Email"] = "astaxie@gmail.com"
	c.TplName = "index.html"

	c.Data["TrueCond"] = true
	c.Data["FalseCond"] = false

	type u struct {
		Name string
		Age  int
		Sex  string
	}

	user := &u{
		Name: "joe",
		Age:  20,
		Sex:  "Male",
	}

	c.Data["User"] = user

	nums := []int{1, 2, 3, 4, 5, 6, 7, 8, 9, 0}
	c.Data["Nums"] = nums

	c.Data["Tplvar"] = "hey guy"
	c.Data["Html"] = "<div> hello beego</div>"

	c.Data["Pipe"] = "<div> hello beego</div>"
}
