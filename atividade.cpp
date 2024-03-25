#include <iostream>

using std::cout;
using std::cin;
using std::string;
using std::endl;

// Primeiro Exercício
int novoAbs(int&);
float novoAbs(float&);

// Segundo Exercício
int calcularFatorial(int&);

int main()
{
    // Exercício 1 main
    int iNum1;
    cout << "Digite um número inteiro";
    cin >> iNum1;
    
    cout << novoAbs(iNum1) << endl;
    
    float fNum1;
    cout << "Digite um número float";
    cin >> fNum1;
    cout << novoAbs(fNum1) << endl;

    // Exercício 2 main
    int iNum2;
    cout << "Digite um número inteiro positivo: ";
    cin >> iNum2;

    int iResultado2 = calcularFatorial(iNum2);

    cout << "O fatorial de " << iNum2 << " é: " << iResultado2 << endl;

    return 0;
}

// Exercício 1 Funções
float novoAbs(float& frefNum){
    if (frefNum < 0){
        return -frefNum;
    }
    else{
        return frefNum;
    }
}

int novoAbs(int& irefNum){
    if (irefNum < 0){
        return -irefNum;
    }
    else{
        return irefNum;
    }
}

// Exercício 2 Funções
int calcularFatorial(int& irefNumero) {
    int iFatorial = 1;
    if (irefNumero < 0) {
        cout << "Erro: Não é possível calcular o fatorial de um número negativo." << endl;
        return -1; 
    }
    for (int i = 1; i <= irefNumero; ++i) {
        iFatorial *= i;
    }
    return iFatorial;
}


