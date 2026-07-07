print("------------------------------------")
print("------Ticket Pricing Software-------")
print("------------------------------------")

print("Enter Your Age :")
Age = int(input())

if(Age <= 5):
    print("Your Ticket is Free")

elif(Age > 5 and Age <=18):
    print("Your Ticket price is : 900")

elif(Age > 18 and Age <=40):
    print("Your Ticket price is : 1200")

else:
    print("Your Ticket Price is : 500")