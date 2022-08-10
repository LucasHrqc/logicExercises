
import java.util.Locale;

public class Main {

	public static void main(String[] args) {
		
		Locale.setDefault(Locale.US);
		
		int idade;
		double salario, altura;
		char genero;
		String nome;
		
		idade = 20;
		salario = 5800.50;
		altura = 1.72;
		genero = 'F';
		nome = "Lucas Henrique";
		
		System.out.println("Idade: " + idade);
		System.out.println("Salario: " + String.format("%.2f", salario));
		System.out.println("Altura: " + altura);
		System.out.println("Genero: " + genero);
		System.out.println("Nome: " + nome);
		
	}

}
