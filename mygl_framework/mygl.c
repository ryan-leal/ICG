#include "mygl.h"

//
// >>> Defina aqui as funções que você implementar <<< 
//

//Função que recebe duas variáveis struct do tipo coordenada e a cor do vértice a ser plotado.
void putPixel(struct coordenada ponto1, struct cores cor) {
	fb_ptr[ponto1.y * 4 + IMAGE_WIDTH * 4 * ponto1.x] = cor.red;
	fb_ptr[ponto1.y * 4 + IMAGE_WIDTH * 4 * ponto1.x + 1] = cor.green;
	fb_ptr[ponto1.y * 4 + IMAGE_WIDTH * 4 * ponto1.x + 2] = cor.blue;
	fb_ptr[ponto1.y * 4 + IMAGE_WIDTH * 4 * ponto1.x + 3] = cor.alpha;
}

//Função não totalmente implementada que plotaria uma linha entre dois vértices de cor igual a passada por parâmetro
void drawnLine(struct coordenada ponto1, struct coordenada ponto2, struct cores cor){
	int dx = ponto2.x - ponto1.x;
	int dy = ponto2.y - ponto1.y;
	int d = 2 * dy - dx;
	int incrE = 2 * dy;
	int incrNE = 2 * (dy - dx);

	struct coordenada pixelCoord;//Coordenadas do vértice que representa cada pixel a ser plotado da linha
	
	//Inicialmente recebe o valor de x e y do primeiro pixel da linha
	pixelCoord.x = ponto1.x;
	pixelCoord.y = ponto1.y;

	putPixel(pixelCoord, cor);//plotaria o primeiro pixel da linha

	//Enquanto os pixels que serão plotados da linha não for igual ao último ponto
	while (pixelCoord.x < ponto2.x) {
		//analisa se o próximo pixel a ser plotado é o "mais abaixo" ou "mais acima"
		if (d <= 0) {
			d += incrE;
			pixelCoord.x += 1;
		} else {
			d += incrNE;
			pixelCoord.x += 1;
			pixelCoord.y += 1;

		}

		putPixel(pixelCoord, cor);//Plotaria cada pixel da linha, em cada entrada no loop.
	}//Final do Looping
	
}


// Definição da função que chamará as funções implementadas pelo aluno
void MyGlDraw(void) {
    //
    // >>> Chame aqui as funções que você implementou <<<
    //

    //exemplo de ponto para testar a função putPixel()
    struct coordenada ponto1;
    ponto1.x = 200;
    ponto1.y = 40;

    /*
    Testes para o drawnline()
    struct coordenada ponto2;
    ponto2.x = 300;
    ponto2.y = 20;

    struct coordenada ponto3;
    ponto2.x = 100;
    ponto2.y = 100;
	*/

	//Variável do tipo struct cores para armazenar as cores dos vértices
    struct cores cor;
    cor.red = 255;
    cor.green = 255;
    cor.blue = 0;
    cor.alpha = 255;

    //Teste da Função putPixel();
    putPixel(ponto1, cor);

    
    //drawnLine(ponto2, ponto3, cor);

}
