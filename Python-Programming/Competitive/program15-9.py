from functools import reduce

Product = lambda No1, No2: No1 * No2

def main():
    Data = [15,23,30,45,50,60,75,80,95]

    print("Data :", Data)

    FData = reduce(Product, Data)

    print("Product of all elements :",FData)

if __name__ == "__main__":
    main()