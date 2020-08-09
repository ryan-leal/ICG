#ifndef MYGL_H
#define MYGL_H

#include "core.h"
#include "frame_buffer.h"

//Struct para variáveis de cores (RGBA).
struct cores {
	float red;
	float green;
	float blue;
	float alpha;
};

//Struct para coordenadas X e Y de cada vértice.
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
int abs (int i);

void putPixel(struct ponto ponto1);

void drawnLineLow (struct ponto ponto1, struct ponto ponto2);

void drawnLineHigh (struct ponto ponto1, struct ponto ponto2);

void drawnLine (struct ponto ponto1, struct ponto ponto2);

void drawnTriangles (struct ponto ponto1, struct ponto ponto2, struct ponto ponto3);


#endif  // MYGL_H
