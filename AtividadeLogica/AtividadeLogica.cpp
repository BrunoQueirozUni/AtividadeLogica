#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int opcao;

    cout << "Escolha uma opção: ";
    cout << "1 - Excercicio 01 \n";
    cout << "2 - Excercicio 02 \n";
    cout << "3 - Excercicio 03 \n";
    cout << "4 - Excercicio 04 \n";
    cout << "5 - Excercicio 05 \n";
    cout << "6 - Excercicio 06 \n";
    cin >> opcao;

    switch (opcao) {
    case 1: 
        int numero;

        cout << "Digite um número qualquer: ";
        cin >> numero;

        if (numero < 0) {
            numero =  - numero;
        }
        cout << numero;
        break;
    case 2:
        int numero1;

        cout << "Digite um número: ";
        cin >> numero1;

        if (numero1 % 2 == 0) {
            cout << "O número é par";
        }
        else {
            cout << "O número é ímpar";
        }
        break;
    case 3:
        char letra;

        cout << "Digite qualquer letra: ";
        cin >> letra;

        if (letra == 'a' or 'e' or 'i' or 'o' or 'u' or 'A' or 'E' or 'I' or 'O' or 'U') {
            cout << "É uma vogal";
        }
        else {
            cout << "Não é uma vogal";
        }
        break;
    case 4:
        int dia, mes, ano, anoA, idade;

        cout << "Digite a sua data de nascimento, dia / mês / ano";
        cin >> dia >> mes >> ano;

        cout << "Digite o ano atual";
        cin >> anoA;

        idade = ano - anoA;

        cout << "A sua idade é: " << idade;
        break;
    case 5:
        int horas, minutos;

        cout << "Entre com um número para as hora: ";
        cin >> horas;
        cout << "Entre com um número para os minutos: ";
        cin >> minutos;

        if (horas > 23 && minutos > 59 || horas < 0 && minutos < 0) {
            cout << "A hora é inválida";
        }
        else {
            cout << "A hora é válida";
        }
        break;
    case 6:
        int n1, n2;

        cout << "Digite dois números reais: ";
        cin >> n1 >> n2;

        if (n1 == n2) {
            cout << "Eles são iguais";
        }
        else if (n1 > n2) {
            cout << n1 << " é o maior número";
        }
        else {
            cout << n2 << " é o maior número";
        }
    }
}
