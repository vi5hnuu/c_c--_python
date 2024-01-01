import  os
def convert(num):
    for x in ['bytes','kb','mb','gb','tb']:
        if num<1024.0:
            return "%3.1f%s"%(num,x)
        num/=1024.0

def file_size(file_path):
    if os.path.isfile(file_path):
        file_info=os.stat(file_path)
        return convert(file_info.st_size)

# print(os.getcwd().join('\\numbers.txt'))
file_path=r'c:\Windows\System32\mspaint.exe'
print(file_size(file_path))