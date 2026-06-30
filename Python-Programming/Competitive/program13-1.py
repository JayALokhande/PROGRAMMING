#area of Rectangle
def AreaR(No1, No2):
    Area = 0
    Area = No1 * No2

    return Area

def main():

    Value1 = int(input("Enter the Length : "))

    Value2 = int(input("Enter the Width : "))

    Ret = AreaR(Value1,Value2)

    print("Area of Rectangle is :",Ret)

if __name__ == "__main__":
    main()