# DOCKER

#########

```
12:57:12_@raylea:ubuntu12.04$ docker images
REPOSITORY               TAG                 IMAGE ID            CREATED             SIZE
<none>                   <none>              46ab6bd3e029        2 minutes ago       462MB
sshuhd                   latest              1dc5c9d03fb8        11 days ago         1.05GB
ubuntu                   latest              adafef2e596e        3 weeks ago         73.9MB
uhd                      latest              e5d0b108ca4f        4 weeks ago         968MB
dev_ubuntu               1204                17d04688641f        4 weeks ago         562MB
ubuntu                   18.04               8e4ce0a6ce69        5 weeks ago         64.2MB
debian                   jessie              a3590c0e9ff9        7 weeks ago         129MB
rocm/dev-ubuntu-18.04    latest              9078852fde5a        7 weeks ago         3.09GB
rastasheep/ubuntu-sshd   18.04               08f01ce8fd9f        2 years ago         234MB
ubuntu                   12.04               5b117edd0b76        3 years ago         104MB
13:01:19_@raylea:ubuntu12.04$ docker container ls -a
CONTAINER ID        IMAGE               COMMAND                  CREATED             STATUS                       PORTS                   NAMES
1640c86f5687        46ab6bd3e029        "/bin/sh -c 'rpt-get…"   2 minutes ago       Exited (127) 2 minutes ago                           focused_easley
b530fb287f77        dev_ubuntu:1204     "/usr/sbin/sshd -D"      3 hours ago         Up 3 hours                   0.0.0.0:32769->22/tcp   bold_turing
accbbc2d4a42        sshuhd              "/etc/init.d/ssh sta…"   11 days ago         Exited (137) 18 hours ago                            musing_meninsky
69ef446d1370        uhd                 "bash"                   11 days ago         Exited (0) 11 days ago                               thirsty_satoshi
79ee992a92b3        dev_ubuntu:1204     "/usr/sbin/sshd -D"      4 weeks ago         Exited (0) 3 hours ago                               test_ssh
13:01:26_@raylea:ubuntu12.04$ docker rm 1640c86f5687
1640c86f5687
13:02:30_@raylea:ubuntu12.04$ docker rmi 46ab6bd3e029
Deleted: sha256:46ab6bd3e0296190a386a5fb67f9cc05627c4bc7dacd321ac8f54fb99e77883f
Deleted: sha256:8d734954cff493c304e6b65655b609ad214b93d7d9806742e531eae77e0794b4
Deleted: sha256:876f1b30692a9cefaaa3f4a3fc31ac6121dc1b8e1cd4f89fbcb6b3fc1f2912b3
Deleted: sha256:c0d1843548deee3fccbe5fd877349d69069e04ff9be7a29d3fa02df0d505d3ae
Deleted: sha256:102c00f51945f3a1c18ac6ba23237fdc66c6180c91141cdffc7787ad841c740b
Deleted: sha256:06337de41d7d6be6301a05a81b1684f2526b020f33bc6ab159d0674010049f13
Deleted: sha256:dbef2d63184365f39fdf3f9612a3ed6ab353c7626a6cfcc73175751fcca76133
Deleted: sha256:3014afe701afc411a136b55a093255c92d9f87d67a3346bc636c929353f05ef0
Deleted: sha256:e854b0f9912a3dc192486851c7ddad624bd39ea5f64e2463d59cf5b91d1ff764
Deleted: sha256:87c5828f496137d019fd6c5f7eb27592b79f8b554abffa61a7178b63275f3df5
Deleted: sha256:047b22bb7c76257c0b96a858d17ba3a7097925be8a2a667b5ec462eaf0501c00
```

cp文件到docker image ， 79ee992a92b3为docker CONTAINER ID
docker cp Dropbox/vimconf.tar  79ee992a92b3:/root/
