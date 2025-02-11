# include <iostream>

// aqui vamos testar alguma conversações de tipos.Como transformar um numero inteiro, em um double
int main(){
    int correct = 8;
    int questions = 10;
    int percent = correct/(double)questions * 100;   //nesse exemplo pratico podemos ver que se deixarmos o variavel como tipo inteiro, não vamos obter a estatisca que desejamos
                                            // que no caso ira ser 0.80. Por isso utilizamos a conversão do tipo int, para double.int paes = 10;
    
    std::cout << percent << "%";

    return 0;
}