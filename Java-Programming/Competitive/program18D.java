class Logic
{
    void  SumEvenOddDigits(int num)
    {
        int iDigit = 0 ;
        int EvenSum = 0 ;
        int OddSum = 0 ;

        while (num != 0)
        {
            iDigit = num % 10;

            if((iDigit % 2)== 0)
            {
                EvenSum = EvenSum + iDigit;
            }
            else
            {
                OddSum = OddSum + iDigit;   
            }
            num = num / 10;
        }
        System.out.println("Sum of Even number :"+ EvenSum);
        System.out.println("Sum of Odd number :"+ OddSum);
    } 

}

public class program18D
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();
        lobj.SumEvenOddDigits(123456789);
    }
    
}
