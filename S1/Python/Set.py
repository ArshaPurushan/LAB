a=input("Enter first collection of integer: ")
b=input("Enter second collection of integer: ")
a=set(map(int,a.split(',')))
b=set(map(int,b.split(',')))
print("Common Elements: ",bool(len(a)&len(b)))
