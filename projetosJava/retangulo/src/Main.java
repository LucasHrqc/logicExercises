import java.util.Locale;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		double b, a, area, perimetro, diagonal;
		
		System.out.print("Base do Retangulo: ");
		b = sc.nextDouble();
		System.out.print("Altura do Retangulo: ");
		a = sc.nextDouble();
		
		area = b * a;
		perimetro = 2 * (a+b);
		diagonal = Math.sqrt(b*b + a*a);
		
		System.out.println();
		System.out.println("Area: " + String.format("%.4f", area));
		System.out.println("Perimetro: " + String.format("%.4f", perimetro));
		System.out.println("Diagonal: " + String.format("%.4f", diagonal));
		
		sc.close();
	}

}
