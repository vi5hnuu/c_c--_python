import sys


# if len(sys.argv)!=4:
#     print('Incorrect usage.')
#     print('calc operator number number')
#     sys.exit(1)
#
# operator=sys.argv[1]
# m=int(sys.argv[2])
# n=int(sys.argv[3])
# if operator=='+':
#     print('result ',m+n)
# elif operator=='-':
#     print('result ',m-n)
# elif operator=='*':
#     print('result ',m*n)
# elif operator=='/':
#     print('result ',m/n)
# elif operator=='//':
#     print('result ',m//n)
# elif operator=='**':
#     print('result ',m**n)
# elif operator=='%':
#     print('result ',m%n)
# else:
#     print('Invalid operator.')


#######################################
#######################################
#######################################

import sys
import getopt


if len(sys.argv)!=4:
    print('Incorrect usage.')
    print('calc operator number number')
    sys.exit(1)

try:
    options,arguement=getopt.getopt(sys.argv[1:],'+-*/%')
except getopt.GetoptError:
    print('Incorrect usage.')
    print('calc operator number number')
    sys.exit(1)
m=int(sys.argv[2])
n=int(sys.argv[3])
for opt,arg in options:
    if opt == '-+':
        print('result ', m + n)
    elif opt == '--':
        print('result ', m - n)
    elif opt == '-*':
        print('result ', m * n)
    elif opt == '-/':
        print('result ', m / n)


