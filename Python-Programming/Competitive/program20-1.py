import threading

def Even():
    print("Even Number :",end=" ")
    for i in range(2,20,2):
        print(i,end=" ")
    print()
        
def Odd():
    print("Odd Number :",end=" ")
    for i in range(1,21,2):
        print(i,end=" ")
    print()
    

def main():

    T1 = threading.Thread(target=Even)
    T2 = threading.Thread(target=Odd)

    T1.start()
    T2.start()

    T1.join()
    T2.join()

    print("Execution Complete.")

if __name__ == "__main__":
    main()