# WebLearn
```
下载：
git clone https://github.com/sooof/WebLearn.git

测试github是否联通：
ssh -T git@github.com

上传：
将自己的修改push到github上：
git add .
git commit -m "first commit"
git push -u origin master
or
git add --all
git commit -m "first commit"
git push -u origin master

更新：
git pull: 更新当前分支(将本地的文件更新到最新)
git pull origin master: 更新 origin remote 的 master 分支
git fetch: 获取服务器端的改动，比如其他用户新建了一个分支并push到了服务器，运行这个命令之后会得到这个分支的信息

git撤销已经push到远端的commit：
git log -2
git reset --hard d3b87bab6d216299d7167f9e53ac1ed43c6a1xxx
git push origin master --force

```

##  “What is the location of the “ifconfig” program on your machine?”

###### Step 1: Locate the ifconfig on Ubuntu

```
sudo apt-get install mlocate
sudo updatedb
sudo locate ifconfig
```

Then use the commands below to locate the ifconfig program…

```
sudo mlocate ifconfig
```

You should see something like this:

```
/usr/src/linux-headers-x.xx.x-xx/tools/hv/hv_set_ifconfig.sh
```

##### Step 2: Install Net-tools on Ubuntu

```
sudo apt install net-tools
```


## Yarn Installation using the official Yarn repository

##### Step1

Add Yarn repository by executing the below commands:

```
$ sudo curl -sS https://dl.yarnpkg.com/debian/pubkey.gpg | sudo apt-key add -
$ sudo sh -c "echo 'deb https://dl.yarnpkg.com/debian/ stable main' >> /etc/apt/sources.list"
$ sudo apt update
```

##### Step2

Install Yarn on your system. In case you have already installed Node.js on your Ubuntu 20.04 system you can avoid its installation by:

```
$ sudo apt --no-install-recommends install yarn
```

Otherwise simply executing the below command:

```
$ sudo apt install yarn
```

which will install yarn as well as Node.js from the standard Ubuntu repository.

##### Step3

Check the yarn version:

```
$ yarn --version
```

## Installing Google Chrome web browser on Ubuntu 20.04 Focal Fossa step by step instructions

##### step 1

First install the gdebi and wget packages. By using gdebi to install Google Chrome browser we also ensure that any possible package prerequisites are met during the installation:

```
$ sudo apt install gdebi-core wget
```

##### step 2

Download the Google Chrome browser package:

```
$ wget https://dl.google.com/linux/direct/google-chrome-stable_current_amd64.deb
```

##### step 3

Use gdebi command to install the prevously downloaded Google Chrome package:

```
$ sudo gdebi google-chrome-stable_current_amd64.deb
```

##### step 4

Use your GUI menu to start the Google Chrome browser or simply start it by executing the below command from your terminal:

```

```
