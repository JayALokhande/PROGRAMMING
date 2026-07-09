// Print the Largest Number from number 
class Logic 
{
    void CheckLargest( int num )
    {
        int iDigit = 0 ;
        int Largest = 0;

        while (num != 0) 
        {
            iDigit = num % 10;

            if(iDigit > Largest)
            {
                Largest = iDigit;
            }
            num = num / 10;
        
        }
        System.out.println("Largest number is : "+Largest);

    }
}
public class program20D 
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();
        lobj.CheckLargest(83429);
    }
}
