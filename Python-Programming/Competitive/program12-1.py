def CheckVowel(ch):
    if(ch == 'a')or(ch == 'e')or(ch == 'i')or(ch == 'o')or(ch == 'u'):
        return True
    else:
        return False
    
def main():
    Data =(input("Enter character : "))

    Ret = CheckVowel(Data)

    if(Ret == True):
        print("Vowel")
    else:
        print("Not Vowel")
        
if __name__ == "__main__":
    main()