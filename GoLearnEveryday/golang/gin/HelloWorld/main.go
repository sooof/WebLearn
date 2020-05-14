package main

import (
  "github.com/gin-gonic/gin"
)

func main(){
  r := gin.Default()
  r.LoadHTMLGlob("dist/*.html")    // 添加入口index.html
  r.LoadHTMLFiles("static/*/*")	// 添加资源路径
  r.Static("/static", "./dist/static") 	// 添加资源路径
  r.StaticFile("/hello/", "dist/index.html")  //前端接口

  r.Run(":8080")
}
