import threading

class Thread1(threading.Thread):
    
    def run(self):
        print("Thread1 :")
        for i in range(1,51):
            print(i,end="")
            print()

        print("Thread1 Execution Complete")

class Thread2(threading.Thread):
    
    def run(self):
        print("Thread1 :")
        for i in range(51,101):
            print(i,end="")
            print()
            
        print("Thread2 Execution Complete")


def main():
    obj1 = Thread1()
    obj2 = Thread2()

    obj1.start()
    obj1.join()

    obj2.start()
    obj2.join()


    print("Exit from main")



if __name__== "__main__":
    main()