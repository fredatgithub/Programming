#The '\n' formatter creates a newline inside of the output
days = "Monday Tuesday Wednesday Thursday Friday Saturday Sunday"
months = "January \n Febuary \n March \n April  \n May \n June \n July \n August \n September \n October \n November \n December"

print("The days of the week: %s \n" % days)
print("Months of the year: \n %s" % months)

#When you print with three quotes (""") then it will print exactly how it is typed as the output.
print("""
That is the days of the week.
There are four weeks in a month.
There are exactly twelve months in a year.
""")