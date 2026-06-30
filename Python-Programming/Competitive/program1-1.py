# Write a program to display the data , Type and Address of it ...

def Display(*Data):     
    print(Data)
    print(type(Data))

def main():
    Display(10,20.89,30,40,50,False,70,80,"Python")
    

if __name__ == "__main__":
    main()