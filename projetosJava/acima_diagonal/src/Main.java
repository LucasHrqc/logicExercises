import java.util.Locale;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		int n, soma;
		
		System.out.print("Qual a ordem da Matriz? ");
		n = sc.nextInt();
		
		int[][] mat = new int[n][n];
		
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				System.out.print("Elemento [" + i + "," + j + "]: ");
				mat[i][j] = sc.nextInt();
			}
		}
		
		soma = 0;
		for (int i = 0; i < n; i++) {
			for (int j = i+1; j < n; j++) {
				soma = soma + mat[i][j];
			}
		}
		
		System.out.println();
		System.out.println("Soma dos elementos acima da diagonal principal: " + soma);
		
		sc.close();	
	}

}
