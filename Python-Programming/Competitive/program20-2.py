import threading

def EvenFactor(iNo):
    EvenSum = 0

    print("EvenFactor :",end=" ")

    for i in range(1,iNo+1):
        if(iNo % i == 0)and(i % 2 == 0):
            print(i,end=" ")
            EvenSum= EvenSum+ i
    print("\nSum of Even Factors :",EvenSum)
        
def OddFactor(iNo):
    OddSum = 0 

    print("OddFactor :",end=" ")
    for i in range(1,iNo+1):
        if(iNo % i == 0)and(i % 2 != 0):
            print(i,end=" ")
            OddSum = OddSum + i
    print("\nSum of Odd Factors :", OddSum)

def main():
    Data = int(input("Enter the Number :"))

    T1 = threading.Thread(target=EvenFactor,args=(Data,))
    T2 = threading.Thread(target=OddFactor,args=(Data,))

    T1.start()
    T2.start()

    T1.join()
    T2.join()

    print("Execution Complete.")

if __name__ == "__main__":
    main()