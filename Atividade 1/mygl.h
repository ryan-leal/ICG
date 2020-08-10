#ifndef MYGL_H
#define MYGL_H

#include "core.h"
#include "frame_buffer.h"

//Struct para cores.
struct cores {
	float red;
	float green;
	float blue;
	float alpha;
};

//Struct para coordenadas X e Y de cada vértice e sua cor.
struct ponto {
	int x;
	int y;
	struct cores cor;
};

// Declaração da função que chamará as funções implementadas pelo aluno
void MyGlDraw(void);

//
// >>> Declare aqui as funções que você implementar <<<
//

//Retorna o valor absoluto do número inteiro.
int abs (int i);

//Função que recebe uma variável struct do tipo ponto rasteriza um ponto usando suas informações
void putPixel(struct ponto ponto1);

//Função para rasterizar linhas nos octantes inferiores
void drawnLineLow (struct ponto ponto1, struct ponto ponto2);

//Função para rasterizar linhas nos octantes superiores
void drawnLineHigh (struct ponto ponto1, struct ponto ponto2);

//Função que analisa qual das duas funções de rasterização de linhas será usada
void drawnLine (struct ponto ponto1, struct ponto ponto2);

//Rasteriza triângulos, utilizando as funções de rasterização de linhas
void drawnTriangles (struct ponto ponto1, struct ponto ponto2, struct ponto ponto3);


#endif  // MYGL_H
