def ChkNum(No):
    if(No % 2 == 0):
        return True
    else:
        return False


def main():
    Data = int(input("Enter the Number :"))

    Ret = ChkNum(Data)

    if(Ret == True):
        print("Nuber is Even.")
    else:
        print("Number is Odd. ")


if __name__ == "__main__":
    main()