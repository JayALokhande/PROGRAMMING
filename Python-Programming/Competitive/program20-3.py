import threading

class EvenList(threading.Thread):
    def __init__(self,Data):
        threading.Thread.__init__(self)
        self.Data = Data

    def run(self):
        ESum = 0 
        for i in self.Data:
            if i % 2 == 0:
                ESum = ESum + i

        print("Sum of Even number is : ",ESum)


class OddList(threading.Thread):
    def __init__(self,Data):
        threading.Thread.__init__(self)
        self.Data = Data

    def run(self):
        OSum = 0 
        for i in self.Data:
            if i % 2 != 0:
                OSum = OSum + i
        
        print("Sum of odd number is : ",OSum)



def main():
    N = int(input("Enter Number of Elements :"))

    Arr = []

    print("Enter the Elements : ")
    for i in range (N):
        No = int(input())
        Arr.append(No)

    eobj = EvenList(Arr)
    oobj = OddList(Arr)

    eobj.start()
    oobj.start()


    print("Exit from main")



if __name__== "__main__":
    main()