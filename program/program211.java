import java.util.Scanner;

class MarvellousString
{
    public String str;

    public int CountSmall()
    {
        char Arr[] = str.toCharArray();

        int iCount = 0, iCnt = 0;

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if((Arr[iCnt] >= 'a') && (Arr[iCnt] <= 'z'))
            {
                iCount++;
            }
        }

        return iCount;
    }
}

class program211
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please enter string : ");
        String data = sobj.nextLine();

        MarvellousString mobj = new MarvellousString();

        mobj.str = data;

        int iRet = 0;

        iRet = mobj.CountSmall();

        System.out.println("Number of small characters are : "+iRet);
    }
}