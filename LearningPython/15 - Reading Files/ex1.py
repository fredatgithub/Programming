from sys import argv

script, file_name = argv

# Open the file
txt = open(file_name)

print("Here's your file %r: " % (file_name))
print(txt.read())

# Ask for the file again but as user input
print("What was the file? ")
file_name2 = input("> ")

# Open and print the file, but this time from what the user inputted
txt2 = open(file_name2)
print(txt2.read())
