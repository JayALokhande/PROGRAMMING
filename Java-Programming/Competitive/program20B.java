// Print N number down to 1 in reverse order 
class Logic
{
    void PrintReverse(int num)
    {
        for(int iCnt = num ; iCnt>= 1; iCnt --)
        {
            System.out.println(iCnt);
        }
    }

}
class program20B
{
    public static void main (String A[])
    {
        Logic lobj = new Logic();
        lobj.PrintReverse(10);
    }
}