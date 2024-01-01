# num=int(input('Enter any number of digit number :'))
# orinum=num;
# revnum=0
# while num>0:
#     rem=num%10
#     revnum=(revnum*10)+rem
#     num=num//10
#
# print('original ',orinum)
# print('reversed ',revnum)
# if(orinum==num):
#     print('match')
# else:
#     print('No match')

nm=input('Enter the number :')
mn=nm[::-1]
print('original '+nm)
print('reversed '+mn)
if(int(nm)==int(mn)):
    print('Match')
else:
    print('No match')