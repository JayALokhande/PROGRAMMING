//Type 2

import java.util.*;

class program40
{
    void CheckDivisible(int iNo)
    {
        if ((iNo % 3 == 0)&&(iNo % 5 == 0))
        {
            System.out.println("Numebr is Divisible by 3 & 5 ");
        }
        else
        {
            System.out.println("Numebr is Not Divisible by 3 & 5 ");
        }

    }
    public static void main (String A[])
    {
       
        Scanner sobj = new Scanner(System.in);

        int iValue = 0;

        System.out.println("Enter Your Number :");
        sobj.nextInt();
       
        CheckDivisible(iValue);          //Error calling non static from static methode main 
        
    }
}