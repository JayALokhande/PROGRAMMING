def Display(*Data):    #Variable Number Of Argument 
    print(Data)
    print(type(Data))

def main():
    Display(10,20.89,30,40,50,False,70,80,"Python")
    

if __name__ == "__main__":
    main()