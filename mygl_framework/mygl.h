#ifndef MYGL_H
#define MYGL_H

#include "core.h"
#include "frame_buffer.h"


struct coordenada {
	int x;
	int y;
};

struct cores {
	int red;
	int green;
	int blue;
	int alpha;
};

// Declaração da função que chamará as funções implementadas pelo aluno
void MyGlDraw(void);

//
// >>> Declare aqui as funções que você implementar <<<
//
void putPixel(struct coordenada ponto1, struct cores cor);

void drawnLine(struct coordenada ponto1, struct coordenada ponto2, struct cores cor);

#endif  // MYGL_H
