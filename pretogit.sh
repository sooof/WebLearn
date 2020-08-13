#!/bin/bash

echo -e "1 > 删除当前目录的.DS_store.\n"
find ../ -name .DS_Store -exec rm {} \;
echo -e "2 > 删除\n"
rm -rf "./c++/slc++/github.com"
git add .
echo -e "4 > ggit commit -m \n"
read -p "enter a commit: " commit
git commit -m "$commit"
echo -e "5 > git push -u origin master.\n"
git push -u origin master
echo -e "done.\n"
exit 0;