students={'dipti':55,'smriti':12,'subodh':45,'meenal':33,'harsha':40,'bhushan':42}
lst=filter(lambda x:x[1]>=40,students.items())
print(list(lst))