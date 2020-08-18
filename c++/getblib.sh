#!/bin/bash

echo -e "installing BjarneStroustrup lib ...\n"
mkdir -p github.com/BjarneStroustrup/
cd github.com/BjarneStroustrup/
git clone https://github.com/BjarneStroustrup/Programming-_Principles_and_Practice_Using_Cpp.git
cd ../..
echo -e "done.\n"
exit 0;
