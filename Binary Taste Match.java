import java.util.*;
public class BinaryTaste
{
    public static int[] dToBinary(int x)
    {
        int[] a=new int[10];
        int i=1,r;
        while(x!=0)
        {
         a[i++]=x%2;
         x=x/2;
        }
        a[0]=i-1;
        return a;
    }
    public static void create(int[] a)
    {
       int s=0,k=0;
       for(int i=1;i<=a[0];i++)
       {
          if(a[i+1]==0 && k==0)
           {
            s+=Math.pow(2,i);
            i+=1;
            k++;
           }
           else
           s+=Math.pow(2,i-1);
       }
       System.out.print(s);
    }
     public static void main(String []args)
     {
         create(dToBinary(11));   
     }
}
