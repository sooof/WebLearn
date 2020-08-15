#!/bin/bash

echo -e "1 > mv 文件夹 back .\n"
cd go   && mv   ../../../gobak/* . && cd -
echo -e "done.\n"
exit 0;