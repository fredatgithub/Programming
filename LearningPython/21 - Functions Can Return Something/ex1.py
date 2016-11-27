def add(a, b):
    print("Adding %d + %d" % (a, b))
    return a + b

def subtract(a, b):
    print("Subtracting %d - %d" % (a, b))
    return a - b

def multiply(a, b):
    print("Multiplying %d * %d" % (a, b))
    return a * b

def divide(a, b):
    print("Dividing %d / %d" % (a, b))
    return a / b


print("This is basic math using functions... \n")

age = add(10, 6)
height = subtract(90, 8)
weight = multiply(108, 2)

print("\nAge: %d, Height: %d, Weight: %d" % (age, height, weight))


