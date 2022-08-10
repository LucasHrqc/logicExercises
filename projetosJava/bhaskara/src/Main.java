import java.util.Locale;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {

	Locale.setDefault(Locale.US);
	Scanner sc = new Scanner(System.in);
	
	double a, b, c, x1, x2, delta;
	
	System.out.print("Coeficiente A: ");
	a = sc.nextDouble();
	System.out.print("Coeficiente B: ");
	b = sc.nextDouble();
	System.out.print("Coeficiente C: ");
	c = sc.nextDouble();
	
	delta = b*b - 4 * a * c;
	
	if (delta < 0 || a == 0) {
		System.out.println("Esta equação não possui raízes reais!");
	}
	else {
		x1 = (- b + Math.sqrt(delta)) / (2.0 * a);
		x2 = (- b - Math.sqrt(delta)) / (2.0 * a);
		System.out.println();
		System.out.println("X1 = " + String.format("%.4f", x1));
		System.out.println("X2 = " + String.format("%.4f", x2));
	}
	
	sc.close();
	}

}
