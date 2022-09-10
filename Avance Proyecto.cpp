#include <iostream>
#include <string>
#include <cstdlib>
#include <fstream>


using namespace std;

void main()
{
    int opc;
    bool repetir = true;

    do
    {
        //  Menu //

        cout << "\n";
        cout << "\n";
        cout << "  -------------   Bienvenido!------------- \n";
        cout << "\n";

        cout << " ---   1. Agregar Articulo             ----\n";
        cout << " ---   2. Modificar Articulo           ----\n";
        cout << " ---   3. Eliminar Articulo            ----\n";
        cout << " ---   4. Lista de Articulos Vigentes  ----\n";
        cout << " ---   5. Limpiar Pantalla             ----\n";
        cout << " ---   6. Salir                        ----\n";
        cout << "\n";
        cout << "  Ingrese una opcion... \t";
        cin >> opc;
        cout << "\n";

        switch (opc)
        {
        case 1: //  Agregar art //
        {
            int a_l, p_u, pv, pt;
            string nombre, nom, clas, gen;

            for (int i = 0; i < 3; i++)
            {
                cout << "\n";
                cout << "Ingrese nombre del videojuego ...\n";
                cin >> nom;
                cout << "Ingrese el genero del videojuego ...\n";
                cin >> gen;
                cout << "Ingrese la clasificacion del videojuego ...\n";
                cin >> clas;
                cout << "Ingrese el año de lanzamiento ...\n";
                cin >> a_l;
                cout << "Ingrese precio unitario ...\n";
                cin >> p_u;
                cout << "Ingrese precio del videojuego ...\n";
                cin >> pv;

                cout << "\n";
                pt = p_u + pv;

                cout << "Los datos ingresados son los siguientes ...\n";
                cout << "\n";

                cout << "Nombre:  " << nom << "\n";
                cout << "Genero:  " << gen << "\n";
                cout << "Clasificacion:  " << clas << "\n";
                cout << "Fecha de lanzamiento:  " << a_l << "\n";
                cout << "Precio total:  " << pt << "\n";
            }
                break;
        }
        case 2: //  Modificar art //
        {
            cout << "...\n";
            system("pause>null");
                break;
        }
        case 3: //  Eliminar art //
        {
            cout << "...\n";
            system("pause>null");
                break;
        }
        case 4: //  Lista de art vigentes //
        {
            cout << "...\n";
            system("pause>null");
                break;
        }
        case 5: //  Limpiar pantalla //
        {
            system("cls");
                break;
        }
        case 6: //  Salir //
        {
            repetir = false;
                break;
        }
        default: //Error//
            cout << "\t OPCION NO VALIDA \n";
            break;
        }
    } while (opc != 6);

}


