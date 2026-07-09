// Find the number is Divisible By 5 and 11 or not 
class Logic 
{
    void ChechDivisible(int num )
    {
        if((num % 5)== 0 && (num % 11 )==0)
        {
            System.out.println("Divisible By 5 & 11 ..");
        }
        else
        {
            System.out.println("Not Divisible ..");
        }
    }
}

public class program19C 
{
    public static void main(String A[] ) 
    {
        Logic lobj = new Logic();
        lobj.ChechDivisible(55);
        lobj.ChechDivisible(110);
        lobj.ChechDivisible(10);
        
    }    
}
