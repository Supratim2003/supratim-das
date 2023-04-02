n=int(input("Enter a number :"))
no=n
s=0
while(n>0):
    rem=n%10
    s=s+(rem**3)
    n=n//10
if(s==no):
    print("Amstrong no!")
else:
    print("Not Am !")