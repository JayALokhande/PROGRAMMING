def SearchELe(List,No):
    Count = 0
    for i in List :
        if(No == i):
            Count = Count + 1

    return Count

def main():
    List = []
    N = int(input("Enter Number of Elements : "))
    for i in range (N):
        num = int(input("Enter Numbers :"))
        List.append(num)

    print("List :",List)
    N2 = int(input("Enter Element To Search :"))

    Ret = SearchELe(List,N2)

    print("List :",List)
    print("Frequency of Element is :",Ret)

if __name__ == "__main__":
    main()