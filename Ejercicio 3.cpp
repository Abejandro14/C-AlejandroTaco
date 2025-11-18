#include <iostream>
using namespace std;

float calcularDescuento(float precio, float porcentaje){
	return precio * porcentaje;
}

float calcularTotalPagar(float precio, float desc1, float desc2){
	
	float descuento1 = calcularDescuento(precio, desc1);
	float descuento2 = calcularDescuento(precio, desc2);
	
	float total = precio - descuento1 - descuento2;
	
	return total;
}

int main(){
	float precio, d1, d2, desc1, desc2;
	cout << "Ingrese el precio del producto: ";
	cin >> precio;
	cout << "Ingrese el porcentaje 1 de descuento: ";
	cin >> d1;
	desc1 = d1 / 100;
	cout << "Ingrese el porcentaje 2 de descuento: ";
	cin >> d2;
	
	desc2 = d2 / 100;
	
	float total = calcularTotalPagar(precio, desc1, desc2);
	cout << "El total a cancelar es: " << total << endl;
	
	return 0;
}
