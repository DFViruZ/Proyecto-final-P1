/* PROYECTO FINAL - PROGRAMACIÓN 1
	PROYECTO: Mapa de México.
	EQUIPO: 
		-Emmanuel González Rodríguez (ID: 307697)
		-Luis Bernardo Arenas Ramírez (ID: 557308)
		-Juan Carlos Díaz López (ID: 211595)
		-Maximiliano Emmanuel Vera Araujo (ID: 339490)
		-Cristian Alejandro Silva Zamarripa (ID: 391692)
		-Ruben Alejandro Hernández de la Torre (ID: 550792)
	USO DE GRAFICOS CON ALLEGRO 4.2.1
*/

#include <bits/stdc++.h>	/*Archivo de encabezado no estándar de C++ que incluye todas las bibliotecas estándar 
de C++. Aporte del maestro Eduardo Emmanuel Rodriguez Lopez impartiendo la materia de estructura de datos.*/
#include <allegro.h>	//Libreria de allegro, su función es implementar graficos al programa.

//Define el ancho y alto de la pantalla... esto para la resolución de las imagenes/graficos que se estarán utilizando.
#define ANCHO 1080	//Resolución en pixeles de lo ancho en este caso 1080p.
#define ALTO 700	//Resolución en pixeles de lo alto en este caso 700p.

using namespace std;

//Funciones de Allegro. Estas funcionan ya se para inicializar y desinicializar(esto para liberación de recursos).
void init();
void deinit();

//Prototipos para los bitmaps(gráficos) que se usaran en distintos sectores del programa.
void estadosM(BITMAP*);
void clima(BITMAP*);
void rios(BITMAP*);
void mont(BITMAP*);
void menu(BITMAP*);
void ayuda(BITMAP*);

//Prototipos para las funciones donde se almacenan los datos de cada uno de los estados con una descripción detallada.
//Para la información de los estados de la republica haremos el uso de archivos de texto vistos en clase.
void aguascalientes(FILE*);
void bajacaliforniaN(FILE*);
void bajacaliforniaS(FILE*);
void Campeche(FILE*);
void Chiapas(FILE*);
void Chihuahua(FILE*);
void Cdm(FILE*);
void Coahuila(FILE*);
void Colima(FILE*);
void Durango(FILE*);
void Edomx(FILE*);
void Guanajuato(FILE*);
void Guerrero(FILE*);
void Hidalgo(FILE*);
void Jalisco(FILE*);
void Michoacan(FILE*);
void Morelos(FILE*);
void Nayarit(FILE*);
void NuevoL(FILE*);
void Oaxaca(FILE*);
void Puebla(FILE*);
void Queretaro(FILE*);
void Quintana(FILE*);
void Snlp(FILE*);
void Sinaloa(FILE*);
void Sonora(FILE*);
void Tabasco(FILE*);
void Tamaulipas(FILE*);
void Tlaxcala(FILE*);
void Veracruz(FILE*);
void Yucatan(FILE*);
void Zacatecas(FILE*);

int main(){
    cout<<"Hola mundo";

    return 0;
}
