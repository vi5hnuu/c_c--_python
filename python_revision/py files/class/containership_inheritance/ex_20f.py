from abc import ABC,abstractmethod

class vehicle(ABC):
    @abstractmethod
    def speed(self):
        pass
    def maintainance(self):
        pass
    def value(self):
        pass
class fourwheeler(vehicle):
    def speed(self):
        print('in fourwheeler.speed')
    def maintainance(self):
        print('in fourwheeler.maintainance')
    def value(self):
        print('in fourwheeler.value')
class twowheeler(vehicle):
    def speed(self):
        print('in twowheeler.speed')
    def maintainance(self):
        print('in twowheeler.maintainance')
    def value(self):
        print('in twowheeler.value')


# v=vehicle()
fw=fourwheeler()
fw.speed()
fw.maintainance()
fw.value()

tw=twowheeler()
tw.speed()
tw.maintainance()
tw.value()