# name1 = "arin" 
# name2 = 'jain'
# name3 = '''Hello my name
#     is arin jain        bye'''

# print(name1)
# print(name2)
# print(name3)

# name = "Arin"
# print(name[0])

# Slicing of string
# print(name[1:4]) # output will be from 1 to 3 i.e. "rin"

# name = "   Arin Jain     "
# print(name)
# print(name.strip()) # remove extra spaces from beginning and end

name = "Arin"
print(len(name)) # length of string

name = "ARIN"
lowerCase = name.lower()

name = "arin"
UpperCase = name.upper()
print(UpperCase)

name = "ArinJain"
replace = name.replace("in", "sm")
print(replace)

str1 = "My name is "
name = "Arin Jain"
print(str1 + name) # concatenate two strings

# template making
name1 = "Arin"
name2 = "Akash"
temp = "My name is {} and my roomie name is {}".format(name1, name2)
temp = f"My name is {name1} and my roomie name is {name2}" # another easy way to do this
print(temp)