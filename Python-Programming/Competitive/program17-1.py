import Arithmetic

def main():
    Data1 = int(input("Enter the First Number :"))
    Data2 = int(input("Enter the Second Number :"))

    Ret = Arithmetic.Addition(Data1,Data2)
    print("Addition is :",Ret)

    Ret = Arithmetic.Substraction(Data1,Data2)
    print("Substraction is :",Ret)

    Ret = Arithmetic.Multiplication(Data1,Data2)
    print("Multiplication is :",Ret)

    Ret = Arithmetic.Division(Data1,Data2)
    print("Division is :",Ret)

if __name__ == "__main__":
    main()