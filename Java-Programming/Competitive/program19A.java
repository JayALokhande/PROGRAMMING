// Finding leap year or not .

class Logic 
{
    void LeapYear(int year)
    {
        if((year % 4)== 0 )
        {
            System.out.println("This Is Leap Year..");
        }
        else
        {
            System.out.println("This is Not a Leap Year");
        }
    }
}
public class program19A 
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();
        lobj.LeapYear(2024);
        lobj.LeapYear(2025);
    }
    
}
