#include <bits/stdc++.h>

using namespace std;

int main()
{

        double tempC, tempF;
        char escala;

        cout << "Voce vai digitar a temperatura em qual escala (C/F)? ";
        cin >> escala;

        if (escala == 'F') {
            cout << "Digite a temperatura em Fahrenheit: ";
            cin >> tempF;

            tempC = (double) 5 / 9 * (tempF - 32);
            cout << fixed << setprecision(2);
            cout << "Temperatura equivalente em Celsius: " << tempC << endl;
        }
        else if (escala == 'C') {
            cout << "Digite a temperatura em Celsius: ";
            cin >> tempC;

            tempF = (double)(tempC * 9 / 5) + 32;
            cout << fixed << setprecision(2);
            cout << "Temperatura equivalente em Fahrenheit: " << tempF << endl;
        }


    return 0;
}
