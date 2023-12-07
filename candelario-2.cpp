#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main () 
{

int eleccion = 0;
int dolspace = 0;
int raygun = 3; 
int eleccion2 = 0;
int raygunacto1 = 4;
int eleccion3 = 0;
int eleccion4 = 0;
int eleccion5 = 0; 

 
    cout << "Dol Space\n";
    cout << "1: Modo historia\n2: Minijuego\n3: Multijugador\n4: Créditos\n5: Salir del juego\n";
    cin >> dolspace; 
    
    switch (dolspace) {
        //Comienza la historia :b
        case 1: cout << "Despiertas; toda la tripulación ha muerto, estás vagando solo por el espacio. No queda vida dentro de la nave. No hay luz ni energía.\nContigo portas una Raygun con tres cilindros de munición. Tienes tres disparos. Tu objetivo es escapar de la nave\n";
            // PRIMER PUNTO DE LA HISTORIA
            cout << "Elige tu camino\n 1: Caminar entre cuerpos\n 2: Gritar por ayuda\n 3: \n 4: Salir del juego\n"; 
            cin >> eleccion; 
                if (eleccion == 1) {
                cout << "Al caminar, encuentras un cilindro más para tu Raygun\n"; 
                    raygun = raygun + 1; 
                    cout << raygun; 
                }
                if (eleccion == 2) {
                    cout << "perdiste cinco manzanas          Raygun:"; 
                    cout << raygun;
                }
                if (eleccion == 3) {
                    cout << "mientras ibas te perdiste pero dsps regresaste y tdbn xd          Raygun:"; 
                    cout << raygun;
                }
                if (eleccion == 4) {
                    return 0;
                }

                    // SEGUNDO PUNTO DE LA HISTORIA
                    cout << "\nAl llegar a un pasillo cerca de la sala de control encuentras un remanente, una criatura sin descripción\n 1: Disparar\n 2: Correr y esquivarlo\n 3: Ns\n 4: Salir del juego\n";
                    cin >> eleccion2; 
                    if (eleccion2 == 1){
                    cout << "Aciertas, no sabes a qué parte, pero te da tiempo a huir de él. "; 
                    cout << raygun - 1;    
                    }
                    if (eleccion2 == 2) {
                        cout <<"El estruendo y horror de los lamentos del remantente retumban y te aturden, pero logras escapar de él";          
                        cout << raygun;
                    }
                    if (eleccion2 == 3){
                        cout <<"";
                    }
                    if (eleccion2 == 4){
                        return 0;
                    }
                        //TERCER PUNTO DE LA HISTORIA
                        cout << "\nlahblahblah\n 1: dadasda \n 2: adasdsa \n 3: vdrgd\n 4: Salir del juego\n";
                        cin >> eleccion3;
                        if (eleccion3 == 1){
                            
                        }
                        if (eleccion3 == 2){
                            
                        }
                        if (eleccion3 == 3){
                            
                        }
                        if (eleccion3 == 4){
                            return 0; 
                        }
                            //CUARTO PUNTO DE LA HISTORIA
                            cout << "skabksanfjndaofnosfoisskibiditoilet\n"; 
                            cin >> eleccion4; 
                            if (eleccion4 == 1){
                                cout << "MAMEEEEEESAYUDAAAA\n"; 
                            }    
                            if (eleccion4 == 2){
                                cout << "chacarrón\n";
                            }
                            if (eleccion4 == 3){
                                cout << "llamen a la patrulla porfavor\n";
                            }
                            if (eleccion4 == 4){
                                return 0; 
                            }
                            
                                //QUINTO PUNTO DE LA HISTORIA
                                cout << "y que de repente llega y que le dice\n"; 
                                cin >> eleccion5;
                                if (eleccion5 == 1){
                                    cout << "alkmdoiaoiw";
                                }
                                if (eleccion5 == 2) {
                                    cout << "snfjaknjfn"; 
                                }
                                if (eleccion5 == 3) {
                                    cout <<"Y de repente que pimpampum\n"; 
                                }
                            
                    
        
        break; 
        
        case 2: 
        srand((unsigned)time(NULL));
        int num, n;
        cout<<"Escoge numero"<<endl;
        cin>> num;
        n=rand()%6+1;
        cout<<"El numero es "<<n<<endl;
        system("PAUSE");
        return EXIT_SUCCESS;
        break; 
        
        case 3: cout << "Coming soon"; 
        break; 
        
        case 4: cout << "Creado por: Aguilar Avendaño Emiliano\nGrupo 1158\nTurno Vespertino\nCalificacion: 10"; 
        
        case 5: return 0; 
    }
    
    return 0; 
    
}

