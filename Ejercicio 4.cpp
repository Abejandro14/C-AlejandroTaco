#include <iostream>
using namespace std;

int main(){
    float base, IVA, ICE, precioFinalMensual;
    float descuentoEdad, precioInstalacion;
    int edad, metodoPago, opcion;
    
    const float telefonia = 7.99;
    const float tv = 28.50;
    const float internet = 18.00;
    const float iva = 0.15;
    const float ice = 0.15;
    const float instalacion = 120.0;
    
    
    do{
        cout << "\n--- SERVICIO CLARO EP ---\n";
        cout << "1.- Telefonia fija\n";
        cout << "2.- TV Satelital\n";
        cout << "3.- Internet hogar\n";
        cout << "4.- Salir\n";
        cout << "Ingrese su opcion: ";
        cin >> opcion;
        
        switch (opcion) {
            case 1:
                base = telefonia;
                IVA = base * iva;
                ICE = 0;
                precioFinalMensual = base + IVA;
                
                cout << "Ingrese su edad: ";
                cin >> edad;
                if(edad > 65){
                    descuentoEdad = base * 0.50;
                    precioFinalMensual -= descuentoEdad;
                } else {
                    descuentoEdad = 0;
                }
                
                cout << "Metodo de pago (1 Tarjeta, 2 Efectivo): ";
                cin >> metodoPago;

                precioInstalacion = instalacion;
                if(metodoPago == 1){
                    precioInstalacion *= 0.5;
                } 
                else if (metodoPago == 2){
                    precioInstalacion *= 0.9;
                }
                else {
                    cout << "Metodo inválido, no aplica descuento.\n";
                }
                
                cout << "\nServicio: Telefonía Fija\n";
                cout << "Base: $" << base << endl;
                cout << "IVA: $" << IVA << endl;
                cout << "ICE: $" << ICE << endl;
                cout << "Descuento tercera edad: $" << descuentoEdad << endl;
                cout << "Precio mensual final: $" << precioFinalMensual << endl;
                cout << "Costo instalación: $" << precioInstalacion << endl;
                
                break;

            case 2:
                base = tv;
                IVA = base * iva;
                ICE = base * ice;
                precioFinalMensual = base + IVA + ICE;
                
                cout << "Ingrese su edad: ";
                cin >> edad;
                if(edad > 65){
                    descuentoEdad = base * 0.50;
                    precioFinalMensual -= descuentoEdad;
                } else {
                    descuentoEdad = 0;
                }
                
                cout << "Metodo de pago (1 Tarjeta, 2 Efectivo): ";
                cin >> metodoPago;
                
                precioInstalacion = instalacion;
                if(metodoPago == 1){
                    precioInstalacion *= 0.5;
                }
                else if(metodoPago == 2){
                    precioInstalacion *= 0.9;
                }
                else {
                    cout << "Metodo inválido, no aplica descuento.\n";
                }
                
                cout << "\nServicio: TV Satelital\n";
                cout << "Base: $" << base << endl;
                cout << "IVA: $" << IVA << endl;
                cout << "ICE: $" << ICE << endl;
                cout << "Descuento tercera edad: $" << descuentoEdad << endl;
                cout << "Precio mensual final: $" << precioFinalMensual << endl;
                cout << "Costo instalación: $" << precioInstalacion << endl;
            break;

            case 3:
                base = internet;
                IVA = base * iva;
                ICE = 0;
                precioFinalMensual = base + IVA;
            
                cout << "Ingrese su edad: ";
                cin >> edad;
                if (edad > 65){
                    descuentoEdad = base * 0.50;
                    precioFinalMensual -= descuentoEdad;
                } else {
                    descuentoEdad = 0;
                }
            
                cout << "Metodo de pago (1 Tarjeta, 2 Efectivo): ";
                cin >> metodoPago;
            
                precioInstalacion = instalacion;
                if(metodoPago == 1){
                    precioInstalacion *= 0.5;
                }
                else if(metodoPago == 2){
                    precioInstalacion *= 0.9;
                }
                else {
                    cout << "Metodo inválido, no aplica descuento.\n";
                }
                
                cout << "\nServicio: Internet Hogar\n";
                cout << "Base: $" << base << endl;
                cout << "IVA: $" << IVA << endl;
                cout << "ICE: $" << ICE << endl;
                cout << "Descuento tercera edad: $" << descuentoEdad << endl;
                cout << "Precio mensual final: $" << precioFinalMensual << endl;
                cout << "Costo instalación: $" << precioInstalacion << endl;
            break;

            case 4:
                cout << "Saliendo...\n";
            break;

            default:
                cout << "Error: Digite una opcion correcta!\n";
                break;
        }
    }while(opcion != 4);
    
    return 0;
}
