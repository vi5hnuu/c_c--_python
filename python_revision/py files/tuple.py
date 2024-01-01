# c='vihsnu',25,120000
# print(c)
# print(type(c))
# tpl1=(10,)*2
# tpl2=(10)*2
# print(tpl1)
# print(tpl2)

# records=(('vishnu',10,20),('krishan',10,20),('laxmi',10,20),('pooja',10,20),('parkash',10,20))
# for x,y,z in records:
#     print(x,y,z)
#
# c=0
# for x in records:
#     for m in x:
#         print(m,end=' ')
#     print()

# result=divmod(17,3)
# print(result)
# t=(17,3)
# result=divmod(*t)
# print(result)

# lst=['suhubha','nisha','sudha',('suresh',),('rajesh',),'radha']
# boys=[]
# girls=[]
# for ele in lst:
#     if isinstance(ele,tuple):
#         boys.append(*ele)
#     else:
#         girls.append(ele)
# print(boys)
# print(girls)

# lst=[('vishnu',10,20),('krishan',10,20),('laxmi',10,20),('pooja',10,20),('parkash',10,20)]
# nlst=[]
# for ele in lst:
#     nlst=nlst+[ele[0]]
# print(nlst)

# lst=[('vishnu',10,20),('krishan',10,20),('laxmi',10,20),('pooja',10,20),('parkash',10,20)]
# nlst=[]
# for ele,_,_ in lst:
#     nlst=nlst+[ele]
# print(nlst)

# tpl=('f','i','a','b','b','e','r','g','a','s','t','e','d')
# tpl=tpl+('!',)
# s=str(tpl)
# print(s)
# s=''.join(tpl)
# s='-'.join(tpl)
# print(s)
# t=tpl[3:5]
# print(t)
# count=tpl.count('e')
# print('count ',count)
# print('r' in tpl)
# lst=list(tpl)
# print(lst)
# tpl=tpl[:3]+tpl[7:]
# print(tpl)

