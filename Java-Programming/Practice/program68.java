import java.util.*;

class NumebrX
{
    public boolean CheckPrime(int iNo)
    {
        int iCnt = 0;
        boolean bFlag = true ;
        
        for (iCnt = 2; iCnt <= (iNo / 2) ; iCnt++)
        {
            if((iNo % iCnt) == 0 )
            {
                bFlag = false;
                break ;
            }
            
        }

        return bFlag;
    }
} 

class program68
{  
    public static void main (String A[])
    {
       
        Scanner sobj = new Scanner(System.in);

        int iValue = 0;
        boolean bRet = false;

        System.out.println("Enter Your Number :");
        iValue= sobj.nextInt();

        NumebrX nobj = new NumebrX();

       bRet = nobj.CheckPrime(iValue);

       if(bRet == true)
       {
        System.out.println("This is Prime Number ");
       }
       else
       {
        System.out.println("This is Not A Prime Number ");
       }
    }
}

// Time Complexity : O(N/2)
// Where N >= 0