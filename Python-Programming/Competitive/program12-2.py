def PrintFactors(No):
    for i in range(1,No + 1):
        if(No % i == 0):
            print(i)
        
    
def main():
    Data =int(input("Enter The Number : "))

    PrintFactors(Data)
        
if __name__ == "__main__":
    main()