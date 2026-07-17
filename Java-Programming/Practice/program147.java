import java.util.*;

class program147
{
    
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number of Elements");

        int iLength = sobj.nextInt();

        int Brr[]= new int[iLength];
        int iCnt =0;

        System.out.println("Enter the Elements :");

        for (iCnt = 0 ; iCnt<Brr.length;iCnt++)
        {
            Brr[iCnt]= sobj.nextInt();

        }

        System.out.println("Elements Before Function call: ");

        for(iCnt=0 ; iCnt <5 ; iCnt++)
        {
            System.out.println(Brr[iCnt]);
        }

        ArrayX aobj = new ArrayX();
      
        aobj.Update(Brr,5);

        
        System.out.println("Array Elements After function call: ");

         for(iCnt=0 ; iCnt <5 ; iCnt++)
        {
           System.out.println(Brr[iCnt]);
        }

    }
}

class ArrayX
{

    public  void Update(int Arr[], int iSize)
    {
         int iCnt = 0;

        for(iCnt = 0 ; iCnt <iSize; iCnt++)
        {
            Arr[iCnt]++;
        }
    }
}