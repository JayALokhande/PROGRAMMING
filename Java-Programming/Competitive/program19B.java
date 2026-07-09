// converting marks into grades
class Logic 
{
    void DisplayGrade(int mark)
    {
        if (mark >= 85)
        {
            System.out.println("A Grade");
        }
        else if (mark >= 75 && mark <= 84)
        {
            System.out.println("B Grade");
        }
        else if (mark >= 65 && mark <= 74)
        {
            System.out.println("C Grade");
        }
        else if (mark >= 37 && mark <= 64)
        {
            System.out.println("D Grade");
        }
        else if(mark < 36)
        {
            System.out.println("Fail..");
        }
    }
}


class program19B
{
    public static void main (String A[] )
    {
        Logic lobj = new Logic();
        lobj.DisplayGrade(92);
        lobj.DisplayGrade(82);
        lobj.DisplayGrade(72);
        lobj.DisplayGrade(62);
        lobj.DisplayGrade(2);
    }
}