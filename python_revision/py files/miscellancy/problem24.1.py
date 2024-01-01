import os,sys,getopt

if len(sys.argv)==1:
    print(os.listdir('.'))
    sys.exit()

try:
    options,arguement=getopt.getopt(sys.argv[1:],'hlw')
    print(options)
    print(arguement)
    for opt,arg in options:
        if opt=='-h':
            print('mydir -h -l -w')
            sys.exit(-1)
        elif opt=='-l':
            lst=os.listdir('.')
            print(*lst,sep='\n')
        elif opt=='-w':
            lst=os.listdir('.')
            print(*lst,sep='\t')
except getopt.GetoptError:
    print('mydir.py -h -l -w')
