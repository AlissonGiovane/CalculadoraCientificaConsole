#include <iostream>
#include <cmath>

// Declarações de funções
void Potencia(float x, float y);
void Seno(float x);
void Quadrado(float x);
void Cosseno(float x);
void Tangente(float x);
void Logaritmo(float x);
void LogaritmoBase10(float x);

int main() {
    float a, b;
    int z;

    std::cout << "O QUE VOCÊ DESEJA CALCULAR: " << std::endl;
    std::cout << "Pressione '1' para Potência: " << std::endl;
    std::cout << "Pressione '2' para Seno: " << std::endl;
    std::cout << "Pressione '3' para Quadrado: " << std::endl;
    std::cout << "Pressione '4' para Cosseno: " << std::endl;
    std::cout << "Pressione '5' para Tangente: " << std::endl;
    std::cout << "Pressione '6' para Logaritmo Natural: " << std::endl;
    std::cout << "Pressione '7' para Logaritmo na Base 10: " << std::endl;

    std::cin >> z;
    switch (z) {
        case 1:
            std::cout << "Informe o número para calcular sua potência: " << std::endl;
            std::cin >> a;
            std::cout << "Informe a potência para o número: " << std::endl;
            std::cin >> b;
            Potencia(a, b);
            break;

        case 2:
            std::cout << "Informe o número para calcular o seno: " << std::endl;
            std::cin >> a;
            Seno(a);
            break;

        case 3:
            std::cout << "Informe o número para calcular o quadrado: " << std::endl;
            std::cin >> a;
            Quadrado(a);
            break;

        case 4:
            std::cout << "Informe o número para calcular o cosseno: " << std::endl;
            std::cin >> a;
            Cosseno(a);
            break;

        case 5:
            std::cout << "Informe o número para calcular a tangente: " << std::endl;
            std::cin >> a;
            Tangente(a);
            break;

        case 6:
            std::cout << "Informe o número para calcular o logaritmo natural: " << std::endl;
            std::cin >> a;
            Logaritmo(a);
            break;

        case 7:
            std::cout << "Informe o número para calcular o logaritmo na base 10: " << std::endl;
            std::cin >> a;
            LogaritmoBase10(a);
            break;
    }

    return 0;
}

// Definições de funções
void Potencia(float x, float y) {
    float p;
    p = pow(x, y);
    std::cout << "Potência: " << p;
}

void Seno(float x) {
    float s;
    s = sin(x);
    std::cout << "Seno: " << s;
}

void Quadrado(float x) {
    float sq;
    sq = sqrt(x);
    std::cout << "Raiz Quadrada do Valor Informado: " << sq;
}

void Cosseno(float x) {
    float c;
    c = cos(x);
    std::cout << "Cosseno: " << c;
}

void Tangente(float x) {
    float t;
    t = tan(x);
    std::cout << "Tangente: " << t;
}

void Logaritmo(float x) {
    float l;
    l = log(x);
    std::cout << "Logaritmo Natural: " << l;
}

void LogaritmoBase10(float x) {
    float bl;
    bl = log10(x);
    std::cout << "Logaritmo na Base 10: " << bl;
}
