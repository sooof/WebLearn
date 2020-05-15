# WebLearn

###### 0X01 --- gin：

*  HelloWorld

使用gin 部署vue前端服务的 HelloWorld

```
npm run dev

```

* bootstrapvue-demo

使用gin 和 bootstrapvue部署vue前端服务的hellworld版 bootstrapvue-demo


###### 0X02 --- beego：

* Hello:

使用beego 部署vue前端服务的 hello

* app

使用beego 部署vue前端服务的 hello, 测试 c.Ctx.WriteString

* app001

使用beego 部署vue前端服务的 hello, 测试 各种输出.


###### 0X03 --- vue：

* project000

使用vue hellworld

* project001

使用vue-cli 前端服务的 todolist

```run
npm install
npm run dev

(npm run dev/serve)

```

###### 0X03 --- 使用gin：

```
go run main.go
```

###### 0X04 --- 使用beego：


```
bee new app

bee run

```

###### 0X05 --- 使用vue：


```
vue create calculator
vue create bootstrapvue-demo
npm install bootstrap-vue bootstrap axios
npm run build //产出的indext.html和资源会被编译打包进dist文件夹

npm run dev

```

###### 0X06 --- 使用beego 部署vue前端服务的 hello:


为什么不直接采用npm run dev
第一，npm run发起的服务(未验证)很可能是利用前端服务对象开启的，其性能远远不如go的后端服务性能;第二，把vue的前端项目部署到go发起的http服务上，当后端语言也采用go时，有利于服务器上前后端代码同时维护~。

前提
node
vue
vue-cli
go
Â
因为不是入门级文章，上述的环境准备不多做介绍。


```

* vue init webpack projectx 省略一系列package.json的设置
* cd projectx
* npm run build //产出的indext.html和资源会被编译打包进dist文件夹
* 在src下新建main.go
*


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


* go run main.go
* 浏览器输入http:localhost:8080/hello/
```
