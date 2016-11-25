def cheese_and_crackers(cheese_count, boxes_of_crackers):
    print("You have %d peices of cheese." % (cheese_count))
    print("You have %d boxes of crackers." % (boxes_of_crackers))
    print("Man thats enough for a party!")
    print("Get a blanket!\n")

print("We can jus give the function numbers directly: ")
cheese_and_crackers(10, 2)

print("Or we can use variables from our script: ")
amount_of_cheese    = 10
boxes_of_crackers   = 50

cheese_and_crackers(amount_of_cheese, boxes_of_crackers)

