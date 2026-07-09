class Logic
{
    void CheckPalindrome(int num)
    {
         int iDigit = 0;
        int iSum = 0;

        while(num != 0)
        {
            iDigit = num % 10;
            iSum = iSum + iDigit;
            num = num / 10;
        }
        System.out.println("Sum is :"+iSum);
    }

}
class program17A
{
    public static void main(String A[] )
    {
        Logic lobj = new Logic();
        lobj.CheckPalindrome(1234);
    }
}