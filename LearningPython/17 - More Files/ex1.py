from sys import argv
from os.path import exists

script, from_file, to_file = argv

print("Copying from %s to %s" %(from_file, to_file))

# We could do these on one line, how?
in_file = open(from_file)   # Open the file, but only look at whats inside.
in_data = in_file.read()    # This is practically copying what is inside of the file.

print("The input file is %d bytes long." % (len(in_data)))

# Check if the file exists already
print("Does the output file exist? %r" % (exists(to_file)))
print("Ready, hit RETURN to continue, CTRL-C to abort.")
input()

out_file = open(to_file, 'w')
out_file.write(in_data)

print("All done.")
out_file.close()
in_file.close()