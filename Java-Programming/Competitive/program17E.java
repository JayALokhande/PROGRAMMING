class Logic
{
    void PrintTable(int num)
    {
        int iCnt = 0;

        for(iCnt = 1; iCnt <= 10 ;iCnt ++)
        {
            System.out.println(num +"x" + iCnt + "=" + (iCnt*num) );

        }

    }
}


public class program17E 
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();
        lobj.PrintTable(5);

    }
    
}
