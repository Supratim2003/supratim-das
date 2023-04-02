input= input("enter an input:")
if input>='A' and input <='Z':
    print("uppercase")
elif input>='a' and input <='z':
    print("Lowercase")
elif input>='0' and input<='9':
    print("number")
else :
    print("Special char")