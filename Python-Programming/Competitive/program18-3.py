def ChkMin(List):
    Min = List[1]
    for i in List :
        if(Min>i):
            Min = i
    return Min

def main():
    List = []
    N = int(input("Enter Number of Elements : "))
    for i in range (N):
        num = int(input("Enter Numbers :"))
        List.append(num)

    Ret = ChkMin(List)

    print("List :",List)
    print("Minimum Number is :",Ret)

if __name__ == "__main__":
    main()