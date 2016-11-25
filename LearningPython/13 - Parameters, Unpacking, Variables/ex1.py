# Importing will give us a specific value from sys, not the whole entire sys
from sys import argv 

# argv is the argument variable. It is used to hold arguments that we pass to the program.

# Here we assign the arguments to variables
script, first, second, third = argv

print("The script is called: ", script)
print("Your first value is: ", first)
print("Your second value is: ", second)
print("Your third value is: ", third)

# When we run "python ex1.py 1 2 3" it will output the variables in that order assigning them to the names