from sys import argv
from os.path import exists

script, from_file, to_file = argv

print("Copying %s to %s." % (from_file, to_file))

# Read the data, give it to a variable to hold it
copy_file = open(from_file)
copy_data = copy_file.read()

print("\nDoes the new file exist? %r" % (exists(to_file)))

print("Copying...")
out_file = open(to_file, 'w')   # Create a file with the name that is assigned to to_file
out_file.write(copy_data)       # Write the data that we put inside of copy_data to_file

print("Done.")
out_file.close()
copy_file.close()