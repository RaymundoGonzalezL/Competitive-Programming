import java.math.BigInteger;
import java.util.Scanner;
//No tengo la menor idea del por que use BigInteger
//El problema se puede reducir utilizando builtin_popcount para sacar la paridad.

class Numero{
	public static void main(String [] args){
		BigInteger numero = new BigInteger("0");
		BigInteger r = new BigInteger("0");
		BigInteger zero = new BigInteger("0");
		BigInteger two = new BigInteger("2");
		BigInteger ten = new BigInteger("10");
		Scanner leer = new Scanner(System.in);
		int band = 0;
		while(band!=-1){
			numero = leer.nextBigInteger();
			if(numero.intValue() == 0)
				break;
			int cont = 0;
			BigInteger binario = new BigInteger("0");
			BigInteger d = new BigInteger("1");
			while(zero.equals(numero) != true){
				r = numero.mod(two);
				if(r.intValue() == 1)
					cont++;
				binario = binario.add(r.multiply(d));
				numero = numero.divide(two);
				d = d.multiply(ten);
			}
			System.out.println("The parity of " + binario + " is " + cont + " (mod 2).");
			
		}
	}
}