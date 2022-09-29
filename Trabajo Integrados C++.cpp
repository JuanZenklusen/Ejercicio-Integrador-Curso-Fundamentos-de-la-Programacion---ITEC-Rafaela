
#include "Header.h"

int main()
{
    cout << "========== Bienvenidos a SERCOS PERIMETRALES MI VACA ENCERRADA ==========\n\n";

    /*validacion de tipo de cerca y calculo de perimetro*/
    while (true) {

        cout << "Indique:\n";
        cout << "\t 1) Cerco rectangular\n";
        cout << "\t 2) Cerco circular:\n";
        cin >> tipoDeCerca;

        if (tipoDeCerca == "1")
        {
            calcPerimRectangular();
            break;
        }
        else
        {
            if (tipoDeCerca == "2")
            {
                calcPerimCircular();
                break;
            }
            else {
                cout << "Ingreso una opcion no valida\n";
            }
        }
    }

    //cantidad de portones
    IngresarCantidadDePortones();

    /*actualizacion de variables*/ {
    totalAlambreTensor = (perimetro * tiradasDeAlambre) * (1+desperdicioTegido);
    totalMetrosTegido = perimetro * (1 + desperdicioTegido);
    cantidadDePostes = ceil(perimetro / separacionEntrePostes);
    cantidadDeTensores = ceil(cantidadDePostes / separacionTensores) * tiradasDeAlambre;
    subtotalInsumos = (totalMetrosTegido * costoTegido) + (cantidadPortones * costoPorton) + (cantidadPortones * costoPostePorton) + (totalAlambreTensor * costoAlambreTensor) + (cantidadDePostes * costoPosteStd) + (cantidadDeTensores * costoTensor);
    subtotalMO = costoMO * perimetro; // ACLARACION: el costo de la MO se calculó sobre el perimetro total, ya que el enunciado del problema no era claro si se referia al perimetro o a los metros de tejido contando el desperdicio
    costoTotal = subtotalInsumos + subtotalMO; //no se tuvo en cuenta IVA.
    }
    
    cout << "\n\n==========  DATOS DE SALIDA:  ==========\n";

    printf("\nMetros de tejido:                     %.2f metros.", totalMetrosTegido);
    printf("\nMetros de alambre tensor:             %.2f metros.", totalAlambreTensor);
    printf("\nCantidad de tensores:                 %.0f unidades.", cantidadDeTensores);
    printf("\nCantidad de postes standard:          %.0f unidades.", cantidadDePostes);
    printf("\nCantidad de postes de portones:       %i unidades.", cantidadPortones);
    printf("\nCantidad de portones:                 %i unidades.", cantidadPortones);
    printf("\n\n____________________________________________________");
    printf("\nSUBTOTAL INSUMOS:                    $ %.2f\n\n", subtotalInsumos);
    printf("\nSUBTOTAL MANO DE OBRA:               $ %.2f\n", subtotalMO);
    printf("\n______________________________________________________");
    printf("\nTOTAL GENERAL:.......................$ %.2f\n", costoTotal);
    printf("\n\n\n\n\n");
    
    return;
}
