year =int(input("enter year"))
if year % 400==0 or year % 4==0:
    print("this is leapyear")
elif year % 100!=0:
    print("this is not leapyer")