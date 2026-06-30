def CheckPrime(No):
    Count = 0
    if(No != 0):
        for i in range(1,No+1):

            if(No % i == 0):
                Count = Count + 1
        return Count

    else:
        print("zero")

def main():

    Data = int(input("Enter the Number :"))

    Ret = CheckPrime(Data)

    if(Ret == 2):
        print("Number is Prime.")
    else:
        print("Number is Not Prime..")

if __name__ == "__main__":
    main()