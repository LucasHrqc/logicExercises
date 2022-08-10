import java.util.Locale;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		int n, contneg;
		
		System.out.print("Qual a ordem da Matriz? ");
		n = sc.nextInt();
		
		int[][] mat = new int[n][n];
		
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				System.out.print("Elemento [" + i + "," + j + "]: ");
				mat[i][j] = sc.nextInt();
			}
		}		
		
		System.out.println();
		System.out.println("Diagonal principal: ");
		
		for (int i = 0; i < n; i++) {
				System.out.print(mat[i][i] + " ");
		}
		
		contneg = 0;
		
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if(mat[i][j] < 0) {
					contneg = contneg + 1;
				}
			}
		}	
		
		System.out.println();
		System.out.println("Quantidade de números negativos: " + contneg);
		
		sc.close();
	}

}
