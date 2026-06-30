def CheckPalindrome(No):
    rev = 0
    while No > 0:
        digit = No % 10
        rev = (rev * 10) + digit
        No = No // 10
    return rev

def main():
    Value = int(input("Enter Number: "))
    Ret = CheckPalindrome(Value)

    if(Ret == Value):
        print("Palindrome..")
    else:
        print("Not palindrome..")


if __name__ == "__main__":
    main()