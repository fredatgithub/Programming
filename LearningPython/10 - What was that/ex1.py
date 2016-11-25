#To create a tab you use '\t' 
#To use a slash without it disappearing looking for a formatter to follow use '\\'
#To make a quote show up without it thinking its a string use '\'' or '\"'
tabbyCat = "\t I am a tabbed in cat."
persianCat = "I am split \non a line."
backslashCat = "I \\ am \\ a \\ cat."
fatCat = """
I will do a list:
\t * Cat foot
\t * Fishies
\t * Catnip \n\t * Grass
""" 

print(tabbyCat)
print(persianCat)
print(backslashCat)
print(fatCat)