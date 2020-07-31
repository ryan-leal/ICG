# Repository made for activities of the discipline of introduction to computer graphics, developed by Ryan Leal, student of the computer science course at the Federal University of Paraíba.

Repositório feito para atividades da disciplina de introdução à computação gráfica, desenvolvidas por Ryan Leal, aluno do curso de ciência da computação na Universidade Federal da Paraíba.

## Atividade 1: Algoritmos de rasterização
### Sobre a Atividade

Como forma de familiarizar com os algoritmos de rasterização, devería-se implementar um algoritmo capaz de rasterizar pontos, linhas e triângulos. Utilizando um framework, fornecido pelo professor, para simular o acesso direto à memória de vídeo.

### Estratégias adotadas

Durante a resolução, desenvolvi duas funções: drawnLine() e putPixel(), respectivamente para rasterizar linhas e pontos. Sendo utilizado a estrutura Struct para facilitar o armazenamento das coordenadas dos vértices e dos valores de RGBA.

### Resultados, dificuldades e melhorias

Enfrentei dificuldades desde o começo quanto a instalação das ferramentas necessárias e que fossem compatíveis com o sistema operacional, gerando atrasos consideráveis em relação ao prazo, feitas as configurações iniciais, lidamos ligeiramente bem com a programação com a linguagem C, resolvendo a função putPixel facilmente como mostrado na screenshot:

![screenshot results](/Images/putPixel.png)

Porém, com a função de rasterizar linhas as dificuldades foram maiores e acabamos por não obter o resultado necessário dentro do prazo e consequentemente influindo na função de rasterização de triângulos.
Mesmo diante das adversidades citadas, a atividade proporcionou um sentimento de aprendizado maior, colocando "a mão na massa" e tentando implementar os algoritmos que normalmente só são vistos conceitualmente, então como melhoria, acho que fica a lição de preparar melhor o ambiente e elaborar mais testes e melhorias no código.

### Referências
  James D. Foley, Andries van Dam, Steven K. Feiner, and John F. Hughes. 1990. Computer graphics: principles and practice (2nd ed.). Addison-Wesley Longman Publishing Co., Inc., USA.
  
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
