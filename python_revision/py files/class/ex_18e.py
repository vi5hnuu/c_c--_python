class Time:
    def __init__(self,hr=0,min=0,sec=0):
        self.hours=hr
        self.mins=min
        self.secs=sec
    def add_seconds(self,sec):
        if sec>86400:
            return 1
        h=int(sec/3600)
        m=int((sec-h*3600)/60)
        s=int((sec-h*3600-m*60))

        self.hours=self.hours+h
        self.mins=self.mins+m
        self.secs=self.secs+s
        if self.secs>=60:
            self.mins+=1
            self.secs-=60
        if self.mins>=60:
            self.hours+=1
            self.mins-=60
        if self.hours>=24:
            self.hours=self.hours%24
    def sub_seconds(self,sec):
        if(sec>84400):
            return 1
        h = int(sec / 3600)
        m = int((sec - h * 3600) / 60)
        s = int((sec - h * 3600 - m * 60))
        self.hours = self.hours - h
        self.mins = self.mins - m
        self.secs = self.secs - s

        if self.secs<0:
            self.mins-=1
            self.secs+=60
        if self.mins<0:
            self.hours-=1
            self.mins+=60
        if self.hours<0:
            self.hours+=24

    def display(self):
        print(self.hours,":",self.mins,':',self.secs)

t1=Time(10,15,35)
print('Origninal time :')
t1.display()

val=t1.add_seconds(144)
if(val==1):
    print('cannot add more then 24 hours.')
else:
    print('Time after adding 144 sec ')
    t1.display()
print('Original time =',end='')
t1.display()
val=t1.add_seconds(4000)
if(val==1):
    print('cannot add more then 24 hours.')
else:
    print('Time after adding 4000 sec ')
    t1.display()
print('Original time =',end='')
t1.display()

val=t1.sub_seconds(4000)
if(val==1):
    print('cannot deduct more then 24 hours.')
else:
    print('Time after substracting 4000 sec ')
    t1.display()
print('Original time =',end='')
t1.display()

val=t1.sub_seconds(144)
if(val==1):
    print('cannot deduct more then 24 hours.')
else:
    print('Time after substracting 144 sec ')
    t1.display()
print('Original time =',end='')
t1.display()

