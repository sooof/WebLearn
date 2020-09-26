FROM       uhd
MAINTAINER Aleksandar Diklic "https://github.com/rastasheep"

RUN apt-get update

RUN apt-get install -y openssh-server
RUN apt-get install -y vim ctags cscope

WORKDIR /home/user/src
ADD https://rfagora.s3.amazonaws.com/sooof/software/development/tools/VIM/VimConf/vimconf.tar ./
RUN tar xf vimconf.tar && rm vimconf.tar
WORKDIR /home/user/src/vimconf
RUN tar xf vim.tar -C /root

RUN mkdir /var/run/sshd

RUN echo 'root:123456' |chpasswd

RUN sed -ri 's/^#?PermitRootLogin\s+.*/PermitRootLogin yes/' /etc/ssh/sshd_config
RUN sed -ri 's/UsePAM yes/#UsePAM yes/g' /etc/ssh/sshd_config

RUN mkdir /root/.ssh

RUN apt-get clean && \
    rm -rf /var/lib/apt/lists/* /tmp/* /var/tmp/*

EXPOSE 22

CMD    ["/usr/sbin/sshd", "-D"]
