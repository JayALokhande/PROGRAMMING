def DisplayOdd(No):
    for i in range(1, No + 1):
        if(i % 2 != 0):
            print(i)

def main():
    Data = int(input("Enter the Number : "))
    DisplayOdd(Data)

if __name__ == "__main__":
    main()