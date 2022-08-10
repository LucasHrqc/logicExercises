import java.util.Locale;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		int n;
		double media;
		
		System.out.print("Quantos alunos serão avaliados? ");
		n = sc.nextInt();
		
		String[] nome = new String[n];
		double[] nota1 = new double[n];
		double[] nota2 = new double[n];
		
		for (int i = 0; i < n; i++) {
			System.out.println("Digite o nome, primeira e segunda nota do " + (i+1) + "o aluno");
			System.out.print("Nome: ");
			sc.nextLine();
			nome[i] = sc.nextLine();
			System.out.print("Nota 1: ");
			nota1[i] = sc.nextDouble();
			System.out.print("Nota 2: ");
			nota2[i] = sc.nextDouble();
		}
		
		System.out.println();
		System.out.println("Alunos aprovados: ");
		for (int i = 0; i < n; i++) {
			media = (nota1[i] + nota2[i]) / 2.0;
			if (media >= 6.0) {
				System.out.println(nome[i]);
			}
		}
		
		sc.close();

	}

}
