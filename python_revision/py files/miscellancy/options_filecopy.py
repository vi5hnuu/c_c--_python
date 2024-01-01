# import sys,getopt
# import shutil
# if len(sys.argv)==1:
#     print('incorrect usage')
#     print('correct usage :filecopy  -s source -t target or -h for help.')
#     sys.exit(-1)
# source=''
# target=''
# try:
#     options,arguements=getopt.getopt(sys.argv[1:],'hs:t:')
# except getopt.GetoptError:
#     print('filecopy -s source -t target or -h for help')
# print(arguements)
# print(options)
# for  opt,arg in options:
#     if opt=='-h':
#         print('filecopy -s source -t target or -h for help')
#         sys.exit(-1)
#     elif opt=='-s':
#         source=arg
#     elif opt=='-t':
#         target=arg
# print('source file :',source)
# print('target file :',target)
# if source and target:
#     shutil.copyfile(source,target)


##############################
##############################
##############################
import sys,getopt
import shutil
sys.argv=['./options_filecopy.py', '-s', 'source.txt' ,'-t', 'target.txt']
if len(sys.argv)==1:
    print('incorrect usage')
    print('correct usage :filecopy  -s source -t target or -h for help.')
    sys.exit(-1)
source=''
target=''
try:
    options,arguements=getopt.getopt(sys.argv[1:],'hs:t:')
except getopt.GetoptError:
    print('filecopy -s source -t target or -h for help')
print(arguements)
print(options)
for  opt,arg in options:
    if opt=='-h':
        print('filecopy -s source -t target or -h for help')
        sys.exit(-1)
    elif opt=='-s':
        source=arg
    elif opt=='-t':
        target=arg
print('source file :',source)
print('target file :',target)
if source and target:
    shutil.copyfile(source,target)