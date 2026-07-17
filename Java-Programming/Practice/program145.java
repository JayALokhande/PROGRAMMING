import java.util.*;

class program145
{
    public static void Update(int Arr[], int iSize)
    {
         int iCnt = 0;

        for(iCnt = 0 ; iCnt <iSize; iCnt++)
        {
            Arr[iCnt]++;
        }
    }
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int Brr[] = {10,20,30,40,50};

        System.out.println("Elements Before Function call: ");

        int iCnt = 0 ;
        for(iCnt=0 ; iCnt <5 ; iCnt++)
        {
            System.out.println(Brr[iCnt]);
        }
        Update(Brr,5);

        
        System.out.println("Array Elements After function call: ");

         for(iCnt=0 ; iCnt <5 ; iCnt++)
        {
           System.out.println(Brr[iCnt]);
        }

    }
}