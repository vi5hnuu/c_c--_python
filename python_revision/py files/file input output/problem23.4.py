import os,time

file='container.txt'
print(file)

created=os.path.getctime(file)
modified=os.path.getmtime(file)
accessed=os.path.getatime(file)
print(time.ctime(created))
print(time.ctime(modified))
print(time.ctime(accessed))