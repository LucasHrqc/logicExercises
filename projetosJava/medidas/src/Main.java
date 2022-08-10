import java.util.Locale;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		double a, b, c, areaq, areat, areatp;
		
		System.out.print("Digite a medida A: ");
		a = sc.nextDouble();
		System.out.print("Digite a medida B: ");
		b = sc.nextDouble();
		System.out.print("Digite a medida C: ");
		c = sc.nextDouble();
		
		areaq = a*a;
		areat = a * b / 2.0;
		areatp = (a+b) / 2.0 * c;
		
		System.out.println();
		System.out.println("Area do Quadrado: " + String.format("%.4f", areaq));
		System.out.println("Area do Triangulo: " + String.format("%.4f", areat));
		System.out.println("Area do Trapézio: " + String.format("%.4f", areatp));
			
		sc.close();
	}

}
