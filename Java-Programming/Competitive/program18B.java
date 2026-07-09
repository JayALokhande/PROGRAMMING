class Logic
{
    void  PrintEvenNumber(int n)
    {
        int iCnt = 0;

        for(iCnt = 1 ; iCnt <= n; iCnt++)
        {
            if((iCnt % 2)== 0)
            {
                System.out.println(iCnt);
            }

        }
    } 

}

public class program18B
{
    public static void main(String A[])
    {
        System.out.println("Even Number Are :");
        Logic lobj = new Logic();
        lobj.PrintEvenNumber(20);
        
        
    }
    
}
