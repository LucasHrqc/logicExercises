import java.util.Locale;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {

		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		int n, contmenor;
		double soma, media, pmenor;
		
		System.out.print("Quantas pessoas serão avaliadas? ");
		n = sc.nextInt();
		
		String[] nome = new String[n];
		int[] idade = new int[n];
		double[] altura = new double[n];
		
		for (int i = 0; i < n; i++) {
			System.out.println("Dados da " + (i+1) + "a pessoa: ");
			System.out.print("Nome: ");
			sc.nextLine();
			nome[i] = sc.nextLine();
			System.out.print("Idade: ");
			idade[i] = sc.nextInt();
			System.out.print("Altura: ");
			altura[i] = sc.nextDouble();
		}
		
		soma = 0;
		for (int i = 0; i < n; i++) {
			soma = soma + altura[i];
		}
		
		media = (double)soma / n;
		System.out.println("Altura média: " + String.format("%.2f", media));
		
		contmenor = 0;
		for (int i = 0; i < n; i++) {
			if (idade[i] < 16) {
				contmenor = contmenor + 1;
			}
		}
		
		if (contmenor > 0) {
			pmenor = (double)contmenor / n * 100;
			System.out.println("Pessoas menores de 16 anos: " + pmenor + "%");
		}
		else {
			System.out.println("Não há menores de 16 anos.");
		}
			
		for (int i = 0; i < n; i++) {
			if (idade[i] < 16) {
				System.out.println(nome[i]);
			};
		}
		
		sc.close();
	}

}
