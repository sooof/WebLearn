#! /usr/bin/python3
# argExam001

import os 
import sys, io
sys.stdout = io.TextIOWrapper(sys.stdout.buffer,encoding='utf-8')

USAGE = '''
正确的用法：
./showZip001.py example.zip
or
python3 ./showZip001.py example.zip
'''
def main(argv):
     # 判断argv的长度，如果脚本被直接执行(argv的值为当前脚本的路径)，如果执行命令是python demo.py 加两个参数(argv的长度就为3(以此类推))
    if len(argv) != 2:
        print(USAGE) 
        exit(1) 
    path = argv[1]  # 文件路径
    print(path) 
    if os.path.exists(path):  # 如果文件存在
        # 删除文件，可使用以下两种方法。
        os.remove(path)  
        #os.unlink(path)
        print('删除文件，可使用以下两种方法。')
    else:
    # 则返回文件不存在
       print('no such file:%s'%my_file) 

if __name__=='__main__':
    main(sys.argv) 
