age = input("Enter your age\n") # by default input type is of string
age = int(age) # here we typcasted age into int

if(age > 18):
    print("You can drive a car")
elif(age == 18):
    print("You are a teenager")
else:
    print("You cannot drive")