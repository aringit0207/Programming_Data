import java.util.Scanner;
class a {
    public static void main(String[] args) {
      int out =  sum(1,2,3,4,5,6,7,8,9);
      System.out.println(out);
    }

    static int sum(int ...inp)
    {
        int s =0;
        for(int i=0; i<inp.length; i++)
    {
        s = s+ inp[i];
    }
        return s;
    }
}