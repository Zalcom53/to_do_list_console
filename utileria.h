
/*
  Nombre: utileria.cpp
  Autor: Daniel Antonio Quihuis Hernandez
  Fecha: julio del 2022
  Descripcion: Este archivo contiene una funcion que se encarga de ejecutar todo el sitema
*/


#include <iostream>
#include <cstdlib>

using namespace std;


/** \fn  run()
 * \brief se encarga de ejecutar todo el sistema
 * \param una cadena de caracter es
 * \return retorna un entero como un valor aceptado
*/
void run(){

system("clear");
cout << endl;
cout << "To do List/n" << endl;


//iniciar sesion
setUser = getUser("User ~> : ";

cout << "~> ";
getCommand();



  return 0;
}


/** \fn  CapturaEntero()
 * \brief realiza la captura de un entero de forma segura(se asegura que el dato capturado sea un numero entero y no una letra u otro caracter no permitido)
 * \param una cadena de caracteres
 * \return retorna un entero como un valor aceptado
*/
int CapturaEntero(const char solicitud[]){

   int n; // Variable de uso local

    while(true){
         cout << solicitud;
       cin >> n;

        if(cin.bad()){
            cout << "Ocurrio un error irrecuperable en el flujo de entrada" << endl;
             exit(EXIT_FAILURE);
           return 1;
        }
        if(cin.fail()){
           cout << "Error: no es un numero. Introduzca de nuevo..." << endl;
            cin.clear();
            cin.ignore(numeric_limits<int>::max(), '\n');
            continue;
       }


       return n;
    }
 }//Llave de cierre en la funcion CapturaEntero
