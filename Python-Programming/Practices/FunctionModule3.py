from Marvellous import Addition

def main():
    print("Enter First Numner :")
    Value1 = int(input())

    print("Enter Second Numner :")
    Value2 = int(input())

    Ret = Addition(Value1,Value2) 
    Ret = Substraction(Value1,Value2) #Error
    
    print("Addition is : ",Ret)
    print("Substraction is : ",Ret)

if __name__ == "__main__":
    main()
