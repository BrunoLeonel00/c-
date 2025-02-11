# include <iostream>

int main() {
    // const ( é uma costante, uma variavel que voce nao quer que seja alterada no codigo, como por exemplo o valor de pi)
    const double pi = 3.14159;
    const int Light_speed = 299792458;
    const double dinheiro_guardado = 100.2231221;
    const char moeda = '$';

    // Um exeplo pratico de constantes é se quisermos calcular a ciscuferencia de um circulo
    const double radius = 10;
    const double circuference = 2 * pi * radius;
    std::cout << circuference << "cm ";
    
    // se por acaso alguem mexa no nosso codio e mude o valor de pi, a nossa conta estaria comprometida, e não teriamos a circuferencia correta.

    // sempre que definir uma costante é  interresante declarar a variavel como letra maiuscula
    return 0;
}
