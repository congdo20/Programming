def greetings():
    "Hello World"
    print("Hello World")

def newFunc():
    print("Hello World!")

newFunc()

def add(*args):
    s = 0
    for x in args:
        s = s + x
    return s

result = add(10, 20, 30, 40)
print(result)

result = add(1, 2, 3)
print(result)

def add1(*args):
    for x in args:
        print(x, end = " ")
add1("Hello", "World", "!")

def arrayList():
    print("New Func")

arrayList()

def newDef():
    print("New Def")

newDef()
