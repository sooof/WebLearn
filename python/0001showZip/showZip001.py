#! /usr/bin/python3
# showZip.py
# Copies an entire folder and its contents into
# a zip file whose filename increments.

import zipfile, os, sys
import io 

USAGE = '''
正确的用法：
./showZip001.py example.zip
or
python3 ./showZip001.py example.zip
'''

sys.stdout = io.TextIOWrapper(sys.stdout.buffer,encoding='utf-8')

def main(argv):
     # 判断argv的长度，如果脚本被直接执行(argv的值为当前脚本的路径)，如果执行命令是python demo.py 加两个参数(argv的长度就为3(以此类推))
    if len(argv) != 2:
        # 如果传入的参数不足，输出正确用法  
        print(USAGE) 
        # 异常退出(下面的代码将不会被执行) 
        exit(1) 

    print(argv[1])
 #   print(argv[2])
    os.chdir('./')
    exampleZip = zipfile.ZipFile(argv[1])
    print(exampleZip.namelist())
    #spamInfo = exampleZip.getinfo('spam.txt')
    #spamInfo.compress_size
    #'Compressed file is %sx smaller!' % (round(spamInfo.file_size / spamInfo.compress_size, 2))
  #  exampleZip.close()

if __name__=='__main__':
    main(sys.argv)

