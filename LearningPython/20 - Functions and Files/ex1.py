from sys import argv

scrip, input_file = argv

def print_all(file):
    print(file.read())

def rewind(file):
    file.seek(0)

def print_a_line(line_count, file):
    print("%d: %s" % (line_count, file.readline()))

# Open the file that we will be reading
current_file = open(input_file)

print_all(current_file)

# Restart the file from the beginnning to read it again
print("\nRewind somewhat like you would an old tape.\n")
rewind(current_file)

print("\nLets print just three lines: ")
current_line = 1
print_a_line(current_line, current_file)

current_line += 1
print_a_line(current_line, current_file)

current_line += 1
print_a_line(current_line, current_file)