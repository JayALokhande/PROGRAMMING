// Find the Sum of all Even Number up to N
class Logic
{
    void EvenSum(int num)
    {
        int iCnt = 0 , iSum = 0 ;

        for(iCnt = 1; iCnt <= num ; iCnt++ )
        {
            if((iCnt % 2) ==0)
            {
                iSum = iSum + iCnt;
            }
        }
        System.out.println("Sum of Even Number are : "+iSum);
    }
}

public class program20A
{
    public static void main(String A[]) 
    {
        Logic lobj = new Logic();
        lobj.EvenSum(10);
        
    }
    
}
