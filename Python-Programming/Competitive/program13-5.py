def main():
    Marks = int(input("Enter Marks : "))

    if(Marks >= 75)and(Marks<=100):
        print(Marks,"Distinction.")
    elif(Marks >= 60)and(Marks<=74):
        print(Marks,"First Class.")
    elif(Marks >= 50)and(Marks<=59):
        print(Marks,"Second Class.")
    elif(Marks >= 0)and(Marks<=49):
        print(Marks,"Fail.")


if __name__ == "__main__":
    main()