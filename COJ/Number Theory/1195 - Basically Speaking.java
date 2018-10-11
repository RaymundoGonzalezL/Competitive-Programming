import java.io.*;
import java.util.StringTokenizer;
public class Basically {
    public static void main(String[] args)throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st;
        String numero1;
        while((numero1 = br.readLine())!= null){
            st = new StringTokenizer(numero1);
            String num = st.nextToken().trim();
            int base = Integer.parseInt(st.nextToken().trim());
            int baseAPasar = Integer.parseInt(st.nextToken().trim());
            int numero = Integer.parseInt(num,base);
            if(Integer.toString(numero,baseAPasar).length() > 7){
                System.out.println("  ERROR");
            }else{
                for(int x=0;x<7-Integer.toString(numero,baseAPasar).length();x++)
                    System.out.print(" ");
                System.out.println(Integer.toString(numero,baseAPasar).toUpperCase());
            }
        }
    }
}