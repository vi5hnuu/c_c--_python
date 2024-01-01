ifs={'eth0':{'ip':'1:1:1:1','status':'up'},
     'eth1':{'ip':'2:2:2:2','status':'up'},
     'wlan0':{'ip':'3:3:3:3','status':'up'},
     'wlan1':{'ip':'4:4:4:4','status':'up'},}

test=input('Enter interface :')
print(ifs[test]['status'])

for k,v in ifs.items():
     if v['status']=='up':
          print(k,v['ip'])
print('Total interfaces ',len(ifs))
ifs['eth2']={'ip':'5.5.5.5','status':'down'}
ifs['wlan2']={'ip':'6.6.6.6','status':'up'}

for k,v in ifs.items():
     print(k,v)
