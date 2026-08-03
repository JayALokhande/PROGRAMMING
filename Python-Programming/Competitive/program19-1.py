PowreOfTwo = lambda No : 2 ** No

def main():
    Data = int(input("Enter a Number : "))

    Ret = PowreOfTwo(Data)

    print("Result is :",Ret)
    
if __name__ == "__main__":
    main()