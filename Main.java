import java.util.Locale;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		double tempC, tempF;
        char escala;
        
        System.out.print("Voce vai digitar a temperatura em qual escala (C/F)? ");
		escala = sc.next().charAt(0);
		
		if (escala == 'F') {
			System.out.print("Digite a temperatura em Fahrenheit: ");
			tempF = sc.nextDouble();
			
			tempC = (double) 5 / 9 * (tempF - 32);
			System.out.println("Temperatura equivalente em Celsius: " + String.format("%.2f", tempC));
		}
		else if (escala == 'C') {
			System.out.print("Digite a temperatura em Celsius: ");
			tempC = sc.nextDouble();
			
			tempF = (double)(tempC * 9 / 5) + 32;
			System.out.println("Temperatura equivalente em Fahrenheit: " + String.format("%.2f", tempF));
		}
			
		 sc.close();
	}

}
