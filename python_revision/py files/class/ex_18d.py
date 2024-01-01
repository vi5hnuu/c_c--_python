class shape:
    def __init__(self,len_rect=0,br_rect=0,side_square=0,rad_cir=0):
        self.len_rect=len_rect
        self.br_rect=br_rect
        self.side_square=side_square
        self.rad_cir=rad_cir

    def area_rect(self):
        a=self.len_rect*self.br_rect
        print('Area of rectangle is ',a)
    def peri_rect(self):
        p=2*(self.len_rect+self.br_rect)
        print('Perimeter of rectange is ',p)
    def area_square(self):
        a=self.side_square**2
        print('Area of square is ',a)
    def peri_square(self):
        p=4*self.side_square
        print('Perimeter of square is ',p)
    def area_cir(self):
        a=3.14*self.rad_cir**2
        print('Area of circle is ',a)
    def peri_cir(self):
        p=2*3.14*self.rad_cir
        print('Perimeter of circle is ',p)
print('1:Rectangle')
print('2:Square')
print('3:Circle')
print('4:Exit')

while True:
    choice=int(input('Enter the choice :'))
    if choice==1:
        l=int(input('Length of rectangle :'))
        b=int(input('Bredth of rectangle :'))
        s=shape(len_rect=l,br_rect=b)
        s.area_rect()
        s.peri_rect()
    elif choice==2:
        sd=int(input('Side of square :'))
        s=shape(side_square=sd)
        s.area_square()
        s.peri_square()
    elif choice==3:
        r=int(input('Radius of circle :'))
        s=shape(rad_cir=r)
        s.area_cir()
        s.peri_cir()
    elif choice==4:
        print('Exiting')
        exit(0)
    else:
        print('Invalid choice')