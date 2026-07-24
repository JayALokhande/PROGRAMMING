
/*
iRow = 4
iCol = 4

a
a       b
a       b       c
a       b       c       d

optimization

*/
import java.util.*;

class Pattern
{
    public void Display(int iRow , int iCol)
    {
        int i = 0, j = 0 ;
        char ch = '\0';
        
        // Filter for diagonal Pattern
        if(iRow != iCol)
        {
            System.out.println("Invalid parameter");
            System.out.println("Number of Rows & Column Should Be Same ");
            return;

        }

        for(i= 1 ; i <= iRow; i++)
        {
            for (j = 1 ,ch = 'a'; j <= i ;j++ ,ch++)
            {
                
                System.out.print(ch+"\t");
                    
            }
            System.out.println();
        }
    }

}

public class program225
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue1 = 0 , iValue2= 0;
        System.out.println("Enter Number of Rows : ");
        iValue1 = sobj.nextInt();

        System.out.println("Enter Number of Columns : ");
        iValue2 = sobj.nextInt();

        Pattern pobj = new Pattern();

        pobj.Display(iValue1, iValue2);

    }

    
}
