
class Logic
{
    void FindMax(int a , int b)
    {
        if(a > b)
        {
            System.out.println(a +"Is Big ..");
        }
        else
        {
            System.out.println(b + "Is Big ");
        }
    }
}

public class program17C 
{
    public static void main(String A [] )
    {
        Logic lobj = new Logic();
        lobj.FindMax(20,15);
        
    }
    
}
