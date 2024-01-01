#a
# dt1=tuple(input('Enter the date seperated by space :').split(' '))
# dt2=tuple(input('Enter the date seperated by space :').split(' '))
# d1,m1,y1=[int(x) for x in dt1]
# d2,m2,y2=[int(x) for x in dt2]
# day1=[31,0,31,30,31,30,31,31,30,31,30,31]
# day2=[31,0,31,30,31,30,31,31,30,31,30,31]
#
# ndays1=(y1-1)*365
# ldays1=((y1-1)//4)-((y1-1)//100)+((y1-1)//400)
# tdays1=ndays1+ldays1
#
# if((y1%4==0 and y%100!=0) or (y1%400==0)):
#     day1[1]=29
# else:
#     day1[1]=28
#
# s1=sum(day1[0:m1-1])
# tdays1+=s1
#
# ndays2=(y2-1)*365
# ldays2=((y2-1)//4)-((y2-1)//100)+((y2-1)//400)
# tdays2=ndays2+ldays2
#
# if((y2%4==0 and y2%100!=0) or (y2%400==0)):
#     day2[1]=29
# else:
#     day2[2]=28
#
# s2=sum(day2[0:m2-1])
# tdays2+=s2
# diff=tdays2-tdays1
# print('difference in days ',diff)


#b
# import operator
# lst=[('key',101.25),('lock',320.85),('hammer',100.55),]
# print(sorted(lst,key=operator.itemgetter(1),reverse=True))

#c
# lst=[]
# i=0
# num_companies=int(input('Enter no. of  companies'))
# for i in range(num_companies):
#     name=input('Enter name :')
#     no_of_shares=int(input('Enter no of shares :'))
#     dt_of_pur=input('Enter date of purchase(dd:mm:yy):')
#     cost_price=int(input('Enter cost price :'))
#     selling_price=int(input("Enter selling price :"))
#     tpl=(name,no_of_shares,dt_of_pur,cost_price,selling_price)
#     lst.append(tpl)
# print(lst)

# lst1=[(),('paras',5),(),(),('vishnu',20)]
# lst2=[]
# for x in lst1:
#     if len(x)!=0:
#        lst2.append(x)
#     else:
#         pass
# print(lst2)

# name=['vishnu','laxmi','pooja','parkash','manisha','krishan']
# rollno=[10,11,12,13,14,15]
# marks=[95,96,97,98,99,100]
# t1=tuple(name)
# t2=tuple(rollno)
# t3=tuple(marks)
# print(t1)
# print(t2)
# print(t3)
# lst=[t1,t2,t3]
# lst=[*t1,*t2,*t3]
# print(lst)
#
# lstx=[]
# for i,x in enumerate(name):
#     # lstx+=(x,rollno[i],marks[i])
#     lstx.append((x,rollno[i],marks[i]))
# print(lstx)

import operator
# tpl=(10,11,13,12)
# print(tpl[::-1])
# print(sorted(tpl))
# print(sorted(tpl,reverse=True))
##########
# tpl.sort() tuple are immutable
# print(tpl)
# tpl.reverse() tuple are immutable
# print(tpl)
#######################

