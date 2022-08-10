import java.util.Locale;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		int n;
		double soma, media;
		
		System.out.print("Quantos números serão digitados? ");
		n = sc.nextInt();
		
		double[] vet = new double[n];
		
		for (int i = 0; i < n; i++) {
			System.out.print("Digite um número: ");
			vet[i] = sc.nextDouble();
		}
		
		// Imprimir vetor e somar;
		soma = 0;
		System.out.println();
		System.out.print("Valores do Vetor: ");
		for (int i = 0; i < n; i++) {
			System.out.print(vet[i] + " ");
			soma = soma + vet[i];
		}
		
		media = (double)soma / n;
		
		System.out.println();
		System.out.println("Soma: " + String.format("%.2f", soma));
		System.out.println("Média: " + String.format("%.2f", media));
		
		sc.close();
	}

}
