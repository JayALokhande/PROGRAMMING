def SumNatural(No):
    Sum = 0

    for i in range(No + 1):
        Sum = Sum + i
    return Sum

def main():
    Data = int(input("Enter the Number : "))

    Ret = SumNatural(Data)

    print("Sum is : ", Ret)

if __name__ == "__main__":
    main()