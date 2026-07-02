CheckLength = lambda str: len(str) > 5

def main():
    Data = input("Enter strings separated by space: ").split()

    print("Original List :", Data)

    FData = list(filter(CheckLength, Data))

    print("Strings with length greater than 5 :", FData)

if __name__ == "__main__":
    main()