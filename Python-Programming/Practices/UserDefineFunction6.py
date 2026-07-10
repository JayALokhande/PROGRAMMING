#Accept : Multiple parameter
#Reture : Multiple Value

def Multiplication(No1, No2):
    return No1 * No2
    
def Division(No1, No2):
    return No1 / No2

def main():
    
    Ret1 = Multiplication(10,5)
    print("Mulitiplication is :",Ret1)

    Ret2 = Division(10,5)
    print("Division is :",Ret2)

if __name__ == "__main__":
    main()