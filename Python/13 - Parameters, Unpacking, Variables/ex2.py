from sys import argv

script, name, age, day = argv

print "The script called is: ", script #You always have to show which script you print
print "Your name is: ", name
print "Your age is: ", age 
print "The day is: ", day

name = raw_input("Whats your name? ")
print "Well hello, %s, I am sorry that I had your name wrong at first." % name