class solid:
    def __init__(self,len_cbd=0,br_cbd=0,ht_cbd=0,side_cube=0,ht_cyl=0,rad_cyl=0,rad_sphere=0):
        self.len_cbd=len_cbd
        self.br_cbd=br_cbd
        self.ht_cbd=ht_cbd
        self.side_cube=side_cube
        self.ht_cyl=ht_cyl
        self.rad_cyl=rad_cyl
        self.rad_sphere=rad_sphere

    def sarea_cuboid(self):
        sa=2*(self.len_cbd*self.br_cbd+self.len_cbd*self.ht_cbd+self.ht_cbd*self.br_cbd)
        print('surface area of cuboid is ',sa)
    def vol_cuboid(self):
        v=self.len_cbd*self.br_cbd*self.ht_cbd
        print('volume of cuboid is ',v)
    def sarea_cube(self):
        sa=6*(self.side_cube*self.side_cube)
        print('surface area of cube is ',sa)
    def vol_cube(self):
        v=self.side_cube**3
        print('volume of cube is ',v)
    def sarea_cyl(self):
        sa=2*(3.14*self.rad_cyl*self.ht_cyl+3.14*self.rad_cyl*self.rad_cyl)
        print('surface area of cylinder is ',sa)
    def vol_cyl(self):
        v=3.14*self.rad_cyl*self.rad_cyl*self.ht_cyl
        print('vol of cylinder is ',v)
    def sarea_sphere(self):
        sa=4*(3.14*self.rad_sphere*self.rad_sphere*self.rad_sphere)
        print('surface area of sphere is ',sa)
    def vol_sphere(self):
        v=4/3*3.14*self.rad_sphere*self.rad_sphere*self.rad_sphere
        print('volume of sphere is ',v)

print('1:ciuboid')
print('2:cube')
print('3:cylinder')
print('4:sphere')
print('5:exit')
while True:
    choice = int(input('Enter the choice :'))
    if choice==1:
        l=int(input('Length of cuboid :'))
        b=int(input('Bredth of cuboid :'))
        h=int(input('Height of cuboid :'))
        s=solid(len_cbd=l,br_cbd=b,ht_cbd=h)
        s.sarea_cuboid()
        s.vol_cuboid()
    elif choice==2:
        sd=int(input('Side of cube :'))
        s=solid(side_cube=sd)
        s.sarea_cube()
        s.vol_cube()
    elif choice==3:
        h=int(input('Height of cyliner :'))
        r=int(input('Radius of base of cyliner :'))
        s=solid(rad_cyl=r,ht_cyl=h)
        s.sarea_cyl()
        s.vol_cyl()
    elif choice==4:
        r=int(input('Radius of sphere :'))
        s=solid(rad_sphere=r)
        s.sarea_sphere()
        s.vol_sphere()
    elif choice==5:
        print('Exiting')
        exit(0)
    else:
        print('Invalid choice')
