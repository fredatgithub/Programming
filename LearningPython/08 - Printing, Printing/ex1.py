formatter = "%r %r %r %r" # This line makes a string that will replace the '%r' with ANYTHING that is put through by formatters.

print formatter % (1, 2, 3, 4) #replaces '%r' from 'formatter' with 1 2 3 4
print formatter % ("one", "two", "three", "four") #REplaces '%r' with one two three four
print formatter % (True, False, True, False) #Replaces '%r' with the booleans True and False
print formatter % (formatter, formatter, formatter, formatter) #Replaces '%r' with what 'formatter' says.
print formatter % (
	"This block of code is split apart just so it is easier to read.",
	"Be honest, it is easier.",
	"Right?",
	"Right."
)