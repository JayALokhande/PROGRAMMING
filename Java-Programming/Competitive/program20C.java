//Find the Number is Perfect or not
class Logic
{
    void CheckPerfect(int num)
    {
        int iCnt = 0;
        int iSum = 0;

        for(iCnt = 1; iCnt <= (num / 2); iCnt++)
        {
            if((num % iCnt) == 0)
            {
                iSum = iSum + iCnt;
            }
        }

        if(iSum == num)
        {
            System.out.println(num + " is Perfect Number");
        }
        else
        {
            System.out.println(num + " is Not Perfect Number");
        }
    }
}

public class program20C
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();
        lobj.CheckPerfect(6);
        lobj.CheckPerfect(10);
        lobj.CheckPerfect(28);
    }
    
}
