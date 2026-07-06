def ChkPrime(No):
    for i in range(2,No):
        if (No % i == 0):
            return False
        
    return True
    

def main():
    Data = int(input("Enter the Number : "))

    Ret = ChkPrime(Data)

    if(Ret == True):
        print("Number is Prime.")
    else:
        print("Number is Not Prime.")

   

if __name__ == "__main__":
    main()