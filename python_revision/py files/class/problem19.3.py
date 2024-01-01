class weather:
    def __init__(self):
        self.__params=['temp','rel hum','cloud cover','wind vel']
    def __contains__(self, item):
        return True if item in self.__params else False
w=weather()
s='temp'
print(s in w)