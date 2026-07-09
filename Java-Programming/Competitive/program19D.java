// Print Each Digit From the Number 
class Logic
{
    void PrintDigit(int num)
    {
        while ( num > 0) 
        {
            System.out.println(num % 10 );
            num = num / 10;
        }
    }
}

public class program19D 
{
    public static void main (String A [])
    {
        Logic lobj = new Logic();
        lobj.PrintDigit(9876);
    }
    
}
