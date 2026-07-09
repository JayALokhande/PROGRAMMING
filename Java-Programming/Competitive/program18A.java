class Logic
{
    void  CheckPrime(int num)
    {
        int iCnt = 0;

        if (num <= 1)
        {
            System.out.println("Not Prime ");
            return;
        }
        for(iCnt = 2; iCnt < num; iCnt++)
        {
            if((num % 2) ==0)
            {
                System.out.println("Not Prime ");
                return;
            }
        }
        System.out.println("Prime");
    } 

}

public class program18A
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();
        lobj.CheckPrime(11);
        lobj.CheckPrime(12);
        lobj.CheckPrime(13);
        lobj.CheckPrime(14);
        
    }
    
}
