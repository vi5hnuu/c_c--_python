portfolio={'accounts':['sbi','iob'],
           'shares':['hdfc','icici','tm','tcs'],
           'ornanments':['10 gm gold','1kg silver']}
portfolio['mf']=['reliance','absl']
print(portfolio)

portfolio['accounts']=['axis','bob']
print(portfolio)

lst=portfolio['shares']
portfolio['shares']=sorted(lst)
print(portfolio)
del(portfolio['ornanments'])
print(portfolio)