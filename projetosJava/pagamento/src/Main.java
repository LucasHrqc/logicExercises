import java.util.Locale;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		String nome;
		double valorh, salario;
		int qtd;
		
		System.out.print("Nome do funcionário: ");
		nome = sc.nextLine();
		System.out.print("Valor recebido por hora: R$");
		valorh = sc.nextDouble();
		System.out.print("Horas Trabalhadas: ");
		qtd = sc.nextInt();
		
		salario = valorh * qtd;
		
		System.out.println();
		System.out.println("O pagamento para " + nome + " deve ser de R$" + String.format("%.2f", salario));
		
		sc.close();
	}

}
