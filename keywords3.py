a=10;
print(id(a))

def world():
    a = 90

    x = globals()['a' ]
    print(id(x))
    print(a)
    globals()['a'] = 15;

world()

print("outside",a)


