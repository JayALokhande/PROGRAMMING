def SumDigit(No):
    Sum = 0

    while(No > 0):
        Digit = No % 10
        Sum = Sum + Digit
        No = No // 10
    return Sum

def main():
    Data = int (input("Enter the Number :"))

    Ret = SumDigit(Data)
    print("Sum of all digits is :",Ret)

if __name__ == "__main__":
    main()