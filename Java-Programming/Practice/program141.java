import java.util.*;

class program141S
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int iCnt = 0;

        System.out.println("Enter the number of Elements");

        int iLength = sobj.nextInt();

        int Brr[]= new int[iLength];

        System.out.println("Enter the Elements :");

        for (iCnt = 0 ; iCnt<Brr.length;iCnt++)
        {
            Brr[iCnt]= sobj.nextInt();

        }

        System.out.println("Element of The Array Are : ");
        for (iCnt = 0 ; iCnt<Brr.length;iCnt++)
        {
            System.out.println(Brr[iCnt]);
        }
        
    }
}