# Cálculo da Área sob Curvas 🧮

Este código implementa diferentes métodos numéricos para calcular a área sob uma curva definida pela função **função(x)** no intervalo **[a, b]**. Os métodos implementados são:

- *Método do Retângulo;*

- *Método do Triângulo Retângulo*;

- *Método da Semi Circunferência.*

## Teoria 🅰️➡️🅱️

O cálculo da área sob uma curva é um problema clássico da matemática. Ele consiste em determinar a área entre uma curva e o eixo x em um intervalo determinado. Esse problema tem diversas aplicações práticas, desde o cálculo de áreas de terrenos, até o cálculo de volumes em problemas físicos.

Existem diversas técnicas para o cálculo da área sob uma curva, desde métodos numéricos, como o utilizado neste código, até técnicas analíticas mais avançadas, como o cálculo de integrais definidas.

Esses métodos aproximam a área sob a curva dividindo-a em segmentos menores e aproximando a forma desses segmentos por retângulos, triângulos retângulos ou segmentos de semicircunferência, e então somando as áreas aproximadas desses segmentos para obter uma estimativa da área total. O número de segmentos utilizados é controlado pela variável n.

## Linguagem e Bibliotecas Utilizadas 🧑‍💻

O código foi realizado em **Linguagem C**:

- stdio.h: Biblioteca padrão de entrada e saída do C;

- math.h: Biblioteca que contém as funções matemáticas utilizadas no código.

## Como Utilizar 🔢

O código solicita ao usuário que informe os valores de a, b e n, que representam, respectivamente:
- O limite inferior do intervalo;
- O limite superior do intervalo;
- O número de divisões utilizados para aproximação da área. 

O usuário também deve escolher qual método deseja utilizar: retângulo, triângulo retângulo ou semicircunferência. Após a escolha do método, o código irá imprimir na tela a área aproximada da curva calculada pelo método escolhido.



## Método do Retângulo 📈 

O método do retângulo (B * H) aproxima a área sob a curva utilizando retângulos de largura constante. A altura de cada retângulo é determinada pelo valor da função no ponto médio do intervalo. A área total é obtida somando-se as áreas de todos os retângulos.



## Método do Triângulo Retângulo 📈 

O método do triângulo retângulo (B * H ) / 2 aproxima a área sob a curva utilizando trapézios de largura constante. A altura de cada trapézio é determinada pela média das alturas dos dois pontos extremos. A área total é obtida somando-se as áreas de todos os trapézios.


## Método da Semicircunferência 📈 

O método da semicircunferência (π R)² / 8 aproxima a área sob a curva utilizando uma semicircunferência de raio igual à largura do intervalo. A altura de cada segmento da semicircunferência é determinada pelo valor da função no ponto médio do intervalo. A área total é obtida somando-se as áreas de todos os segmentos da semicircunferência.

## Resultados📈
![Metódo Retângulo](/imgs/retangulo.jpeg)
![Metódo Triângulo Retângulo](/imgs/tretangulo.jpeg)
![Metódo Semi Circunferência](/imgs/semicirc.jpeg)

## Como Contribuir 🤝

Contribuições são bem-vindas! Caso encontre algum problema no código ou tenha sugestões de melhorias, sinta-se à vontade para abrir uma issue ou pull request.

##  Atualizações 🔄
- Adicionar novas formas geométricas;
- Adicionar o plano para visualização das curvas;
- Adicionar uma interface para melhor visualização.
