def PrintReverse(No):
    rev = 0

    while No > 0:
        digit = No % 10
        rev = (rev * 10) + digit
        No = No // 10

    print("Reverse =", rev)

def main():
    Value = int(input("Enter Number: "))
    PrintReverse(Value)

if __name__ == "__main__":
    main()