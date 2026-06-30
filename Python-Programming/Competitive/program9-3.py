def FindSquare(no):
    no = no * no 
    return no

def main():
    Value = int(input("Enter the Number : "))

    Ret = FindSquare(Value)

    print("The Square of",Value,"is",Ret)

if __name__ == "__main__":
    main()