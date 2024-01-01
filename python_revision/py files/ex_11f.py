users={'sanjay':'ceftum1250','rahul':'crocin100','sanket':'metrogy150'}
userid=input('Enter userid :')
passs=input('Enter password :')
for k,v in users.items():
     if k==userid and v==passs:
         print('valid')
         break
     else:
         print('invalid')
         break