# include <iostream>

//namespace oferece uma solução para evitar conflitos de nomes, cada entidade precisa de um nome unico, e namespace permite  usar o mesmo   
// desde que os namespace sejam diferentes 

namespace first{
    int x = 1;
    

}

namespace second{

    int x = 2;

}
int main () {
    //using namespace std; // com esse namespace ativo, nao preciamos chamar o prefixo para declarar string, ou chamar o cout
    using std::cout;
    using std::string;
    
    string nome = "leonel";
    
    int x = 22;         
   
    cout << x << "\n"; // se nao declarar os namespace, o programa ira pegar o INT MAIN como padrão. So muda se eu declarar o using namespace no inicio do programa
    
    cout << first::x << "\n";  // aqui eu declarei o namespace first, dessa forma ele imprimiu 1, e nao 22

    cout << second::x;


    return 0;

}