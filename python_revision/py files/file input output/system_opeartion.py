import os
import shutil

# print(os.name)
# print(os.getcwd())
# print(os.path)
# print(os.listdir('.'))
# print(os.listdir('..'))
# if os.path.exists('mydir'):
#     print('mydir already exist')
# else:
#     os.mkdir('mydir')
# os.chdir('.\\mydir')
# os.makedirs('.\\dir1\\dir2\\dir3')
# f=open('myfile.txt','w')
# f.write('Having one child makes you parent')
# f.write('Having two you are a referee')
# f.close()
# stats=os.stat('myfile.txt')
# print('size=',stats.st_size)
# os.rename('myfile.txt','yourfile.txt')
# shutil.copyfile('yourfile.txt','ourfile.txt')
# os.remove('yourfile.txt')

curpth=os.path.abspath('.')
print(curpth)
os.path.join(curpth,'yourfile.txt')
if os.path.isfile(curpth):
    print('file exist')
else:
    print('not exist')