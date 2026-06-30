def SumDigits(No):
    Sum = 0

    while No > 0:
        digit = No % 10
        Sum = Sum + digit
        No = No // 10

    return Sum

def main():
    Value = int(input("Enter Number: "))

    Ret = SumDigits(Value)
    print("Sum of digits =", Ret)

if __name__ == "__main__":
    main()