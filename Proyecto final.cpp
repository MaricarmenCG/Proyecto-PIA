#include <iostream>
#include <string>
#include <stdlib.h>
#include <cstdlib>
#include <fstream>

using namespace std;

// Declaracion de variables //

int opc;
bool repetir = true;

struct videojuego
{
    int a_l{};
    int id=1;
    float iva{}, ivat{};
    float pt{}, p_u{}, imp{};
    char nom[200]{};
    char clas[200]{};
    char gen[200]{};
    char carac[250]{};
    char desc[250]{};
    
}juego[100];

struct videojuego aux;

// Funciones //
void menu();
void agregar(int n);
void modificar(int x, int& num); //
void eliminar(int x, int& num);
void lista_art(int num);
void buscar(int num);
//void leer();

int main() // Funcion Principal //
{

   /* leer();*/

    system("color 0b");
    int num = 0;
    int num_prod;

    do
    {
         menu();
         switch (opc)
         {
             case 1: //  Agregar art //
             {
                 cout << "\n Ingrese numero de productos: ";
                 cin >> num;
                 agregar(num);
                 cout << endl;
                 system("pause");
                 break;
             }
             case 2: //  Modificar art //
             {
                 cout << "\n\tIngrese el ID del articulo que desea modificar:";
                 cin >> num_prod;
                 modificar(num_prod, num);
                 cout << "\n\n\t\tProducto modificado ..!" << endl;
                 system("pause");
                 break;
             }
             case 3: //  Eliminar art //
             {
                 cout << "\n Ingrese ID de producto: ";
                 cin >> num_prod;
                 eliminar(num_prod - 1, num);
                 cout << "\n\n\t\tProducto eliminado ..!" << endl;
                 system("pause");
                 break;
             }
             case 4: //  Lista de art vigentes //
             {
                 lista_art(num);
                 system("pause");
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
             {
                 cout << "\t OPCION NO VALIDA" <<endl;
                 break;
             }
         }

         cout << endl << endl;

    } while (opc != 6);

    return 0;
    
} 

void menu() 
{
    cout << "\n";
    cout << "\n";
    cout << "  -------------   Bienvenido!------------- \n";
    cout << "\n";

    cout << " ----     1. Agregar Articulo               ----\n";
    cout << " ----     2. Modificar Articulo             ----\n";
    cout << " ----     3. Eliminar Articulo              ----\n";
    cout << " ----     4. Lista de Articulos Vigentes    ----\n";
    cout << " ----     5. Limpiar Pantalla               ----\n";
    cout << " ----     6. Salir                          ----\n";
    cout << "\n";

    cout << "  Ingrese una opcion... \t";
    cin >> opc;
    cout << "\n";
}


void agregar(int n)
{

    for (int i = 0; i < n; i++)
    {
        juego[i].id++;

        cout << "\n PRODUCTO " << i + 1 << endl;  
        cout << "\n";
        cin.ignore();  cout << "   Nombre del videojuego  : ";  cin >> juego[i].nom;   cout << "\n";
        cin.ignore();  cout << "   Anio de lanzamiento    : ";  cin >> juego[i].a_l;   cout << "\n";
        cin.ignore();  cout << "   Clasificacion          : ";  cin >> juego[i].clas;  cout << "\n";
        cin.ignore();  cout << "   Caracteristicas        : ";  cin >> juego[i].carac; cout << "\n";
        cin.ignore();  cout << "   Descripcion            : ";  cin >> juego[i].desc;  cout << "\n";
        cin.ignore();  cout << "   Genero                 : ";  cin >> juego[i].gen;   cout << "\n";
        cin.ignore();  cout << "   Precio Unitario        : ";  cin >> juego[i].p_u;   cout << "\n";

        juego[i].iva = (16 * juego[i].p_u / 100);
        juego[i].pt = juego[i].p_u + juego[i].iva;


    }

}


void modificar(int x, int& num)
{

    int band = 0;

    if (num > 0)
    {
        for (int i = 0; i < num; i++)
        {
            if (juego[i].id ==  aux.id)
            {
                cout << "\n\n ID  " << juego[i].id << " : " << endl;
                cout << "\n\n El genero del producto  " << juego[i].nom << " es : " << juego[i].gen << endl;
                cout << "\n\n La clasificacion del producto  " << juego[i].nom << " es : " << juego[i].clas << endl;
                band = 1;
                break;
            }
        }
    }
    else
        cout << "\n\tRegistro vacio..!";

    if (band == 0)
        cout << "\n\n\tEl producto no fue encontrado..! :S" << endl;

}


void eliminar(int x, int& num)
{
    if (num > 0)
    {
        for (int i = x; i < num - 1; i++)
            juego[i] = juego[i + 1];

        num--;
    }
    else
    {
        cout << "\n";
        cout << "\n\tRegistro vacio..!";
        cout << "\n";
    }

}


void lista_art (int num)
{
    if (num > 0)
    {
        cout << "\n\nMostrando lista de Productos\n";
        for (int i = 0; i < num; i++)
        {
            cout << endl << endl;
            cout << i + 1 << ". " << endl;
            cout << "   ID                     :  " <<  juego[i].id    << endl;
            cout << "   Nombre del Videojuego  :  " <<  juego[i].nom   << endl;
            cout << "   Anio de Lanzamiento    :  " <<  juego[i].a_l   << endl;
            cout << "   Clasificacion          :  " <<  juego[i].clas  << endl;
            cout << "   Caracteristicas        :  " <<  juego[i].carac << endl;
            cout << "   Descripcion            :  " <<  juego[i].desc  << endl;
            cout << "   Genero                 :  " <<  juego[i].gen   << endl;
            cout << "   Precio Unitario        :  " <<  juego[i].p_u   << endl;
            cout << "   Impuesto IVA           :  " <<  juego[i].iva   << endl;
            cout << "   Precio Total           :  " <<  juego[i].pt    << endl;
            cout << endl;

        }
    }
    else
    {
        cout << "\n";
        cout << "\n\tRegistro vacio..!";
        cout << "\n";
    }

    cout << "\n";
}

void buscar(int num) // Corregir //
{
    int band = 0;

    if (num > 0)
    {
        for (int i = 0; i < num; i++)
        {
            if (num = juego[i].id)
            {
                cout << "\n\n ID  " << juego[i].id << " : " << endl;
                cout << "\n\n El genero del producto  " << juego[i].nom << " es : " << juego[i].gen << endl;
                cout << "\n\n La clasificacion del producto  " << juego[i].nom << " es : " << juego[i].clas << endl;
                band = 1;
                break;
            }
        }
    }
    else
        cout << "\n\tRegistro vacio..!";

    if (band == 0)
        cout << "\n\n\tEl producto no fue encontrado..! :S" << endl;

}

//
//void leer() // Lectura de archivo //
//{
//    ifstream archivo_entrada("archivo.txt");
//    string linea = "123456789";
//
//    if (!archivo_entrada.is_open())
//    {
//        cout << "Error al abrir... :S " << "\n";
//        exit(EXIT_FAILURE);
//    }
//
//    int i=0;
//
//    while (!getline(archivo_entrada, linea).eof())
//    {
//        juego[i].id = stoi(linea);
//            getline(archivo_entrada, linea);
//        juego[i].nom = linea;
//            getline(archivo_entrada, linea);
//        juego[i].a_l = stoi(linea);
//            getline(archivo_entrada, linea);
//        juego[i].clas = linea;
//            getline(archivo_entrada, linea);
//        juego[i].carac = linea;
//            getline(archivo_entrada, linea);
//        juego[i].desc = linea;
//            getline(archivo_entrada, linea);
//        juego[i].gen = linea;
//            getline(archivo_entrada, linea);
//        juego[i].p_u = stof(linea);
//            getline(archivo_entrada, linea);
//        juego[i].iva = stof(linea);
//            getline(archivo_entrada, linea);
//        juego[i].pt = stof(linea);
//            getline(archivo_entrada, linea);
//
//        i++;
//    }
//
//    cout << "\n\n\t Carga de datos terminada... :D" << endl;
//    archivo_entrada.close();
//}
