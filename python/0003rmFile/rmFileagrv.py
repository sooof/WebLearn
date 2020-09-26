#! /usr/bin/python3
# argExam001

import os 
import sys, io
sys.stdout = io.TextIOWrapper(sys.stdout.buffer,encoding='utf-8')

path = './txt'  # 文件路径
if os.path.exists(path):  # 如果文件存在
    # 删除文件，可使用以下两种方法。
    os.remove(path)  
    #os.unlink(path)
    print('删除文件，可使用以下两种方法。')
else:
    # 则返回文件不存在
    print('no such file:%s'%my_file)  
