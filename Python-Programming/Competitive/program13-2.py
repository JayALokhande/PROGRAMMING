#Area of Circle
def AreaCircle(No1, No2):
    Area = 0
    Area = No1 * No2 * No2

    return Area

def main():

    Value1 = 3.14

    Value2 = int(input("Enter the Radius : "))

    Ret = AreaCircle(Value1,Value2)

    print("Area of Circle is :",Ret)

if __name__ == "__main__":
    main()