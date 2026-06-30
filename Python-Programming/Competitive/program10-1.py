def MultiTable(No):
    for i in range(1,11):
        print(No * i)

def main():
    value = int(input("Enter the Number : "))

    MultiTable(value)

if __name__ == "__main__":
    main()