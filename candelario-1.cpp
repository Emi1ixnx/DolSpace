#include <iostream>
using namespace std;
int main () 
{

int eleccion= 0;
int raygun = -1; 
int disparar1 = 0;
int disparar2 = 0; 
int municion = 0; 
 //Comienza la historia :b
    cout << "Tu tripulación ha muerto, estás vagando solo, por el espacio. No queda vida dentro de la nave.\nNo hay luz ni energía en la nave. \n"; 
    void clear_screen (void);
    cout << "Elige tu camino\n 1: Buscar entre los cuerpos\n 2: Buscar algún módulo para contactar al planeta más cercano\n"; 
    cin >> eleccion; 
 	
 	switch (eleccion){
 		
 		case 1: cout <<"¡Has tenido suerte! Encontraste una Raygun con 3 cilindros de munición";
 		
 		cout << "\n*Raygun añadida a tu inventario*             Raygun = 3\n"; 
 	        cout << "\nEscuchas un sonido estremecedor, pero no puedes ver qué es, ¿deseas disparar?\n1: Sí\n2: no\n"; 
 		        if(disparar1 == 1) {
 		            cin >> disparar1; 
 		            municion = 3-1; 
 		            cout << "Por el destello del disparo, vislumbras la silueta de un humano.. mataste a un sobreviviente";
 		            cout << "            Raygun = " << municion;
 		        }
 		        else {
 		            cin >> disparar2; 
 		            municion = 3; 
 		            cout << "Buena decisión, es un compañero que sabe dónde se encuentra la sala de comunicaciones";
 		            cout << "            Raygun = "<< municion;
 		        }
 		        
 		        cout << "\nAl llegar, ";
 		            
 		  
 		break; 
 		
 		case 2: cout <<"Recuerdas vagamente la localización de la sala de comunicaciones, avanzas hacia ella\ny encuentras una Raygun";
 		break;
 		
 		case 3: cout << "Tu reputísia madre vuelve a verguearte"; 
 		break; 
 		
 		case 4:  cout << "Salir del juego"; 
 	 }
 	
 return 0; 
}

