# import sys
# import getopt
# sys.argv=['ex_24b.py','-o','vishnu','-n','VISHNU','-f','source.txt']
# if len(sys.argv)!=7:
#     print('incorrect usage')
#     print('change -o oldword -n newword -f filename')
#     sys.exit(1)
# try:
#     opt,arg=getopt.getopt(sys.argv[1:],'ho:n:f:')
#     print(opt)
#     print(list(opt))
#     print(arg)
#     print(list(arg))
#     print(opt,arg)
# except getopt.GetoptError:
#     print('change -o oldword -n newword -f filename')
#
# for op,arg in opt:
#     if op=='-h':
#         print('change -o oldword -n newword -f filename')
#         sys.exit(0)
#     elif op=='-o':
#         oldword=arg
#     elif op=='-n':
#         newword=arg
#     elif op=='-f':
#         filename=arg
#
# else:
#     print('oldword ',oldword)
#     print('new word ',newword)
#     print('filename ',filename)
#     if oldword and newword and filename:
#         f=open(filename,'r')
#         data=f.read()
#         f.close()
#         data=data.replace(oldword,newword)
#         f=open(filename,'a')
#         f.write('\n'+data)
#         f.close()


#####################
import sys
import getopt
sys.argv=['ex_24b.py','-o','vishnu','-n','VISHNU','-f','source.txt','option me aayega']
# if len(sys.argv)!=7:
#     print('incorrect usage')
#     print('change -o oldword -n newword -f filename')
#     sys.exit(1)
try:
    opt,arg=getopt.getopt(sys.argv[1:],'ho:n:f:')
    print(opt)
    print(list(opt))
    print(arg)
    print(list(arg))
    print(opt,arg)
except getopt.GetoptError:
    print('change -o oldword -n newword -f filename')

for op,arg in opt:
    if op=='-h':
        print('change -o oldword -n newword -f filename')
        sys.exit(0)
    elif op=='-o':
        oldword=arg
    elif op=='-n':
        newword=arg
    elif op=='-f':
        filename=arg

else:
    print('oldword ',oldword)
    print('new word ',newword)
    print('filename ',filename)
    if oldword and newword and filename:
        f=open(filename,'r')
        data=f.read()
        f.close()
        data=data.replace(oldword,newword)
        f=open(filename,'a')
        f.write('\n'+data)
        f.close()
