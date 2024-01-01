#offset cipher
# def encrypt(f1,f2):
#     data=f1.read()
#     for ch in data:
#         f2.write(chr(ord(ch)+128))
#
# def decrypt(f1,f2):
#     data=f1.read()
#     for ch in data:
#         f2.write(chr(ord(ch)-128))
#
# source=input('Enter the source file name:')
# target=input('Enter the target file name:')
# f1=open(source+'.txt','r',encoding='utf-8')
# f2=open(target+'.txt','w',encoding='utf-8')
# ch=input('Encrypt or decrypt(e/d) :')
# if ch.lower()=='e':
#     encrypt(f1,f2)
# elif ch.lower()=='d':
#     decrypt(f1,f2)
# f1.close()
# f2.close()


#substitution cipher

def encrypt(f1,f2):
    s1='`1234567890-=~@#$%^&*()_+qwertyuiop[]QWERTYUIOP{}asdfghjkl;\'ASDFGHJKL:"zxcvbnm,./ZXCVBNM<>?'
    s2='\'ASDFGHJKL:"zxcvbnm,./ZXCVBNM<>?1123456789-=~!@#$%^&*()_+qwertyuiop[]QWERTYUIOP{}asdfghjkl;'
    data=f1.read()
    for ch in data:
        pos=s1.find(ch)
        if pos==-1:
            f2.write(ch)
        else:
            f2.write(s2[pos])

def decrypt(f1,f2):
    s1 = '`1234567890-=~@#$%^&*()_+qwertyuiop[]QWERTYUIOP{}asdfghjkl;\'ASDFGHJKL:"zxcvbnm,./ZXCVBNM<>?'
    s2 = '\'ASDFGHJKL:"zxcvbnm,./ZXCVBNM<>?1123456789-=~!@#$%^&*()_+qwertyuiop[]QWERTYUIOP{}asdfghjkl;'
    data=f1.read()
    for ch in data:
        pos=s2.find(ch)
        if ch==-1:
            f2.write(ch)
        else:
            f2.write(s1[pos])
source=input('Enter the source file name:')
target=input('Enter the target file name:')
f1=open(source+'.txt','r',encoding='utf-8')
f2=open(target+'.txt','w',encoding='utf-8')
ch=input('Encrypt or decrypt(e/d) :')
if ch.lower()=='e':
    encrypt(f1,f2)
elif ch.lower()=='d':
    decrypt(f1,f2)
f1.close()
f2.close()