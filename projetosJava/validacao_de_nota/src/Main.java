import java.util.Locale;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		String nome;
		double nota1, nota2, media;
		
		System.out.print("Digite o nome do aluno: ");
		nome = sc.nextLine();
		System.out.print("Digite a primeira nota: ");
		nota1 = sc.nextDouble();
					
		while (nota1 < 0 || nota1 > 10) {
			System.out.print("Valor Invalido! Tente novamente: ");
			nota1 = sc.nextDouble();
		}
		
		System.out.print("Digite a segunda nota: ");
		nota2 = sc.nextDouble();
		
		while (nota1 < 0 || nota1 > 10) {
			System.out.print("Valor Invalido! Tente novamente: ");
			nota2 = sc.nextDouble();
		}
		
		media = (nota1 + nota2) / 2.0;
		
		if (media < 6.0) {
			System.out.println();
			System.out.println("Reprovado!");
		}
		
		System.out.println("Media: " + String.format("%.2f", media));
		
		sc.close();
	}

}
