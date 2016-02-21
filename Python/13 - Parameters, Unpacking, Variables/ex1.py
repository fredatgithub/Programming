from sys import argv #This line is importing something specifically from the 'sys' module into your program. It asks the interpreter to import specifically 'argv'. 'argv' is "Argument Variable"

script, first, second, third = argv #Unpacks 'argv' and assigns it to script, first, second, third

print "The script is called: ", script #You always have to show which script you print
print "Your first variable is: ", first
print "Your second variable is: ", second
print "Your third variable is: ", third


#When you go to run the program you have to run it like this: 'python ex1.py 'argument' 'argument' 'argument'' and if you don't then you don't meet the requirements to run the program.