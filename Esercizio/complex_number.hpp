#pragma once


/*Definisco una classe template che modella i numeri complessi,
z = a+ib con a=Re(z) e b=Im(z).*/
template<typename T> requires std::floating_point<T>
class complex_number {
	T re; //parte reale
	T im; //parte immaginaria
public:
	//Costruttore di default: inizializza a = 0 e b = 0 (cioè z = 0).
	complex_number() 
	: re(0), im(0)
	{}
	
	/*Costruttore user-defined per l'inizializzazione di parte reale e parte immaginaria,
	quando viene passato un solo parametro.*/
	explicit complex_number(T a) 
	: re(a), im(0)
	{}
	
	//Costruttore user-defined per l'inizializzazione di parte reale e parte immaginaria.
	complex_number(T a, T b)
	: re(a), im(b)
	{}

	//Coniugato
	complex_number complex_conjugate(void) const {
		return complex_number(re, -im);
	}
	
	//Parte reale
	T real(void) const {
		return re;
	}
	
	//Parte immaginaria
	T imag(void) const {
		return im;
	}
	
	/*Overload operatore += .
	Definizione dell'operatore += tra numeri complessi*/
	complex_number& operator+=(const complex_number& other) {
		T a = re;
		T b = im;
		T c = other.re;
		T d = other.im;
		re = a+c;
		im = b+d;
		return *this;
	}
	
	/*Overload operatore + . Definizione dell'operazione tra complessi.*/
	complex_number operator+(const complex_number& other) const {
		complex_number z = *this;
		z += other;
		return z;
	}
	
	/*Overload operatore +=. 
	Definizione dell'operazione tra un numero complesso e un numero floating point.*/
	complex_number& operator+=(const T& other) {
		re += other;
		return *this;
	}
	
	/*Overload operatore +. 
	Definizione dell'operazione tra un numero complesso e un numero floating point.*/
	complex_number operator+(const T& other) const {
		complex_number z = *this;
		z += other;
		return z;
	}

	/*Overload operatore *=. Definizione dell'operazione tra complessi.*/
	complex_number& operator*=(const complex_number& other) {
		T a = re;
		T b = im;
		T c = other.re;
		T d = other.im;
		re = a*c-d*b;
		im = b*c+a*d;
		return *this;
	}
	
	/*Overload operatore *. Definizione dell'operazione tra complessi.*/
	complex_number operator*(const complex_number& other) const {
		complex_number z = *this;
		z *= other;
		return z;
	}
	
	/*Overload operatore *=. 
	Definizione dell'operazione tra un numero complesso e un numero floating point.*/
	complex_number& operator*=(const T& other) {
		re = re*other;
		im = im*other;
		return *this;
	}

	/*Overload operatore *. 
	Definizione dell'operazione tra un numero complesso e un numero floating point.*/
	complex_number operator*(const T& other) const {
		complex_number z = *this;
		return z *= other;
	}
	
};

//Somma di un T e un complex_number<T>.
template<typename T>
complex_number<T>
operator+(const T& y, const complex_number<T>& z) {
	return z + y;
}

//Prodotto di un T e un complex_number<T>.
template<typename T>
complex_number<T>
operator*(const T& y, const complex_number<T>& z) {
	return z * y;
}

//Overload dell'operatore << per la stampa di un numero complesso.
template<typename T>
std::ostream&
operator<<(std::ostream& os, const complex_number<T>& z) {
	if ( z.imag() == 0 )
		os << z.real();
	else
		if ( z.imag() < 0 )
			os << z.real() << "-i" << abs(z.imag());
		else
			os << z.real() << "+i" << z.imag();
	
	return os;
}
