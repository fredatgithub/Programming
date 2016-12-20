the_count   = [1, 2, 3, 4, 5]
fruits      = ["apples", "oranges", "pears", "apricots"]
change      = [1, "pennies", 2, "dimes", 3, "quarters"]

# This is the first kind of for-loop
for number in the_count:
    print("This is the count: %d" % (number))

# Same as above
for fruit in fruits:
    print("This is the fruit from the list: %s" % (fruit))

# We can also go through mixed lists too, notice that we have to use %r to do
# it though, this means that anything that is passed to it will be printed.
for i in change:
    print("I have %r" % (i))

# We can also add things to empty (or pre-existing) lists.
elements = []

# Then use the range funtion to do 0 to 5 counts
for i in range(0, 6):
    print("Added %d to the list." % (i))

    # Append is a function that lists understand
    elements.append(i)

# Now we can print them too
for i in elements:
    print("Element was: %d" % (i))

