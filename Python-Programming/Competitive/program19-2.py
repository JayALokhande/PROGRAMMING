Mult = lambda No1 , No2 : No1 * No2

def main():
    Data1 = int(input("Enter First Number : "))
    Data2 = int(input("Enter Second Number : "))

    Ret = Mult(Data1,Data2)

    print("Result is :",Ret)
    
if __name__ == "__main__":
    main()