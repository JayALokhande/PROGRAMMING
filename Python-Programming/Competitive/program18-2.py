def ChkMax(List):
    Max = 0
    for i in List :
        if(i > Max):
            Max = i
    return Max

def main():
    List = []
    N = int(input("Enter Number of Elements : "))
    for i in range (N):
        num = int(input("Enter Numbers :"))
        List.append(num)

    Ret = ChkMax(List)

    print("List :",List)
    print("Maximum Number is :",Ret)

if __name__ == "__main__":
    main()