Square = lambda No : No * No

def main():
    Data = [1,2,3,4,5,6,7,8,9]

    print("Date Befor  Mapping :",Data)

    MData = list(map(Square,Data))

    print("Date After Mapping :",MData)


if __name__ == "__main__":
    main()