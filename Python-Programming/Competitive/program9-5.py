def CheckDivisible(No):
    if(No % 3 == 0 )and(No % 5 == 0):
        return True
    else:
        return False

def main():

    Value = int(input("Enter The Number :"))

    Ret = CheckDivisible(Value)

    if(Ret == True):
        print("Number is Divisible By 3 & 5")
    else:
        print("Number is Not Divisible.")

if __name__ == "__main__":
    main()