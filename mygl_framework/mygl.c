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


void drawnLine(struct coordenada ponto1, struct coordenada ponto2, struct cores cor){
	int dx = ponto2.y - ponto1.y;
	int dy = ponto2.x - ponto1.x;
	int d = 2 * dy - dx;
	int incrE = 2 * dy;
	int incrNE = 2 * (dy - dx);
	struct coordenada pixelCoord;
	pixelCoord.y = ponto1.y;
	pixelCoord.x = ponto1.x;
	putPixel(pixelCoord, cor);
	while (pixelCoord.y < ponto2.y) {
		if (d <= 0) {
			d += incrE;
			pixelCoord.y += 1;
		} else {
			d += incrNE;
			pixelCoord.y += 1;
			pixelCoord.x += 1;

		}
		putPixel(pixelCoord, cor);
	}
	
}


// Definição da função que chamará as funções implementadas pelo aluno
void MyGlDraw(void) {
    //
    // >>> Chame aqui as funções que você implementou <<<
    //
    struct coordenada ponto1;
    ponto1.x = 200;
    ponto1.y = 40;

    /*
    struct coordenada ponto2;
    ponto2.x = 300;
    ponto2.y = 20;

    struct coordenada ponto3;
    ponto2.x = 100;
    ponto2.y = 100;
	*/
    struct cores cor;
    cor.red = 255;
    cor.green = 255;
    cor.blue = 0;
    cor.alpha = 255;

    putPixel(ponto1, cor);
    //drawnLine(ponto2, ponto3, cor);

}
