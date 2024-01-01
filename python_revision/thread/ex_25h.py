import sys
import threading
import os
import shutil

def copy_file(input_file,output_file):
    shutil.copyfile(input_file,output_file)
    s=input_file+' copied!\n'
    print(s)
source=sys.argv[1]
target=sys.argv[2]

if not os.path.exists(source):
    print('source path does not exist.')
if not os.path.exists(target):
    os.mkdir(target)

os.chdir(source)
lst=os.listdir('.')
tharr=[]
for file in lst:
    source_path=source+'\\'+file
    target_path=target+'\\'+file
    th=threading.Thread(target=copy_file,args=(source_path,target_path))
    th.start()
    tharr.append(th)
for th in tharr:
    th.join()
