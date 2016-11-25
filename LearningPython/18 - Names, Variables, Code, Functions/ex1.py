
# Takes one argument to be used in the function
def print_one(arg1):
    print("arg1: %r" % (arg1))


# Takes two arguments that will be used in this function
def print_two(arg1, arg2):
    print("arg1: %r, arg2: %r" % (arg1, arg2))

# A function that takes no arguments but still is executable
def print_none():
    print("I got nothing.")

print_none()
print_one("First")
print_two("Sweden", "England")