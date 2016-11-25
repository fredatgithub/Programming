from sys import argv

script, file_name = argv

promt = ">"

print("We're going to erase %r." % (file_name))
print("If you don't want that, hit CTRL-C (^C).")
print("If you do want that, hit RETURN")
input(promt)

print("\nOpening the file...")

# Opens file, erasing it first (see python -m pydoc open)
target = open(file_name, 'w') 

print("Truncating the file. Goodbye!\n")
target.truncate()

print("Now I am going to ask you three lines.\n")

line1 = input("line 1: ")
line2 = input("line 2: ")
line3 = input("line 3: ")

print("Writing these to %r." %file_name)

target.write(line1 + "\n")
target.write(line2 + "\n")
target.write(line3 + "\n")

print("All done.")
target.close()