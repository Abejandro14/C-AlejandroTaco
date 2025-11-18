#include <iostream>
using namespace std;

void ingresarDatos(float precios[8]){
	for(int i=0; i<=7; i++){
		cout << "Ingrese el precio " << i + 1 << ": ";
		cin >> precios[i];
	}	
}

void encontarMayorMenor(float arreglo[], int tamanio, float &mayor, float &menor){
	mayor = arreglo[0];
	menor = arreglo[0];
	
	for(int i=1;i<tamanio;i++){
		if(arreglo[i] > mayor){
			mayor = arreglo[i];
		}
		if(arreglo[i] < menor){
			menor = arreglo[i];
		}
	}
}

void mostrarDatosProgramador(){
	cout << "El nombre del programador es Alejandro Taco" << endl;
}

void calcularDescuento(){
	string nombre;
	float precio;
	
	cout << "Ingrese el nombre del producto: ";
	cin >> nombre;
	cout << "Ingrese el precio del producto: ";
	cin >> precio;
	float descuento = 0.10, total;
	
	if(precio > 1000){
		total = precio * descuento;
		cout << "El descuento es: " << total;
	} else {
		cout << "Usted no aplica descuento";
	}
}


int main(){
	float arr[8], mayor, menor;
	int tam = 8;
	
	ingresarDatos(arr);
	encontarMayorMenor(arr, tam, mayor, menor);
	cout << "El mayor precio es: " << mayor << endl;
	cout << "El menor precio es: " << menor << endl;
	mostrarDatosProgramador();
	calcularDescuento();
	
	
	return 0;
}
