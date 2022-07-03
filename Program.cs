using System;
using System.Globalization;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace PROBLEMA_TEMPERATURA {
    internal class Program {
        static void Main(string[] args) {

            CultureInfo CI = CultureInfo.InvariantCulture;

            double tempC, tempF;
            char escala;

            Console.Write("Voce vai digitar a temperatura em qual escala (C/F)? ");
            escala = char.Parse(Console.ReadLine());

            if (escala == 'F') {
                Console.Write("Digite a temperatura em Fahrenheit: ");
                tempF = double.Parse(Console.ReadLine(), CI);

                tempC = (double)5 / 9 * (tempF - 32);

                Console.WriteLine("Temperatura equivalente em Celsius: " + tempC.ToString("F2", CI));
            }
            else if (escala == 'C') {
                Console.Write("Digite a temperatura em Celsius: ");
                tempC = double.Parse(Console.ReadLine(), CI);

                tempF = (double)(tempC * 9 / 5) + 32;

                Console.WriteLine("Temperatura equivalente em Fahrenheit: " + tempF.ToString("F2", CI));
            }

        }
    }
}
