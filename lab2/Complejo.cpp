
#include "Complejo.h"
#include <iostream>
#include <math.h>


using namespace std;
/**
 * Complejo implementation
 */

/** Constructor por omisión
 */
Complejo::Complejo() {
    _real = 0.;
	_imag = 0.;
}

/* Constructor con parámetros
 */
Complejo::Complejo(float r, float i){
    _real = r;
	_imag = i;
}

Complejo::~Complejo(){
	cout << "Llamada al destructor!" << endl;
}

float Complejo::norma() {
    return sqrt( _real * _real + _imag * _imag );
}

float Complejo::angulo() {
    return atan2( _imag, _real );
}

Complejo Complejo::operator +(Complejo& a){
    Complejo c;
    c._real = _real + a._real;
    c._imag = _imag + a._imag;
    //cout << "Usando el operador de suma sobrecargado para complejos" << endl;
    return c;
}

Complejo Complejo::operator -(Complejo& a){
	Complejo c;
	c._real = _real - a._real;
    c._imag = _imag - a._imag;
	return c;
}

bool Complejo::operator <(Complejo& a){
    return this->angulo() < a.angulo();
}

bool Complejo::operator ==(Complejo& a){
    return (this->_real == a._real) && (this->_imag == a._imag);

}

