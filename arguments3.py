def person(name,**data):
    print(name)
    print(data)

person('navin', age = 28,city= 'mumbai', mob = 9807656)


def person(name,**data):
    print(name)
    for i,j in data.item():
        print(i,j)

    person('navin ', age = '28',city = 'mumbai', mob = '9897656')




    
