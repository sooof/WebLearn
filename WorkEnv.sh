#!/bin/bash

echo -e "1 > 恢复文件夹位置 .\n"
cd go   && mv   ../../../gobak/* . && cd -
echo -e "* > done !!!\n"
exit 0;