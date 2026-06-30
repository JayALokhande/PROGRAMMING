def Addition(No1 , No2):
    Ans = 0
    Ans = No1 + No2
    return Ans

def Substraction(No1 , No2):
    Ans = 0
    Ans = No1 - No2
    return Ans

def Multiplication(No1 , No2):
    Ans = 0
    Ans = No1 * No2
    return Ans

def Division(No1 , No2):
    Ans = 0
    Ans = No1 / No2
    return Ans


def main():
    print("Enter The First number : ")
    Value1 = int(input())

    print("Enter The First number : ")
    Value2 = int(input())

    iRet = 0

    iRet = Addition(Value1, Value2)
    print("Addition is : ", iRet)

    iRet = Substraction(Value1, Value2)
    print("Substraction is : ", iRet)

    iRet = Multiplication(Value1, Value2)
    print("Multiplication  is : ", iRet)

    iRet = Division(Value1, Value2)
    print("Division is : ", iRet)

    
if __name__ == "__main__":
    main()