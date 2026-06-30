def PrintSequenceRev(No):
    for i in range(No, 1-1,-1):
        print(i)
        
    
def main():
    Data =int(input("Enter The Number : "))

    PrintSequenceRev(Data)
        
if __name__ == "__main__":
    main()