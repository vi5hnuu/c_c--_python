from abc import ABC,abstractmethod

class character(ABC):
    @abstractmethod
    def patriotis(self):
        pass
class actor:
    def style(self):
        print('>>actor.style')

class person(actor,character):
    def do_acting(self):
        print('>>person.doacting')
    def style(self):
        print('>>person.style')
    def patriotis(self):
        print('>>person.patriotism')

p=person()
p.patriotis()
p.style()
p.do_acting()