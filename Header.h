#pragma once 
 
#include <iostream> 
#include <string> 
#include <stdio.h> 
#include <Windows.h>
#include <cmath>

using namespace std;

//declaracion de constantes:
    const double costoTegido = 3900.0; // por metro 
    const double costoPorton = 35000.0; // por unidad 
    const double costoPosteStd = 4900.0; // por unidad 
    const double costoPostePorton = 5600.0; // por unidad 
    const double costoTensor = 650.0; // por unidad 
    const double costoAlambreTensor = 70.0; // metro lineal 
    const double costoMO = 1500.0; // por metro 
    const int tiradasDeAlambre = 3;
    const int separacionTensores = 4; //cada 4 postes
    const double desperdicioTegido = 0.01; // porcentaje 
    const int separacionEntrePostes = 6; // cada 6 metros 
    const double PI = 3.141592654; // PI 
 
//declaracion de variables:
    double lado1 = 0; 
    double lado2 = 0; 
    double diametro; 
    int cantidadPortones; 
    double perimetro;
    string tipoDeCerca; // 1= rectangular 2=circular
    double totalMetrosTegido;
    double totalAlambreTensor; 
    double cantidadDePostes; // declarado como double, porque sino no redondeaba bien la fórmula
    double cantidadDeTensores; // declarado como double, porque sino no redondeaba bien la fórmula

//variables para calculo de costos
    double subtotalInsumos; // tejido + porton + poste porton + alambre + poste std + tensores
    double subtotalMO;
    double costoTotal;

//para calcular perimetro rectangular
void calcPerimRectangular() {
    cout << "\nHa indicado CERCA RECTANGULAR";
    cout << "\nIngrese longitud de terreno (en metros): ";
    cin >> lado1;
    cout << "Ingrese ancho de terreno (en metros): ";
    cin >> lado2;
	perimetro = (lado1 * 2) + (lado2 * 2);
	printf("\nEl perimietro total es: %.2f \n", perimetro);
}

//para calcular perimetro circular
void calcPerimCircular() {
    cout << "\n\nHa indicado CERCA CIRCULAR";
    cout << "\nIngrese diametro (en metros): ";
    cin >> diametro;
    perimetro = PI * diametro;
    printf("\nEl perimietro total es: %.2f \n", perimetro);
}

//cantidad de portones
void IngresarCantidadDePortones() {
    while (true)
    {
        cout << "\nCuantos portones desea instalar?: ";
        cin >> cantidadPortones;

        if (cantidadPortones > 0 && cantidadPortones < 5)
        {
            break;
        }
        else {
            cout << "\nIngreso un parametro no disponible.\n\n";
        }
    }
}
