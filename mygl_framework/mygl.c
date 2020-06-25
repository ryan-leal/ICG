#include "mygl.h"

//
// >>> Defina aqui as funções que você implementar <<< 
//
void putPixel(struct coordenada ponto1, struct cores cor) {
	fb_ptr[ponto1.y * 4 + IMAGE_WIDTH * 4 * ponto1.x] = cor.red;
	fb_ptr[ponto1.y * 4 + IMAGE_WIDTH * 4 * ponto1.x + 1] = cor.green;
	fb_ptr[ponto1.y * 4 + IMAGE_WIDTH * 4 * ponto1.x + 2] = cor.blue;
	fb_ptr[ponto1.y * 4 + IMAGE_WIDTH * 4 * ponto1.x + 3] = cor.alpha;
}

/*
void drawnLine (int x0, int y0, int x1, int y1, int r, int g, int b, int a) {
	int dx = x1 - x0;
	int dy = y1 - y0;
	int d = 2 * dy - dx;
	int incE = 2 * dy;
	int incNE = 2 * (dy - dx);
	int x = x0;
	int y = y0;
	//Coloca o primeiro pixel
	putPixel(x, y, r, g, b, a);

	while(x < x1) {
		if (d <= 0) {
			d = d + incE;
			x = x + 1;
		} else {
			d = d + incNE;
			x = x + 1;
			y = y + 1;
		}
		putPixel(x, y, r, g, b, a);
	}
}
*/

// Definição da função que chamará as funções implementadas pelo aluno
void MyGlDraw(void) {
    //
    // >>> Chame aqui as funções que você implementou <<<
    //
    struct coordenada ponto1;
    ponto1.x = 200;
    ponto1.y = 40;
    struct cores cor;
    cor.red = 255;
    cor.green = 255;
    cor.blue = 0;
    cor.alpha = 255;
    putPixel(ponto1, cor);
   //drawnLine(500, 40, 50, 500, 255, 0, 0, 255);

}
