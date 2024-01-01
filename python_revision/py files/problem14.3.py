def papersize(i,n,l,b):
    if n!=0:
        print(f'A{i}:l={int(l)} B={int(b)}')
        newb=int(l/2)
        newl=b
        n-=1
        l+=1
        papersize(i,n,newl,newb)
papersize(0,7,1189,841)
