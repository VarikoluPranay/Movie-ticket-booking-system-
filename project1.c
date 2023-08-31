//write a program for movie ticket booking in c?    
age = int(input("Welcome to the movie theatre. What is your age? Children and senior citizens will receive a discount.   "))

children_ticket = 8

adult_ticket = 10

senior_ticket = 8

if age <= 12:
    print("The children's ticket costs", children_ticket)

if age >= 65:
    print("The senior citizens ticket costs", senior_ticket)

if (age >= 13) and (age <= 64):
    print("The adult ticket costs", adult_ticket)

three_d = input("Is the movie you're watching 3D? If so, they have a surcharge.  ")

three_d_surcharge = 2

if three_d.lower() == "yes":
    if age >= 65:
        print("The senior citizens ticket for 3D costs", senior_ticket + three_d_surcharge)
    elif age > 12:
        print("The adult ticket for 3D costs", adult_ticket + three_d_surcharge)
    else:
        print("The children's ticket for 3D costs", children_ticket + three_d_surcharge)
else:
    print("No 3d surcharge")




//Source: https://stackoverflow.com/questions/64743859


