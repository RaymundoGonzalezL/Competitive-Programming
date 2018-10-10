import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;

public class p1025 {
public static void main(String[] args) throws NumberFormatException, IOException {
	BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	int grupos = Integer.parseInt(br.readLine());
	
	String[] aoeu = br.readLine().split(" ");
	int[] numeros =new int[grupos];
	for (int i = 0; i < numeros.length; i++) {
		numeros[i]=Integer.parseInt(aoeu[i]);
	}
	
	Arrays.sort(numeros);
	int necesarios=grupos/2;
	necesarios++;
	int personas=0;
	for (int i = 0; i < necesarios; i++) {
		personas+=(numeros[i]/2)+1;
	}
	System.out.println(personas);
}
}