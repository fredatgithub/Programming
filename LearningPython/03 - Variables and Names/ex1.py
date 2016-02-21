#Variables are a way of making your program more readable. 
#You can declare the variable and then assign it a value depending on the type you want it to be.
cars = 100
spaceInCar = 4
drivers = 30
passengers = 90
carsNotDriven = cars - drivers
carsDriven = drivers
carpoolCapacity = carsDriven * spaceInCar
averagePassengerInCar = passengers / carsDriven

#Here we print out the variables along with a sentence for each.
print "There are", cars, "cars available."
print "There will only be", drivers, "drivers available."
print "There will be", carsNotDriven, "cars not driven."
print "We can only transport", carpoolCapacity, "people today."
print "We need about", averagePassengerInCar, "people in each car." 