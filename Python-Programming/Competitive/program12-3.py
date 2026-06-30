def Addition(No1, No2):

    Sum = No1 + No2
    return Sum

def Substraction(No1, No2):

    Sub = No1 - No2
    return Sub

def Multiplication(No1, No2):

    Mul = No1 * No2
    return Mul

def Division(No1, No2):

    Div = No1 / No2
    return Div
   
    
def main():
    Data1 =int(input("Enter First Number : "))

    Data2 =int(input("Enter Secont Number : "))

    Ret = Addition(Data1,Data2)
    print("Addition Is :",Ret)

    Ret = Substraction(Data1,Data2)
    print("Substraction Is :",Ret)

    Ret = Multiplication(Data1,Data2)
    print("Multiplication Is :",Ret)

    Ret = Division(Data1,Data2)
    print("Division Is :",Ret)

if __name__ == "__main__":
    main()