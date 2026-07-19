import java.util.*;

class ArrayX
{
    private int Arr [];
    private int iSize ;

    public ArrayX(int X)
    {
            iSize = X;
            Arr = new int[iSize];
    }
        
    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);
        int iCnt = 0;

        System.out.println("Enter the Element ");

        for (iCnt =0 ;iCnt < iSize; iCnt++)
        {
            Arr[iCnt]= sobj.nextInt();
        }
    }
    public void Display()
    {
        int iCnt = 0;
        System.out.println("Element of the Array are :");    

        for (iCnt =0 ;iCnt < iSize; iCnt++)
        {
            System.out.println(Arr[iCnt]);
        }
    }    

    public int Summation()
    {
        int iCnt = 0, iSum = 0;
        for (iCnt =0 ;iCnt < iSize; iCnt++)
        {
            iSum = iSum + Arr[iCnt];

        }
        return iSum;
    }
}
class program170
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iRet = 0;

        System.out.println("Enter the number of Elements");

        int iLength = sobj.nextInt();

        ArrayX aobj = new ArrayX(iLength);

        aobj.Accept();
        aobj.Display();

        iRet = aobj.Summation();
        System.out.println("Summation is :" +iRet);

    }
}