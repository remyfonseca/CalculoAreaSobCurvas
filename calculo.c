// Inclusão de bibliotecas para entrada/saída de dados e matemática:
#include <stdio.h>
#include <math.h>

// Definindo as variáveis globais:
double a, b, n, resultado;

// Função para executar a função do problema:
double funcao(double x) {
    return pow(x, 3) + 2 * pow(x, 2) + 3 * x - 4;
}

// Função para calcular o intervalo de Δx:
double delta() {
    double dx = (b - a) / n;
    printf("\nΔx = %.1lf;\n--------------\n", dx);
    return dx;
}

// Função para calcular a área do Retângulo:
double retangulo() {
    resultado = 0;
    double base = delta();
    for (int i = 1; i <= n; i++) {
        double sol = base * funcao(a + (i - 1) * base);
        printf("S%d = %.5lf;\n", i, sol);
        resultado += sol;
    }
    return resultado;
}

// Função para calcular a área do Triângulo Retângulo:
double trianguloR() {
    resultado = 0;
    double base = delta();
    for (int i = 1; i <= n; i++) {
        double sol = base * funcao(a + (i - 1) * base) + (base * (funcao(a + i * base) - funcao(a + (i - 1) * base)) / 2);
        printf("S%d = %.5lf;\n", i, sol);
        resultado += sol;
    }
    return resultado;
}

// Função para calcular a área da Semi Circunferência:
double semiC() {
    resultado = 0;
    double base = delta();
    for (int i = 1; i <= n; i++) {
        double sol = base * funcao(a + (i - 1) * base) + (M_PI * pow(base, 2) / 8);
        printf("S%d = %.5lf;\n", i, sol);
        resultado += sol;
    }
    return resultado;
}

// Função principal do programa:
int main() {
   printf("\n","-------------------------------");
   printf("\n", "Cálculo da Área Sob Curvas:");
   printf("\n","-------------------------------");
  
    printf("\nDigite o valor de A: ");
    scanf("%lf", &a);

    printf("Digite o valor de B: ");
    scanf("%lf", &b);

    do {
        printf("Digite o valor de N: ");
        scanf("%lf", &n);
        if (n <= 0) {
            printf("O valor de N precisa ser maior que zero. Tente novamente.\n");
        }
    } while (n <= 0);

    int metodo;
    
    printf("\nEscolha o método a ser utilizado:\n");
    printf("1 - Retângulo\n");
    printf("2 - Triângulo Retângulo\n");
    printf("3 - Semi Circunferência\n\n");
    printf("Metódo escolhido: ");
    scanf("%d", &metodo);

    switch (metodo) {
        case 1:
            printf("\nMetódo Retângulo: \n");
             retangulo();
            break;
        case 2:
            printf("\nMetódo Triângulo Retângulo: \n");
            trianguloR();
            break;
        case 3:
            printf("\nMetódo Semi Circunferência: \n");
            semiC();
            break;
        default:
            printf("Método inválido, insira um valor válido!!\n");
            return 1;
    }

    printf("--------------\nSomatório final: %.2lf", resultado);
    return 0;
}