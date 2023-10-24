# Collections in Python

'''
LIST - We can change the elements in a list
'''

# List = [13, 46, 34, 64, 23, 67]

# var = type(List) 
# var = List[3]
# List[3] = 4
# var = List[2:5]
# var = len(List) # gives the length of list

# List.append(40) # insert a new element at the end
# List.insert(2, 43) # insert a new element at any given index

# List.pop() # remove a element from the end
# List.remove(46) # remove a particular element
# del List[0] # remove a particular element

# List.reverse() # reverse all the elements of a list
# List.sort() # sort all the elements of a list in ascending order
# List.clear() # clear all the elements from a list

# print(List)

'''
TUPLE - We can't the change the elements in a tuple
'''

# tpl = ("arin", "jain", "morena", "cse")
# var = type(tpl)
# # tpl[1] = "hello" # can't change the element
# List = list(tpl) # we can typecast tuple to a list and vice versa

# print(var)

'''
SET - Prints only unique elements in sorted order
'''

# Set = {5, 5, 1, 2, 4, 3, 2, 2, 3, 1}

# var = Set.add(45) # to add one element 
# var = Set.update([34, 45, 23, 76]) # to add more than one element
# var = len(Set) # length of set
# var = Set.remove(23) # remove element if present otherwise throws an error
# var = Set.discard(23) # remove element if present otherwise do nothing

# print(Set)

'''
Dictionary - It's just like a map in C++
'''

dict = {"Name" : "Arin Jain", "From" : "Morena", "Branch" : "CSE", "CGPA" : "7.8"}
dict["CGPA"] = 8.3

print(dict["From"])
print(dict)