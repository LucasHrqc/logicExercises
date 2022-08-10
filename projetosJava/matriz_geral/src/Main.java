import java.util.Locale;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {

		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		int n, l, c;
		double soma;
		
		System.out.print("Digite a ordem da Matriz: ");
		n = sc.nextInt();
		
		double[][] mat = new double[n][n];
		
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				System.out.print("Digite o elemento [" + i + "," + j + "]: ");
				mat[i][j] = sc.nextDouble();
			}
		}
		
		soma = 0;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (mat[i][j] >= 0) {
					soma = soma + mat[i][j];
				}
			}
		}
		
		System.out.println();
		System.out.println("Soma dos valores positivos: " + soma);
		
		System.out.println();
		System.out.print("Escolha uma linha: ");
		l = sc.nextInt();
		System.out.print("Linha escolhida: ");
		for (int j = 0; j < n; j++) {
			System.out.print(mat[l][j] + " ");
		}
		
		System.out.println();
		System.out.println();
		System.out.print("Escolha uma Coluna: ");
		c = sc.nextInt();
		System.out.print("Coluna escolhida: ");
		for (int i = 0; i < n; i++) {
			System.out.print(mat[i][c] + " ");
		}	
		
		System.out.println();
		System.out.println();
		System.out.print("Diagonal Principal: ");
		for (int i = 0; i < n; i++) {
			System.out.print(mat[i][i] + " ");
		}
		
		System.out.println();
		System.out.println();
		System.out.println("Matriz Alterada: ");
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if(mat[i][j] < 0) {
					mat[i][j] = mat[i][j] * mat[i][j];
				}
				System.out.print(mat[i][j] + " ");
			}
			System.out.println();
		}
		
		sc.close();
	}

}
