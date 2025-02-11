#include <iostream>

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");
    
    // int (armazenam apenas numeros inteiros)

    int x = 33; // aqui declaramos a variavel, e atribuimos um valor
    int y = 22;
    int sum = x + y;
    
    std::cout << x << "\n";
    std::cout << y << "\n";  // aqui eu pedi para ele mostra o valor das variaveis, e somar eles 
    std::cout<< sum << "\n";

    // double (inclui numeros decimais)
    double peso = 33.22;
    double altura = 22.33;
    double pontos = 22.1;

    // char (char é curioso porque nale pode ser armazenado apenas um caractere, e detalhe, deve ser entre aspas simples)
    char notas = 'A';
    char vogal = 'O';
    char first_letter = 'B';

    // boolean ( variavel do tipo logico, VERDADEIRO OU FALSO)
    bool esta_matriculado = true;
    bool convidado = false;
    bool online = false;

    // Strings ( objetos que seguem uma sequencia de textos, preciamos chamar o STD para atribuir valor a variavel)
    std::string nome = "bruno";
    std::string esporte = "i like football";
    std::string sobrenome = "leonel";

    std::cout << "prazer meu nome é " << nome << " tenho " << altura << " metros de altura, e " << esporte;

    return 0;

}