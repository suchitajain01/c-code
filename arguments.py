def update(lst):

    print(id(lst))

    lst[2] =25
    print (id(lst))
    print ("x ", lst)

lst = [19,20,30]
print(id(lst))
update(lst)
print("lst ",lst)





      



