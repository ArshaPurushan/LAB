l=input("enter list of number ")
l=list(map(int,l.split()))
l=list(map(lambda x:x+x*0.1 if x>1000 else x+x*0.05,l))
print(l)
