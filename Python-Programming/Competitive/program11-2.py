def CountDigits(No):
    Count = 0

    while No > 0:
        No = No // 10
        Count += 1

    return Count

def main():
    Value = int(input("Enter Number: "))

    Ret = CountDigits(Value)
    print("Number of digits =",Ret)

if __name__ == "__main__":
    main()