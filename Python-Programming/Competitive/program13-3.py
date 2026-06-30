#area of Rectangle
def CheckPerfect(No):
    Sum = 0
    for i in range(No):
        if(i % 2==0):
            Sum = Sum + i
    return Sum

def main():

    Value1 = int(input("Enter the Number : "))
    Ret = CheckPerfect(Value1)

    if(Ret==Value1):
        print("It is a Perfect Number")
    else:
        print("Not a Perfect Number.")


if __name__ == "__main__":
    main()