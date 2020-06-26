# Repository made for activities of the discipline of introduction to computer graphics of the group formed by: Matheus Dantas and Ryan Leal, Students of the Computer Science course at the Federal University of Paraíba.

Repositório feito para atividades da disciplina de introdução à computação gráfica do grupo formado por: Matheus Dantas e Ryan Leal, Alunos do curso de Ciência da Computação na Universidade Federal da Paraíba.

## Atividade 1: Algoritmos de rasterização
### Sobre a Atividade

Como forma de nos familiarizar com os algoritmos de rasterização, nós deveríamos implementar um algoritmo capaz de rasterizar pontos, linhas e triângulos. Utilizando um framework, fornecido pelo professor, para simular o acesso direto à memória de vídeo.

### Estratégias adotadas

Durante a resolução, desenvolvemos duas funções: drawnLine() e putPixel(), respectivamente para plotar linhas e pontos. Sendo utilizado a estrutura Struct para facilitar o armazenamento das coordenadas dos vértices e dos valores de RGBA.

### Resultados, dificuldades e melhorias.

Enfrentamos dificuldades desde o começo quanto a instalação das ferramentas necessárias e que fossem compatíveis com nossos sistemas operacionais, nos gerando atrasos consideráveis em relação ao prazo, feitas as configurações iniciais, lidamos ligeiramente bem com a programação com a linguagem C, resolvendo a função putPixel facilmente como mostrado na screenshot:

![screenshot results](/Images/putPixel.png)

Porém, com a função de rasterizar linhas as dificuldades foram maiores e acabamos por não obter o resultado necessário dentro do prazo e consequentemente influindo na função de rasterização de triângulos.
Mesmo diante das adversidades citadas, a atividade nos proporcionou um sentimento de aprendizado maior, colocando "a mão na massa" e tentando implementar os algoritmos que normalmente só são vistos conceitualmente, então como melhoria, acho que fica a lição de preparar melhor o ambiente e elaborar mais testes e melhorias no código.

### Referências
  James D. Foley, Andries van Dam, Steven K. Feiner, and John F. Hughes. 1990. Computer graphics: principles and practice (2nd ed.). Addison-Wesley Longman Publishing Co., Inc., USA.
  
