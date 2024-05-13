#include <iostream>
using namespace std;

int main(){
// Nomina mensual 
    string nombredeltrabajador;
    int horastrabajadas;
    float salariobruto, salarioneto;
    float horasbase = 10.0;
    float horasextra = 15.0; // 10 + 5 (50% más que la tarifa normal)
    float impuesto1 = 0.2; // 20% impuesto
    float impuesto2 = 0.3; // 30% impuesto
     cout << "ingresar nombre del trabajador";
     cin >> nombredeltrabajador;
     cout << "ingrese las horas trbajadas";
     cin >> horastrabajadas; 

     // calc de salario bruto 
     if (horastrabajadas <= 160){
        salariobruto = horastrabajadas * horasbase;
        } else {
            salariobruto =(160 * horasbase) + ((horastrabajadas - 160) * horasextra);
        }

        // Calc salario neto - impuestos
     if (salariobruto <= 2000){
        salarioneto = salariobruto;
     } else {
        if (salariobruto <= 2200){
            salarioneto = salariobruto - (salariobruto * impuesto1);
        } else {
            salarioneto=salariobruto  - ( salariobruto * impuesto2);
        }
     }
     // Resultados 
     cout << "Resultado\n";
     cout << "Nombre del trabajador:" <<nombredeltrabajador<<"\n";
     cout << "Salario bruto: $" << salariobruto<<"\n";
     cout << "Salario neto (con impuestos):$" << salarioneto << "\n";

     return 0;
} 