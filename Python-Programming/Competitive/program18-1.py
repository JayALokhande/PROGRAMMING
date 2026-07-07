def AllSum(List):
    Sum = 0
    for i in List :
        Sum = Sum + i
    return Sum

def main():
    List = []
    N = int(input("Enter Number of Elements : "))
    for i in range (N):
        num = int(input("Enter Numbers :"))
        List.append(num)

    Ret = AllSum(List)

    print("List :",List)
    print("Sum of all Number is :",Ret)

if __name__ == "__main__":
    main()