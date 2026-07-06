//Type 3

import java.util.*;

class NumebrX
{
    public static boolean checkDivisible(int iNo)
    {
        if ((iNo % 3 == 0) && (iNo % 5 == 0))
        {
            return true;
        }
        else
        {
            return false ;
        }
    }
} 

class program44
{  
    public static void main (String A[])
    {
       
        Scanner sobj = new Scanner(System.in);

        int iValue = 0;
        boolean bRet = false;

        System.out.println("Enter Your Number :");
        iValue=sobj.nextInt();

        bRet = NumebrX.checkDivisible(iValue);  
        
        if (bRet==true)
        {
            System.out.println("Numebr is Divisible by 3 & 5 ");
        }
        else
        {
           System.out.println("Numebr is not Divisible by 3 & 5 "); 
        }
        
    }
}