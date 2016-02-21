print "How old are you?", #if you put a comma here, it wont start a newline for the input.
age = raw_input()

print "How tall are you?",
height = raw_input()

print "How much do you weigh?",
weight = raw_input()

print "So, you are %r years old, %r feet tall. and weigh %r pounds?" % (age, height, weight)