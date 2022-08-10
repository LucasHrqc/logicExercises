import java.util.Locale;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		double nota1, nota2, nf;
		
		System.out.print("Digite a primeira nota: ");
		nota1 = sc.nextDouble();
		System.out.print("Digite a segunda nota: ");
		nota2 = sc.nextDouble();
		
		nf = nota1 + nota2;
		
		if (nf < 60) {
			System.out.println("Reprovado!");
		}
		else {
			System.out.println();
			System.out.println("Nota Final: " + nf);
		}
		
		sc.close();
		
	}

}
