#pragma once

/*Definisco una classe template che modella i numeri complessi,
z = a+ib con a=Re(z) e b=Im(z).*/
template<typename T> requires std::floating_point<T>
class complex_number {
	T z_re; //parte reale
	T z_im; //parte immaginaria
public:
	//Costruttore di default: inizializza a = 0 e b = 0 (cioè z = 0).
	complex_number() 
	: z_re(0), z_im(0)
	{}
	
	//costruttore user-defined che inizializza parte reale e parte immaginaria
	complex_number(T a, T b)
	: z_re(a), z_im(b)
	{}
//se prende solo un parametro??
	//coniugato
	
	//parte reale
	
	//parte immaginaria
	
	//overload dell'operatore << per la stampa di un numero complesso
	
	//overload operatore +=
	//overload operatore +
	//se complex_number<T> e T???
	//overload operatore *=
	//overload operatore *
	//se complex_number<T> e T???
	
};