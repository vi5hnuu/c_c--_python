d={
    'dinesh':{'lasnt_name':'sahare','age':30,'grade':'skilled'},
    'ram':{'lasnt_name':'jog','age':35,'grade':'semi-skilled'},
    's':{'lasnt_name':'sam','age':25,'grade':'highly-skilled'},
    'adi':{'lasnt_name':'lim','age':25,'grade':'highly-skilled'},
    'ann':{'lasnt_name':'mir','age':25,'grade':'highlt-skilled'},
}

lst=filter(lambda x:x[1]['grade']=='highly-skilled',d.items())
print(list(lst))