class Logic
{
    void  CheckSign(int num)
    {
        if(num > 0)
        {
            System.out.println("Number is Positive ");
        }
        else if(num < 0)
        {
            System.out.println("Number is Negative ");
        }
        else
        {
            System.out.println("Number is Zero ");
        }
    } 

}

public class program18E
{
    public static void main(String A[])
    {
        
        Logic lobj = new Logic();
        lobj.CheckSign(8);
        lobj.CheckSign(0);
        lobj.CheckSign(-8);
        
        
    }
    
}
