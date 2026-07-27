import java.util.*; 
import Marvellous.StringX;

public class program277
{
    public static void main(String A[] ) 
    {
        Scanner sobj = new Scanner(System.in);
        String data = null;

        StringX strobj = new StringX();       //Error
        int iRet = 0;
        
        System.out.println("Enter String :");
        data = sobj.nextLine();

        iRet =strobj.CountCapital(data);
        System.out.println("Number of Capital Characters : "+iRet);

        iRet =strobj.CountSmall(data);
        System.out.println("Number of Small Characters : "+iRet);

        iRet =strobj.CountDigits(data);
        System.out.println("Number of Digits Are : "+iRet);

        iRet =strobj.CountSpace(data);
        System.out.println("Number of White  Spaces  Are : "+iRet);

        iRet =strobj.CountSpecial(data);
        System.out.println("Number of White  Spaces  Are : "+iRet);

    }
    
}
