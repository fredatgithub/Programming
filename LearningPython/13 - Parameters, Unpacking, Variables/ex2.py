from sys import argv

script, operation = argv

# Cast as an int so that it won't take it as a string
var1 = int(input("First variable: "))
var2 = int(input("Second variable: "))

if operation == "addition":
    answer = var1 + var2
    print("%r + %r = %r" % (var1, var2, answer))
elif operation == "subtraction":
    answer = var1 - var2
    print("%r - %r = %r" % (var1, var2, answer))
elif operation == "multiplication":
    answer = var1 * var2
    print("%r * %r = %r" % (var1, var2, answer))
elif operation == "division":
    answer = var1 / var2
    print("%r / %r = %r" % (var1, var2, answer))
else:
    print("Invalid operation")