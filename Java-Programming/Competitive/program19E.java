class Logic 
{
    void CalculatePower(int base , int exp)
    {
        int result = 1;

        for (int iCnt = 1 ; iCnt <= exp ; iCnt++)
        {
            result = result * base ;
        }
        System.out.println(result);
    }   
}

class program19E 
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();
        lobj.CalculatePower(2,5);
    }

}
