#include "Bird.h"

#define STEP_ROTACION 10
#define MAXIMO_DESPLAZAMIENTO 10
#define PI 3.1416

#define WIN_WIDTH  640
#define WIN_HEIGHT  640
#define PADDING_X  30
#define PADDING_Y  30

#define MAX_X WIN_WIDTH - PADDING_X // limite derecho hasta donde un ave puede llegar horizontalmente
#define MAX_Y WIN_HEIGHT - PADDING_Y // limite superior hasta donde un ave puede llegar verticalmente
#define MIN_X PADDING_X
#define MIN_Y PADDING_Y

Bird::Bird(int x, int y, double direccion){
	this->x = x;
	this->y = y;
	this->direccion = direccion;
}

void Bird::main(){
	int avance_x = 1;
	int avance_y = 1;

	while(true){
		//avance_x = rand() % MAXIMO_DESPLAZAMIENTO - MAXIMO_DESPLAZAMIENTO / 2;
		//avance_y = rand() % MAXIMO_DESPLAZAMIENTO - MAXIMO_DESPLAZAMIENTO / 2;
		avance_x = 1;
		avance_y = 1;

		int x_anterior = x;
		int y_anterior = y;

		if(this->x + avance_x >= MAX_X){
			this->x = MIN_X;
		}
		this->x += avance_x;

		if(this->y + avance_y >= MAX_Y){
			this->y = MIN_Y;
		}
		this->y += avance_y;

		direccion = -atan2(destino_x - x, destino_y - y) * 180 / PI;
		
		//printf("(%d, %d) %f\n", x, y, direccion);
		unsigned miliseconds = 20;
		usleep(miliseconds * 1000000);
	}
}

void Bird::Mover(double sumar_x, double sumar_y){
	this->x += sumar_x;
	this->y += sumar_y;
}

void Bird::Rotar(float angulo){
	this->direccion = angulo;
}

/*void Bird::Draw(){
	double rotate_x = 1.0f;
	double rotate_y = 1.0f;

	glTranslatef(x, y, 0.0f);
	glRotatef(direccion, 0, 0, 1);
    glBegin(GL_TRIANGLES);
		glVertex3f(-0.5, -15, 0);//triangle one first vertex
      	glVertex3f( 0.5, -15, 0);//triangle one second vertex
      	glVertex3f( 0,  -13.1, 0);//triangle one third vertex    
    glEnd();
	glRotatef(-direccion, 0, 0, 1);
	glTranslatef(-x, -y, 0.0f);
}*/

void Bird::Separation(){
/*	vector<double> r[2];
	for(unsigned i=0 ; i<numBirs ; i++){
		D = maths.distEuclideana(p, birds[i].p)
		if(D > Dmax){
			r.push = 0;
		} else {
			r[X] = ()
		}
	}*/
}

void Bird::Cohesion(){

}

void Bird::Alignmet(){

}

void Bird::updatePosition(){

}
