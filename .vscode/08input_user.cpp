#include <iostream>

// cout << (inserir  operador)
// cin >> (extrair operador)
// usamos a funçao getline para ler os espaços 
int main(){
    std::string name;
    int age;

    std::cout << "Qual o seu nome? ";
    std::getline(std::cin >> std::ws, name) ;   // com essa funçao lemos os espaços, assim permitindo escrever o nome completo

    std::cout << "qual a sua idade? ";\
    std::cin >> age;

    std::cout << "prazer em te conhecer " << name << "\n";
    std::cout << "esta ficando velho..." << age;

    return 0;
}