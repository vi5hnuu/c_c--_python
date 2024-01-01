s=input('Enter the string :')
alphabets=0
digits=0
special=0
for x in s:
    if(x.isdigit()):
        digits+=1
    elif(x.isalpha()):
        alphabets+=1
    else:
        special+=1
print(alphabets,digits,special)