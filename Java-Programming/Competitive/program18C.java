class Logic
{
    void  PrintOddNumber(int n)
    {
        int iCnt = 0;

        for(iCnt = 1 ; iCnt <= n; iCnt++)
        {
            if((iCnt % 2)!= 0)
            {
                System.out.println(iCnt);
            }

        }
    } 

}

public class program18C
{
    public static void main(String A[])
    {
        System.out.println("Odd Number Are :");
        Logic lobj = new Logic();
        lobj.PrintOddNumber(20);
        
        
    }
    
}
