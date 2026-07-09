class Logic
{
    void FindMin(int a, int b ,int c)
    {
        if( (a<= b) && (a<= c))
        {
            System.out.println("Minimum number is : " + a);
        }
        else if ((b<= a) && (b<= c))
        {
            System.out.println("Minimum number is : " + b);
        }
        else
        {
            System.out.println("Minimun number is : " + c);
        }
    }
}

public class program17D 
{
    public static void main(String A[] )
    {
        Logic lobj = new Logic();
        lobj.FindMin(3,7,2);
        
    }
    
}
