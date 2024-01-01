def fun1():
    a=45
    print(a)
    print(id(a))

    def fun2():
        # a=45;
        a=46;
        print(a)
        print(id(a))
    fun2()
fun1()