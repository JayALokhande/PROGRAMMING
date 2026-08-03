import threading

class CountSmall(threading.Thread):
    def __init__(self,Data):
        threading.Thread.__init__(self)
        self.Data = Data

    def run(self):
        Count = 0 
        for ch in self.Data:
            if ch >= 'a' and ch <= 'z':
                Count += 1
        lock = threading.Lock()
        with lock:
            print("Thread ID : ",threading.get_ident())
            print("Therad Name : ",threading.current_thread().name)
            print("Lowercase Count : ",Count)
            print()


class CountCapital(threading.Thread):
    def __init__(self,Data):
        threading.Thread.__init__(self)
        self.Data = Data

    def run(self):
        Count = 0 
        for ch in self.Data:
            if ch >= 'A' and ch <= 'Z':
                Count += 1
        lock = threading.Lock()
        with lock:
            print("Thread ID : ",threading.get_ident())
            print("Therad Name : ",threading.current_thread().name)
            print("Uppercase Count : ",Count)
            print()

class CountDigits(threading.Thread):
    def __init__(self,Data):
        threading.Thread.__init__(self)
        self.Data = Data

    def run(self):
        Count = 0 

        for ch in self.Data:
            if ch >= '0' and ch <= '9':
                Count += 1
        lock = threading.Lock()
        with lock:
            print("Thread ID : ",threading.get_ident())
            print("Therad Name : ",threading.current_thread().name)
            print("Digit Count : ",Count)
            print()



def main():
    str = input("Enter the String :")

    sobj = CountSmall(str)
    cobj = CountCapital(str)
    dobj = CountDigits(str)

    sobj.start()
    cobj.start()
    dobj.start()

    sobj.join()
    cobj.join()
    dobj.join()

    print("Exit from main")



if __name__== "__main__":
    main()