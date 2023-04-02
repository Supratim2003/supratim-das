from pickle import FALSE


num= int(input("ENTER A NUMBER::"))
flag= True
for n in range (2,num):
# print(f"{num} % {n}=",num % n)
    if num%n==0:
        flag = False
    break
if flag ==FALSE:
    print(f"{num} is not a prime no...")
else:
    print(f"{num} is prime")
    