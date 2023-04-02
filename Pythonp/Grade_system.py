a=int(input("enter the marks 1st subject"))
b=int(input("enter the marks 2nd subject"))
c=int(input("enter the marks 3rd subject"))
d=int(input("enter the marks 4th subject"))
e=int(input("enter the marks 5th subject"))
avg=(a+b+c+d+e)/5
if avg>=90:
    print("OUTSTANDING")
elif avg>=80 and avg<90:
    print("EXCELLENT")
elif avg >=70 and avg<80:
    print("VERY GOOD")
elif avg>=60 and avg<70:
    print("GOOD")
elif avg>=50 and avg<60:
    print("PASS")
else :
    print("FAIL")