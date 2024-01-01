qty=int(input('Enter values of quantity :'))
price=float(input("Enter value of price :"))
if qty>1000:
    dis=10
else :
    dis=0
totexp=qty*price-dis*qty*price/100
print('Total expense is ',totexp)
print('Total expense is '+str(totexp))