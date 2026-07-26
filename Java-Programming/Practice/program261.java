import java.util.*;

public class program261 
{
    public static void main(String A[] ) 
    {
        Scanner sobj = new Scanner(System.in);
        String Arr = null;                          //reference
        
        System.out.println("Enter String :");
        Arr = sobj.nextLine();

        // Error because it consider it as array
        System.out.println(Arr[0]);
        System.out.println(Arr[1]);
        System.out.println(Arr[2]);           
        


    }
    
}
