import java.io.*;
import java.math.*;
public class Heptadecimal {
    public static void main(String[] args)throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String numeros[];
        BigInteger n,n2;
        while(true){
            numeros = br.readLine().split(" ");
            if(numeros[0].charAt(0) == '*' && numeros[1].charAt(0) == '*')
                break;
            n = new BigInteger(numeros[0],17);
            n2 = new BigInteger(numeros[1],17);
            if(n.compareTo(n2) == 0)
                System.out.println("=");
            else if(n.compareTo(n2) == 1)
                System.out.println(">");
            else
                System.out.println("<");
        }
    }    
}