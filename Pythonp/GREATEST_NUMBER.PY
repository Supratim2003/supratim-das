num1=int(input("enter 1st number: "))
num2=int(input("enter 2nd number: "))
num3=int(input("enter 3ed number: "))

if num1>num2 and num1>num3:
    print(num1,"is greatest")
elif num2>num3 and num2>num1:
    print(num2,"is greatest")
else :
    print(num3,"is greatest")