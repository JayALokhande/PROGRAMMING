Largest = lambda No1,No2,No3 : No1 if(No1 > No2 and No1 > No3) else(No2 if No2 > No3 else No3) 

Data1 = int(input("Enter First Number :"))
Data2 = int(input("Enter Second Number :"))
Data3 = int(input("Enter Second Number :"))

Ret = Largest(Data1,Data2,Data3)

print("Largest Number  is :",Ret)