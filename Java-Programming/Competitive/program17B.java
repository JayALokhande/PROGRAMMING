//palindrome
class Logic
{
    void CheckPalindrome(int num)
    {
        int iDigit = 0;
        int iRev = 0;
        int iTemp = num;        

        while(num != 0) 
        {
            iDigit = num % 10;
            iRev = (iRev* 10) +iDigit;
            num = num / 10;
        }
        if(iTemp == iRev)
        {
            System.out.println("Palindrome Number");
        }
        else
        {
            System.out.println(" Not Palindrome Number");
        }
    }

}
class program17B
{
    public static void main(String A[] )
    {
        Logic lobj = new Logic();
        lobj.CheckPalindrome(121);
    }
}