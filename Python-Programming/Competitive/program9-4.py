def FindCube(no):
    return no * no * no

def main():
    Value = int(input("Enter the Number : "))

    Ret = FindCube(Value)

    print("The Cube of",Value,"is",Ret)

if __name__ == "__main__":
    main()