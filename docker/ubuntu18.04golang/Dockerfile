# Ubuntu C++ 编译环境
# 参考
# https://www.binss.me/blog/learn-docker-with-me-about-building-compiler-environment/
# https://blog.phpgao.com/zsh_in_docker.html

From ubuntu:18.04
LABEL sooof sooof@me.com

# 换源
RUN apt-get update > /dev/null 2> /dev/null

# 编译工具
RUN apt-get install -y build-essential > /dev/null 2> /dev/null
RUN apt-get install -y cmake > /dev/null 2> /dev/null
RUN apt-get install -y gdb gdbserver > /dev/null 2> /dev/null
RUN apt-get install -y git > /dev/null 2> /dev/null # git

RUN apt-get install -y rsync > /dev/null 2> /dev/null # Clion 需要 rsync 同步数据
RUN apt-get install -y rsync
RUN sed -ri 's/RSYNC_ENABLE=false/RSYNC_ENABLE=true/g' /etc/default/rsync
COPY rsync.conf /etc

# golang
RUN mkdir /root/Workspace
WORKDIR /root/Workspace
ADD https://dl.google.com/go/go1.13.9.linux-amd64.tar.gz ./
RUN tar xf go1.13.9.linux-amd64.tar.gz && rm go1.13.9.linux-amd64.tar.gz
RUN mv go /usr/local/go-1.13
RUN mkdir -p go
WORKDIR /root/Workspace/go
RUN mkdir -p bin src doc lib pkg



#vim ctags cscope vimrc 
RUN apt-get install -y vim > /dev/null 2> /dev/null # vim
RUN apt-get install -y ctags cscope >  /dev/null 2> /dev/null #
WORKDIR /root/Workspace
ADD https://rfagora.s3.amazonaws.com/sooof/software/development/tools/VIM/VimConf/vimconf.tar ./
RUN tar xf vimconf.tar && rm vimconf.tar
WORKDIR /root/Workspace/vimconf
RUN tar xf vim.tar -C /root
RUN rm /root/.vimrc
COPY vimrc /root/.vimrc
#COPY profile /root/.profile

#conf net ping
RUN apt-get update > /dev/null 2> /dev/null
RUN apt-get install -y  net-tools  > /dev/null 2> /dev/null # net-tools ,ifconfig
RUN apt-get install -y inetutils-ping > /dev/null 2> /dev/null# ping

# ssh服务器
# 参考 https://github.com/rastasheep/ubuntu-sshd/blob/ed6fffcaf5a49eccdf821af31c1594e3c3061010/18.04/Dockerfile
RUN apt-get update > /dev/null 2> /dev/null
RUN apt-get install -y openssh-server > /dev/null 2> /dev/null
RUN mkdir /var/run/sshd && \
    mkdir /root/.ssh
# 修改 root 的密码为 123456
RUN echo 'root:123456' | chpasswd
RUN sed -ri 's/^#?PermitRootLogin\s+.*/PermitRootLogin yes/' /etc/ssh/sshd_config
# SSH login fix. Otherwise user is kicked off after login
RUN sed -ri 's/UsePAM yes/#UsePAM yes/g' /etc/ssh/sshd_config

ENV NOTVISIBLE "in users profile"
RUN echo "export VISIBLE=now" >> /etc/profile

# 参考
# https://segmentfault.com/a/1190000015283092
# https://juejin.im/post/5cf34558f265da1b80202d75
# 安装 autojump 插件
RUN apt-get install -y autojump > /dev/null 2> /dev/null


# 删除 apt-get update 产生的缓存文件
# 因为 docker 的文件系统是层文件系统，上一个层中缓存有apt-get update的结果，
# 那么下次 Dockerfile 运行时就会直接使用之前的缓存，
# 这样 docker 中的 apt-get 软件源就不是最新的软件列表了，将会带来缓存过期的问题。
# 并且这些缓存将占用不少空间，导致最终生成的image非常庞大，
# 而这些垃圾文件是我们最终的image中无需使用到的东西，我们应当在Docker构建过程中予以删除。
RUN apt-get clean && \
    rm -rf /var/lib/apt/lists/* /tmp/* /var/tmp/* /root/Workspace/vimconf

RUN mkdir /root/sync

COPY entrypoint.sh /sbin
RUN chmod +x /sbin/entrypoint.sh
ENTRYPOINT [ "/sbin/entrypoint.sh" ]

