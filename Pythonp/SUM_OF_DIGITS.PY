num= int(input("enter a number:"))

sum = 0
while num>0:
    rem= num%10
    sum+=rem
    num//=10
    print("sum of the digits:",sum)