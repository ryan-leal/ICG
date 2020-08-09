#include "mygl.h"

//
// >>> Defina aqui as funções que você implementar <<< 
//

int abs (int i) {
	if (i < 0) {
		i *= -1;
	}

	return i;
}

//Função que recebe duas variáveis struct do tipo coordenada e a cor do vértice a ser plotado.
void putPixel(struct ponto ponto1) {
	fb_ptr[ponto1.y * 4 + IMAGE_WIDTH * 4 * ponto1.x] = ponto1.cor.red;
	fb_ptr[ponto1.y * 4 + IMAGE_WIDTH * 4 * ponto1.x + 1] = ponto1.cor.green;
	fb_ptr[ponto1.y * 4 + IMAGE_WIDTH * 4 * ponto1.x + 2] = ponto1.cor.blue;
	fb_ptr[ponto1.y * 4 + IMAGE_WIDTH * 4 * ponto1.x + 3] = ponto1.cor.alpha;
}

//Função para printa linhas 
void drawnLineLow (struct ponto ponto1, struct ponto ponto2){
	int dx = ponto2.x - ponto1.x;
	int dy = ponto2.y - ponto1.y;
	int yi = 1;

	float dr = (ponto2.cor.red - ponto1.cor.red)/dx;
    float dg = (ponto2.cor.green - ponto1.cor.green)/dx;
    float db = (ponto2.cor.blue - ponto1.cor.blue)/dx;
	
	if (dy < 0) {
		yi = -1;
		dy = -dy;
	}

	int D = 2*dy - dx;


	for (int i= ponto1.x; i <= ponto2.x; i++) {

		ponto1.x = i;

		ponto1.cor.red +=dr;
        ponto1.cor.green += dg;
        ponto1.cor.blue += db;

        putPixel(ponto1);


		if (D > 0) {
			ponto1.y += yi;
			D -= 2*dx; 
		}

		D += 2*dy;
	}	
}

void drawnLineHigh (struct ponto ponto1, struct ponto ponto2) {
	int dx = ponto2.x - ponto1.x;
	int dy = ponto2.y - ponto1.y;
	int xi = 1;

	float dr = (ponto2.cor.red - ponto1.cor.red)/dy;
    float dg = (ponto2.cor.green - ponto1.cor.green)/dy;
    float db = (ponto2.cor.blue - ponto1.cor.blue)/dy;
	

	if (dx < 0) {
		xi = -1;
		dx = -dx;
	}
	int D = 2*dx - dy;

	for (int i = ponto1.y; i <= ponto2.y; i++){

		ponto1.y = i;

		ponto1.cor.red += dr;
        ponto1.cor.green += dg;
        ponto1.cor.blue += db;

        putPixel(ponto1);

		if (D > 0) {
			ponto1.x += xi;
			D -= 2*dy;
		}

		D += 2*dx;
	}
}

void drawnLine (struct ponto ponto1, struct ponto ponto2){
	if (abs(ponto2.y - ponto1.y) < abs(ponto2.x - ponto1.x)) {
		if (ponto1.x > ponto2.x)
		{
			drawnLineLow(ponto2, ponto1);
		} else {
			drawnLineLow(ponto1, ponto2);
		}
	} else {
		if (ponto1.y > ponto2.y) {
			drawnLineHigh(ponto2, ponto1);
		} else {
			drawnLineHigh(ponto1, ponto2);
		}
	}
}

void drawnTriangles (struct ponto ponto1, struct ponto ponto2, struct ponto ponto3) {
	drawnLine(ponto1, ponto2);
	drawnLine(ponto2, ponto3);
	drawnLine(ponto3, ponto1);
}
// Definição da função que chamará as funções implementadas pelo aluno
void MyGlDraw(void) {
    //
    // >>> Chame aqui as funções que você implementou <<<
    //

    //exemplo de ponto para testar a função putPixel()
    struct ponto ponto1;
    struct ponto ponto2;
    struct ponto ponto3;
    struct ponto ponto4;
    struct ponto ponto5;
    struct ponto ponto6;
    struct ponto ponto7;
    struct ponto ponto8;
    struct ponto ponto9;
    
    ponto1.x = 300;
    ponto1.y = 150;

    ponto2.x = 500;
    ponto2.y = 70;

    ponto3.x = 500;
    ponto3.y = 230;

    ponto4.x = 300;
    ponto4.y = 310;

    ponto5.x = 500;
    ponto5.y = 230;

    ponto6.x = 500;
    ponto6.y = 390;

    ponto7.x = 100;
    ponto7.y = 230;

    ponto8.x = 300;
    ponto8.y = 310;

    ponto9.x = 300;
    ponto9.y = 150;

	//Variável do tipo struct cores para armazenar as cores dos vértices
    ponto1.cor.red = 0;
    ponto1.cor.green = 255;
    ponto1.cor.blue = 0;
    ponto1.cor.alpha = 255;

    ponto2.cor.red = 0;
    ponto2.cor.green = 0;
    ponto2.cor.blue = 255;
    ponto2.cor.alpha = 255;

    ponto3.cor.red = 255;
    ponto3.cor.green = 0;
    ponto3.cor.blue = 0;
    ponto3.cor.alpha = 255;

    ponto4.cor.red = 255;
    ponto4.cor.green = 0;
    ponto4.cor.blue = 255;
    ponto4.cor.alpha = 255;

    ponto5.cor.red = 255;
    ponto5.cor.green = 255;
    ponto5.cor.blue = 0;
    ponto5.cor.alpha = 255;

    ponto6.cor.red = 0;
    ponto6.cor.green = 255;
    ponto6.cor.blue = 255;
    ponto6.cor.alpha = 255;

    ponto7.cor.red = 0;
    ponto7.cor.green = 255;
    ponto7.cor.blue = 0;
    ponto7.cor.alpha = 255;

    ponto8.cor.red = 0;
    ponto8.cor.green = 0;
    ponto8.cor.blue = 255;
    ponto8.cor.alpha = 255;

    ponto9.cor.red = 255;
    ponto9.cor.green = 0;
    ponto9.cor.blue = 0;
    ponto9.cor.alpha = 255;

    //Teste da Função putPixel();
    //putPixel(ponto6);
    //drawnLine(ponto4, ponto5);
    drawnTriangles(ponto1, ponto2, ponto3);
    drawnTriangles(ponto4, ponto5, ponto6);
    drawnTriangles(ponto7, ponto8, ponto9);

    

}
