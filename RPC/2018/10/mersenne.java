import java.math.BigInteger;
import java.io.*;
public class mersenne {
    static boolean mark[] = new boolean[2005];
    static BigInteger TWO = BigInteger.valueOf(2);
    public static void main(String[] args) throws IOException {
        mark[5] = mark[7] = mark[13] = mark[17] = mark[19] = mark[31] = mark[61] = mark[89] = true;
        mark[107] = mark[127] = mark[521] = mark[607] = mark[1279] = true;
        String linea;
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        while((linea = br.readLine()) != null){
            String nums[] = linea.split(" ");
            int A = Integer.parseInt(nums[0]);
            int B = Integer.parseInt(nums[1]);
            System.out.print("2^" + (A+B) + "-1 ");
            if(mark[A + B]) System.out.println("is prime");
            else System.out.println("not prime");
        }
    }   
}
