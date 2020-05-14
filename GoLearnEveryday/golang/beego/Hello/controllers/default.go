package controllers

import (
	"io"
	"github.com/astaxie/beego"
	"net/http"
)

type MainController struct {
	beego.Controller
}

func (c *MainController) Get() {
	c.Data["Website"] = "beego.me"
	c.Data["Email"] = "astaxie@gmail.com"
	c.TplName = "index.html"
	// c.Ctx.WriteString("HHHooLLLLL")
	
}

func SayHello(w http.ResponseWriter, r *http.Request) {
	io.WriteString(w, "Hello world.")
}

