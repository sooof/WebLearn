#! /usr/bin/python3
# showZip.py
# Copies an entire folder and its contents into
# a zip file whose filename increments.

import zipfile, os

def main():
    print('Hello, world!')
    os.chdir('./')
    exampleZip = zipfile.ZipFile('example.zip')
    print(exampleZip.namelist())
    #spamInfo = exampleZip.getinfo('spam.txt')
    #spamInfo.compress_size
    #'Compressed file is %sx smaller!' % (round(spamInfo.file_size / spamInfo.compress_size, 2))
    exampleZip.close()

if __name__=='__main__':
    main()

