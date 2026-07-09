// Print the Largest Number from number 
class Logic 
{
    void CheckSmall( int num )
    {
        int iDigit = 0 ;
        int iSmall = 9;

        while (num != 0) 
        {
            iDigit = num % 10;

            if(iDigit < iSmall)
            {
                iSmall = iDigit;
            }
            num = num / 10;
        
        }
        System.out.println("Small number is : "+iSmall);

    }
}

public class program20E 
{
    public static void main(String A[]) 
    {
        Logic lobj = new Logic();
        lobj.CheckSmall(45872);
        
    }
    
}
