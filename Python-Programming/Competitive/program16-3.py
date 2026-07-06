def Add(No1, No2):
    Ans = 0
    Ans = No1 + No2

    return Ans
    

def main():
    Data1 = int(input("Enter the Number :"))
    Data2 = int(input("Enter the Number :"))

    Ret = Add(Data1,Data2)

    print("Addition is :",Ret)


if __name__ == "__main__":
    main()