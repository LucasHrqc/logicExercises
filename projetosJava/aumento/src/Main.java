import java.util.Locale;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {

		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		double salario, nsalario, aumento, porcentagem;
		
		System.out.print("Digite o salário do funcionário: R$");
		salario = sc.nextDouble();
		
		if (salario <= 1000.0) {
			porcentagem = 20.0;
		}
		else if (salario <= 3000.0) {
			porcentagem = 15.0;
		}
		else if (salario <= 8000.0) {
			porcentagem = 10.0;
		}
		else {
			porcentagem = 5.0;
		}
		
		aumento = salario * porcentagem / 100;
		nsalario = salario + aumento;
		
		System.out.println();
		System.out.println("Novo Salário: R$" + String.format("%.2f", nsalario));
		System.out.println("Aumento: R$" + String.format("%.2f", aumento));
		System.out.println("Porcentagem: " + String.format("%.0f", porcentagem) + "%");
		
		sc.close();
	}

}
