#include <iostream>
#include <cmath>
#include "complex_number.hpp"

using namespace std;

int esempio_float(void) {
	using comp = complex_number<float>;
	
	cout << "Esempio per T = float." << endl;
	cout << "--------------------------------------" << endl;
	
	/*Test costruttore di default.
	comp z0;
	cout << "z0 = " << z0 << endl;
	Test costruttore user-defined per quando viene passato un solo valore.
	comp z1(4.0);
	cout << "z1 = " << z1 << endl;
	*/
	
	//Test costruttore user-defined.
	comp z2(2.0e1,3.0);
	comp z3(1.0,-4.0);
	//Test overload dell'operatore <<.
	cout << "z2 e z3 sono numeri complessi:" << endl;
	cout << "z2 = " << z2 << " ," << endl;
	cout << "z3 = " << z3 << " ." << endl;
	
	/*Test dei metodi .real() e .imag() che restituiscono ripettivamente 
	la parte reale e la parte immaginaria dell'istanza a cui sono applicati.*/
	cout << "La parte reale di z2 è : " << z2.real() << " ." << endl;
	cout << "La parte immaginaria di z2 è : " << z2.imag() << " ." << endl;
	/*Test di .complex_conjugate() che restituisce il coniugato dell'istanza.*/
	cout << "Il coniugato di z2 è : " << z2.complex_conjugate() << " ." << endl;
	
	//Somma di complex_number<T>. Test overload dell'operatore +. (Include implicitamente il test dell'overload dell'operatore +=.)
	cout << "La somma di z2 e z3 è :\tz2+z3 = " << z2+z3 << " ." << endl;
	//Prodotto di complex_number<T>. Test overload dell'operatore *. (Include include implicitamente test dell'overload dell'operatore *=.)
	cout << "Il prodotto di z2 e z3 è :\tz2*z3 = " << z2*z3 << " ." << endl;
	
	float x = 2.0;
	cout << "x = " << x << " è un numero floating point." << endl;
	//Somma di un complex_number<T> e di un T. Test overload dell'operatore +=.
	cout << "La somma di z2 e x è :\tz2+x = " << z2+x << " ." << endl;
	//Check proprietà commutativa.
	cout << "La somma di x e z2 è :\tx+z2 = " << x+z2 << " ." << endl;
	//Prodotto di un complex_number<T> e di un T. Test overload dell'operatore *=.
	cout << "Il prodotto di z2 e x è :\tz2*x = " << z2*x << " ." << endl;
	//Check proprietà commutativa.
	cout << "Il prodotto di x e z2 è :\tx*z2 = " << x*z2 << " ." << endl;

	return 0;
}

int esempio_double(void) {
	using compd = complex_number<double>;
	
	cout << "Esempio per T = doble." << endl;
	cout << "--------------------------------------" << endl;
	
	/*Test costruttore di default.
	compd z0;
	cout << "z0 = " << z0 << endl;
	Test costruttore user-defined per quando viene passato un solo valore.
	compd z1(4.0);
	cout << "z1 = " << z1 << endl;
	*/
	
	//Test costruttore user-defined.
	compd z2(2.0e1,3.0);
	compd z3(1.0,-4.0);
	//Test overload dell'operatore <<.
	cout << "z2 e z3 sono numeri complessi:" << endl;
	cout << "z2 = " << z2 << " ," << endl;
	cout << "z3 = " << z3 << " ." << endl;
	
	/*Test dei metodi .real() e .imag() che restituiscono ripettivamente 
	la parte reale e la parte immaginaria dell'istanza a cui sono applicati.*/
	cout << "La parte reale di z2 è : " << z2.real() << " ." << endl;
	cout << "La parte immaginaria di z2 è : " << z2.imag() << " ." << endl;
	/*Test di .complex_conjugate() che restituisce il coniugato dell'istanza.*/
	cout << "Il coniugato di z2 è : " << z2.complex_conjugate() << " ." << endl;
	
	//Somma di complex_number<T>. Test overload dell'operatore +. (Include implicitamente il test dell'overload dell'operatore +=.)
	cout << "La somma di z2 e z3 è :\tz2+z3 = " << z2+z3 << " ." << endl;
	//Prodotto di complex_number<T>. Test overload dell'operatore *. (Include include implicitamente test dell'overload dell'operatore *=.)
	cout << "Il prodotto di z2 e z3 è :\tz2*z3 = " << z2*z3 << " ." << endl;
	
	double x = 2.0;
	cout << "x = " << x << " è un numero floating point." << endl;
	//Somma di un complex_number<T> e di un T. Test overload dell'operatore +=.
	cout << "La somma di z2 e x è :\tz2+x = " << z2+x << " ." << endl;
	//Check proprietà commutativa.
	cout << "La somma di x e z2 è :\tx+z2 = " << x+z2 << " ." << endl;
	//Prodotto di un complex_number<T> e di un T. Test overload dell'operatore *=.
	cout << "Il prodotto di z2 e x è :\tz2*x = " << z2*x << " ." << endl;
	//Check proprietà commutativa.
	cout << "Il prodotto di x e z2 è :\tx*z2 = " << x*z2 << " ." << endl;

	return 0;
}

int main(void) {
	
	esempio_float();
	
	cout << "\n";
	
	esempio_double();
	
	return 0;
}