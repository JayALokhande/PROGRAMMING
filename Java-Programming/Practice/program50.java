import java.util.*;

class NumebrX
{
    public boolean CheckPerfect(int iNo)
    {
        int iCnt = 0;
        int iSum = 0;
        
        for (iCnt = 1; iCnt <= (iNo / 2) ; iCnt++)
        {
            if((iNo % iCnt) == 0 )
            {
                iSum = iSum + iCnt;
            }
        }
        
        if(iSum==iNo)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
} 

class program50
{  
    public static void main (String A[])
    {
       
        Scanner sobj = new Scanner(System.in);

        int iValue = 0;
        boolean bRet = false;

        System.out.println("Enter Your Number :");
        iValue= sobj.nextInt();

        NumebrX nobj = new NumebrX();

       bRet = nobj.CheckPerfect(iValue);

       if(bRet == true)
       {
        System.out.println("This is Prefect Number ");
       }
       else
       {
        System.out.println("This is Not A Prefect Number ");
       }
    }
}

// Time Complexity : O(N/2)
// Where N >= 0