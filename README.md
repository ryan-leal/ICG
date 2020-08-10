# Repository made for activities of the discipline of introduction to computer graphics, developed by Ryan Leal, student of the computer science course at the Federal University of Paraíba.

Repositório feito para atividades da disciplina de introdução à computação gráfica, desenvolvidas por Ryan Leal, aluno do curso de ciência da computação na Universidade Federal da Paraíba.

## Atividade 1: Algoritmos de rasterização
### Sobre a Atividade

Como forma de familiarizar com os algoritmos de rasterização, devería-se implementar um algoritmo capaz de rasterizar pontos, linhas (Algoritmo de Bresenham) e triângulos. Utilizando um framework, fornecido pelo professor, para simular o acesso direto à memória de vídeo.

### Estratégias adotadas

Durante a atividade desenvolvi 6 funções: abs (retorna o valor absoluto), putPixel (rasteriza um ponto), drawnLineLow (rasteriza linhas no octante inferior), drawnLineHigh (rasteriza linhas no octante superior), drawnLine (decide qual será a função de rasterização de linhas usada) e drawnTriangles (rateriza triângulos), Além disso, foi utilizado a estrutura struct para armazena informações de cor e de coordenadas de cada ponto.

### Resultados, dificuldades e melhorias

#### Exercício 1: Rasterização de pontos

A primeira função criada foi a putPixel, usando o ponteiro que simula o acesso a memória de vídeo e informações de cor e coordenada de um ponto, consegui obter o seguinte resultado (nesse caso, um ponto amarelo):

![screenshot results](/Images/putPixel.png)

#### Exercício 2: Rasterização de linhas

Após concluída a putPixel, comecei a implementar a função de rasterização de linhas usando o algoritmo de Bresenham e no meio desse caminho, a função abs, com isso implementei uma função para rasterizar linhas para o octante superior e inferior e uma para a partir dos valores de X e Y dos dois pontos, decidir qual seria a função de rasterização utilizada, além de implementar a interpolação das cores dos vértices, obtive então como resultado:

![screenshot results 2](/Images/Ex02_Atv1.png)

#### Exercício 3: Rasterização de triângulos

Concluída a função anterior, facilmente, foi possível desenvolver a rasterização de triângulos com interpolação de cores nas linhas, usando a função drawnLine do ponto 1 para o ponto 2, do ponto 2 para o ponto 3 e do ponto 3 para o ponto 1. Então obtive o seguinte resultado (sim, é uma referência a triforce de Zelda):

![screenshot results 2](/Images/Ex03_Atv01.png)

Sendo assim, apesar de diversos problemas obtidos durante o desenvolvimento, especialmente da drawnLine, foi uma experiência gratificante após tantos erros conseguir ver o resultado aparecendo na tela e como um grande mestre uma vez disse: "Melhor professor, o fracasso é", sendo assim nessa atividade consegui sentir o significado dessas palavras.

### Referências
  James D. Foley, Andries van Dam, Steven K. Feiner, and John F. Hughes. 1990. Computer graphics: principles and practice (2nd ed.). Addison-Wesley Longman Publishing Co., Inc., USA.
  Slides disponiblizados pelo professor.
  
## Atividade 2: Compilando e executando um programa OpenGL moderno
### Sobre a Atividade

Com o objetivo de examinar o funcionamento do ambiente OpenGL e nos familiarizar com a estrutura de um programa usando OpenGL moderno, é proposto a compilação e execução de um programa usando OpenGL Moderno.

### Estratégias adotadas

Com a instalação dos pacotes do FreeGLUT e do OpenGL, usou-se o comando: "make -f Makefile" (Imagem abaixo) e logo após, executou-se o arquivo gerado pelo Makefile.

![executando makefile](/Images/makeFile.png)

### Resultados, dificuldades e melhorias

Após a execução do Makefile, geraram-se alguns warnings, mas como explicado no documento do projeto, é algo normal e esperado.

![Warnings](/Images/warnings.png)

Por fim, Executando o arquivo gerado pelo Makefile, obteve-se o resultado esperado (Figura abaixo).

![Resultados](/Images/helloGL.png)

Após a primeira atividade, não foi difícil concluir a segunda, já sabendo a base de um programa usando OpenGL e Makefile.

Link para o Vídeo com a execução do programa no ambiente: https://www.youtube.com/watch?v=2cnoUGwQuho

## Atividade 3: Implementação do Pipeline Gráfico
### Sobre a Atividade

Com o objetivo de praticar os conceitos vistos em aulas sobre o pipeline gráfico, é proposto a resolução de alguns exercícios.

### Estratégias adotadas

Modificando as matrizes presentes no arquivo disponibilizado pelo professor, utilizando cálculos manuais usando matrizes e vetores e com auxílio da biblioteca GLEW e GLM.

### Resultados, dificuldades e melhorias

#### Exercício 1: Escala

Modificando a matriz Model, gerar a modificação de escala como solicitado no exercício, consegui o seguinte resultado:

![Exercício 1](/Images/Ex1_T3.png)

#### Exercício 2: Translação

Modificando a matriz Model, gerar a translação como solicitado no exercício, consegui o seguinte resultado:

![Exercício 2](/Images/Ex2_T3.png)

#### Exercício 3: Projeção Perspectiva

Modificando a matriz Projection, gerar a modificação da perspetiva como solicitado no exercício, consegui o seguinte resultado:

![Exercício 3](/Images/Ex3_T3.png)

#### Exercício 4: Posição da Câmera

Modificando a matriz View e utilizando cálculos manuais para a formulação das matrizes que criam o espaço da câmera e a Matriz View, utilizando como base os slides utilizados em aula e os parâmetros presentes no arquivo do trabalho, consegui obter os seguintes resultados:

![Exercício 4](/Images/Ex4_T3.png)

#### Exercício 5: Transformações livres

Aproveitando a liberdade concedida pelo professor, resolvi modificar a matriz View e obtive o seguinte resultado:

![Exercício 5](/Images/Ex5_T3.png)

Tenho em mente que atividade foi muito produtiva, visto que consegui "colocar a mão na massa" e obter resultados interessantes, quando obtive problemas, modificar as matrizes foi uma forma de entender melhor o funcionamento das matrizes que formam o pipeline gráfico, além dos cálculos manuais que gerou uma ótima sensação ao pensar que com os números que eu estava calculando, iriam gerar o resultado que eu almejava, enfim, as experiências com o OpenGL e o pipeline gráfico me renderam ótimos conhecimentos.

### Referências

Slides disponibilizados pelo Professor.

## Atividade 4: Implementação de modelos de iluminação
### Sobre a Atividade

Como forma de familiarizar com os modelos de iluminação tradicionalmente utilizados na rasterização: ambiente, difuso e especular (ou Phong), nos é atribuída a tarefa de implementá-los utilizando o Vertex Shader do OpenGL. 

### Estratégias adotadas

Durante a atividade utilizei as funções dot (para calcular o produto interno dos vetores) e pow (para realizar a operação de potenciação), além da estrutura condicional if-else.

### Resultados, dificuldades e melhorias

#### Exercício 1: Implementação do modelo de Reflexão Difuso

Primeiramente, para calcular o vetor normal N e o vetor que aponta do vértice para a fonte de luz L, utilizei o código disponibilizado pelo professor e então implementei a fórmula para cálculo do modelo de iluminação, utilizando para isso a função dot, para calcular o produto interno dos vetores L e N, obtendo então a seguinte resultado:

![screenshot results](/Images/Ex1_Atv4.png)

#### Exercício 2: Implementação do modelo de Reflexão Especular

Semelhante ao anterior, utilizei a sugestão de código do professor para gerar os vetores R, de reflexão da luz e V, que aponta do vértice para a câmera, e então para implementar a fórmula para cálculo do modelo, utilizei novamente a funçaõ dot, para cálculo do produto interno dos vetores R e V / L e N, além da função pow para realizar a operação de potência no produto interno de R e V, nesse caso elevando a 64 (como solicitado pelo professor), além disso, foi utilizada a estrutura condicional if-else para resolver problemas com valores negativos do produto interno de R e V, para assim gerar o resultado esperado para a atividade, sendo assim, obtive o seguinte resultado:

![screenshot results 2](/Images/Ex02_Atv04.png)

Enfrentei alguns problemas durante o desenvolvimento da atividade, principalmente com o modelo especular, mas dedicando tempo e esforço foi possível encontrar soluções e obter bons resultados.

### Referências
  Slides disponiblizados pelo professor.
  https://www.khronos.org/registry/OpenGL-Refpages/gl4/html/pow.xhtml
  https://www.khronos.org/registry/OpenGL-Refpages/gl4/html/dot.xhtml
