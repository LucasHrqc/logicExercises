import java.util.Locale;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {

		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		int n, qtd, total, coelhos, ratos, sapos;
		char tipoc;
		double pc, pr, ps;
		
		System.out.print("Quantos testes serão realizados? ");
		n = sc.nextInt();
		
		coelhos = 0;
		ratos = 0;
		sapos = 0;
		
		for (int i = 0; i < n; i++) {
			System.out.print("Quantidade de Cobaias do teste " + i+1 + ": ");
			qtd = sc.nextInt();
			System.out.print("Tipo de Cobaia (C, R ou S): ");
			tipoc = sc.next().charAt(0);
			
			if (tipoc == 'C' || tipoc == 'c') {
				coelhos = coelhos + qtd;
			}
			else if (tipoc == 'R' || tipoc == 'r') {
				ratos = ratos + qtd;
			}
			else if (tipoc == 'S' || tipoc == 's') {
				sapos = sapos + qtd;
			}
		}
		
		total = coelhos + ratos + sapos;
		pc = (double)coelhos / total * 100;
		pr = (double)ratos / total * 100;
		ps = (double)sapos / total * 100;
		
		System.out.println();
		System.out.println("Relatório Final: ");
		System.out.println("Total de Cobaias: " + total);
		System.out.println("Total de Coelhos: " + coelhos);
		System.out.println("Total de Ratos: " + ratos);
		System.out.println("Total de Sapos: " + sapos);
		System.out.println("Percentual de Coelhos: " + String.format("%.2f", pc) + "%");
		System.out.println("Percentual de Ratos: " + String.format("%.2f", pr) + "%");
		System.out.println("Percentual de Sapos: " + String.format("%.2f", ps) + "%");
		
		
		sc.close();
	}

}
