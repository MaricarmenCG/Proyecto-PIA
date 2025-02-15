#include <iostream>
#include <string>
#include <cstdlib>
#include <fstream>


using namespace std;


//Declaracion de variables y estructura//

struct videojuego
{
    int a_l, pv, pt, c_t, id, p_u, imp;
    string nom, clas, carac, desc, gen;

} juego[100];

int usuarios;
bool loop = true;
bool buscar = false;
bool repetir = true;




// Declaracion Arreglos //
void lista();
void agregar();
void eliminar();



int main()
{
    int opc;
    bool repetir = true;
    int usuarios;
    bool loop = true;
    bool buscar = false;


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

            while (loop)
            {
                buscar = false;
                cout << "\n";
                cout << " Cuantos articulos deseas dar de alta...?\n";
                cin >> usuarios;


                for (int i = 0; i < usuarios; i++)
                {
                    juego[i].id = i++;
                    cout << "ID: " << juego[i].id << endl;

                    cout << " Ingrese nombre del juego...?\t";
                    cin >> juego[i].nom;

                    cout << " Ingrese anio de lanzamiento del juego...?\t";
                    cin >> juego[i].a_l;

                    cout << " Ingresa clasificacion del juego...?\t";
                    cin >> juego[i].clas;

                    cout << " Ingrese caracteristicas del juego...?\t";
                    cin >> juego[i].carac;

                    cout << " Ingrese descripcion del juego...?\t";
                    cin >> juego[i].desc;

                    cout << " Ingrese genero del juego...?\t";
                    cin >> juego[i].gen;

                    cout << " Ingresa precio unitario del juego...?\t";
                    cin >> juego[i].p_u;

                    cout << " Ingresa impuesto del juego...?\t";
                    cin >> juego[i].imp;

                    cout << "Ingresa cantidad total del juego...?\t";
                    cin >> juego[i].c_t;

                }

            }
            break;
        }
        case 2: //  Modificar art //
        {

            break;
        }
        case 3: //  Eliminar art //
        {
            eliminar();
            break;
        }
        case 4: //  Lista de art vigentes //
        {
            lista();
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




// Arreglos //

void lista()
{
    int op;
    int strid, stra_l;
    string strgen, strnom, strclas, strcarac, strdesc, strlista;
    bool encontrarJuego;

    cout << "...\n";
    cout << "  Como desea obtener la lista...?  " << endl;
    cout << "...\n";

    cout << "  --- 1. Por ID de juego                ---" << endl;
    cout << "  --- 2. Por nombre del juego           ---  " << endl;
    cout << "  --- 3. Por anio de lanzamiento        ---" << endl;
    cout << "  --- 4. Por clasificacion de juego     --- " << endl;
    cout << "  --- 5. Por caracteristicas de juego   --- " << endl;
    cout << "  --- 6. Por descripcion de juego       --- " << endl;
    cout << "  --- 7. Por genero de juego            --- " << endl;
    cout << "  --- 8. Imprimir toda la lista         --- " << endl;

    cout << "\n";
    cout << "  Ingrese una opcion... \t";
    cin >> op;
    cout << "\n";

    switch (op)
    {
    case 1: // ID //
    {
        cout << " Introduce clasificacion:  \t";
        cin >> strid;
        for (int i = 0; i < 100; i++)
        {
            if (juego[i].id == strid)
            {
                cout << juego[i].id << endl;
                cout << juego[i].nom << endl;
                encontrarJuego = true;
            }
            if (encontrarJuego = false)
            {
                cout << " No se encontraron juegos con esa clasificacion. " << endl;
            }
        }
        break;
    }
    case 2: // Nombre //
    {
        cout << " Introduce nombre del juego:  \t";
        cin >> strnom;
        for (int i = 0; i < 100; i++)
        {
            if (juego[i].nom == strnom)
            {
                cout << juego[i].id << endl;
                cout << juego[i].nom << endl;

                encontrarJuego = true;
            }
            if (encontrarJuego = false)
            {
                cout << " No se encontraron juegos con esa clasificacion. " << endl;
            }
        }
        break;
    }
    case 3: // Año de lanzamiento //
    {
        cout << " Introduce anio de lanzamiento:  \t";
        cin >> stra_l;
        for (int i = 0; i < 100; i++)
        {
            if (juego[i].a_l == stra_l)
            {
                cout << juego[i].id << endl;
                cout << juego[i].nom << endl;
                cout << juego[i].a_l << endl;
                encontrarJuego = true;
            }
            if (encontrarJuego = false)
            {
                cout << " No se encontraron juegos con esa clasificacion. " << endl;
            }
        }
        break;
    }
    case 4: //Clasificacion//
    {
        cout << " Introduce clasificacion:  \t";
        cin >> strclas;
        for (int i = 0; i < 100; i++)
        {
            if (juego[i].clas == strclas)
            {
                cout << juego[i].id << endl;
                cout << juego[i].nom << endl;
                cout << juego[i].clas << endl;

                encontrarJuego = true;
            }
            if (encontrarJuego = false)
            {
                cout << " No se encontraron juegos con esa clasificacion. " << endl;
            }
        }
        break;
    }
    case 5: // Caracteristicas //
    {
        cout << " Introduce caracteristicas:  \t";
        cin >> strcarac;
        for (int i = 0; i < 100; i++)
        {
            if (juego[i].carac == strcarac)
            {
                cout << juego[i].id << endl;
                cout << juego[i].nom << endl;
                cout << juego[i].carac << endl;
                encontrarJuego = true;
            }
            if (encontrarJuego = false)
            {
                cout << " No se encontraron juegos con esa clasificacion. " << endl;
            }
        }
        break;
    }
    case 6: // Descripcion //
    {
        cout << " Introduce descripcion del juego:  \t";
        cin >> strdesc;
        for (int i = 0; i < 100; i++)
        {
            if (juego[i].desc == strdesc)
            {
                cout << juego[i].id << endl;
                cout << juego[i].nom << endl;
                cout << juego[i].desc << endl;

                encontrarJuego = true;
            }
            if (encontrarJuego = false)
            {
                cout << " No se encontraron juegos con esa clasificacion. " << endl;
            }
        }
        break;
    }
    case 7: // Genero //
    {
        cout << " Introduce genero:  \t";
        cin >> strgen;
        for (int i = 0; i < 100; i++)
        {
            if (juego[i].gen == strgen)
            {
                cout << juego[i].id << endl;
                cout << juego[i].nom << endl;
                cout << juego[i].gen << endl;
                encontrarJuego = true;
            }
            if (encontrarJuego = false)
            {
                cout << " No se encontraron juegos con esa clasificacion. " << endl;
            }
        }
        break;
    }
    case 8:
    {
        cout << "...\n";
        cout << "  Lista completa de articulos ingresados...  " << endl;
        cout << "\n";

        for (int i = 0; i < 100; i++)
        {

            cout << juego[i].id << endl;
            cout << juego[i].nom << endl;
            cout << juego[i].a_l << endl;
            cout << juego[i].clas << endl;
            cout << juego[i].carac << endl;
            cout << juego[i].desc << endl;
            cout << juego[i].gen << endl;
            buscar = 1;

        }
        break;
    }
    default: //Error//
        cout << "\t OPCION NO VALIDA \n";
        break;
    }

}

void agregar()
{
    while (loop)
    {
        buscar = false;
        cout << "\n";
        cout << "¿Cuantos articulos deseas dar de alta...?\n";
        cin >> usuarios;


        for (int i = 0; i < usuarios; i++)
        {
            juego[i].id = i;
            cout << "ID: " << juego[i].id << endl;

            cout << " Ingrese nombre del juego...?\t";
            cin >> juego[i].nom;

            cout << " Ingrese anio de lanzamiento del juego...?\t";
            cin >> juego[i].a_l;

            cout << " Ingresa clasificacion del juego...?\t";
            cin >> juego[i].clas;

            cout << " Ingrese caracteristicas del juego...?\t";
            cin >> juego[i].carac;

            cout << " Ingrese descripcion del juego...?\t";
            cin >> juego[i].desc;

            cout << " Ingrese genero del juego...?\t";
            cin >> juego[i].gen;

            cout << " Ingresa precio unitario del juego...?\t";
            cin >> juego[i].p_u;

            cout << " Ingresa impuesto del juego...?\t";
            cin >> juego[i].imp;

            cout << "Ingresa cantidad total del juego...?\t";
            cin >> juego[i].c_t;

        }

    }

}

void eliminar()
{

    cout << "...\n";
    cout << "¿Que articulo deseas eliminar...?" << endl;
    cout << "Ingrese ID del articulo para continuar...\n";
    cin >> usuarios;

    for (int i = 0; i < 100; i++)
    {
        if (juego[i].id == usuarios)
        {
            juego[i].nom = "0";
            juego[i].a_l = 0;
            juego[i].clas = "0";
            juego[i].carac = "0";
            juego[i].desc = "0";
            juego[i].gen = "0";
            juego[i].p_u = 0;
            juego[i].imp = 0;
            juego[i].pt = 0;
            buscar = 1;

        }
    }

}