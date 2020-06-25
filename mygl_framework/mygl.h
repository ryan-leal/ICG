#ifndef MYGL_H
#define MYGL_H

#include "core.h"
#include "frame_buffer.h"


struct coordenada {
	int x;
	int y;
};

// Declaração da função que chamará as funções implementadas pelo aluno
void MyGlDraw(void);

//
// >>> Declare aqui as funções que você implementar <<<
//
void putPixel(struct coordenada ponto1, int r, int g, int b, int a);

//void drawnLine(int x0, int y0, int x1, int y1, int r, int g, int b, int a);

#endif  // MYGL_H
