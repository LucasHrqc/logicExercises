import java.util.Locale;

public class Main {

	public static void main(String[] args) {
		
		Locale.setDefault(Locale.US);
		
		double x;
		
		x = 2.34567;
		
		System.out.println("x = " + String.format("%.2f", x) + ".");
		
	}

}
