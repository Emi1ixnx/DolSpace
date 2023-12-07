#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main () 
{

int eleccion = 0;
int dolspace = 0;
int raygun = 15; 
int eleccion2 = 0;
int eleccion3 = 0;
int eleccion4 = 0;
int eleccion5 = 0; 

 
    cout << "Dol Space\n";
    cout << "1: Modo historia\n2: Minijuego\n3: Multijugador\n4: Créditos\n5: Salir del juego\n";
    cin >> dolspace; 
    
    switch (dolspace) {
        //Comienza la historia :b
        case 1: cout << "Despiertas; toda la tripulación ha muerto, estás vagando solo por el espacio. No queda vida dentro de la nave. No hay luz ni energía.\nContigo portas una Raygun con quince cilindros de munición. Tienes quince disparos. Tu objetivo es escapar de la nave\n";
            // PRIMER PUNTO DE LA HISTORIA
            cout << "¿Qué es lo primero que haces?\n\n 1: Caminar entre los cuerpos\n 2: Gritar por ayuda\n 3: Dormir para recuperarte del dolor y cansancio que sientes\n 4: Salir del juego\n\n"; 
            cin >> eleccion; 
                if (eleccion == 1) {
                cout << "\nAl caminar, encuentras un cilindro más para tu Raygun\n"; 
                    raygun = raygun + 1; 
                    cout << "           ------Munición: "; cout << raygun << "------";
                }
                if (eleccion == 2) {
                    cout << "\nNadie responde, al parecer, estás completamente solo\n";          
                    cout << "           ------Munición: "; cout << raygun << "------"; 
                }
                if (eleccion == 3) {
                    cout << "\nAl despertar, te das cuenta que te falta un cilindro\n";
                    raygun = raygun - 1;
                    cout << "           ------Munición: "; cout << raygun << "------"; 
                }
                if (eleccion == 4) {
                    return 0;
                }
                    // SEGUNDO PUNTO DE LA HISTORIA
                    cout << "\n¿Qué ha pasado? ¿Por qué hay tanta gente muerta? ¿Por qué no hay luz? no logras recordar nada.\nDecides que lo mejor es activar el generador de corriente de la nave\n";
                    cout << "\nAl llegar a un pasillo encuentras un remanente, una criatura sin descripción\n 1: Disparar\n 2: Correr y esquivarlo\n 3: No moverte\n 4: Salir del juego\n\n";
                    cin >> eleccion2; 
                    if (eleccion2 == 1){
                    cout << "Aciertas, no sabes a qué parte, pero te da tiempo a huir de él.\n";
                    raygun = raygun - 1;
                        cout << "           ------Munición: "; cout << raygun << "------";
                    }
                    if (eleccion2 == 2) {
                        cout <<"El estruendo y horror de los lamentos del remantente retumban y te aturden al pasar a lado de él. Logras huir de ahí\nAl correr se te caen 2 cilindros\n";          
                        raygun = raygun - 2;
                        cout << "           ------Munición: "; cout << raygun << "------";
                    }
                    if (eleccion2 == 3){
                        cout << "Estando a unos metros de él, sientes una tristeza profunda. El tiempo que estás parado\nes irrelevante ante el miedo de lo que podría hacerte ésa figura apenas distingubile...\nFinalmente, se va\n"; 
                        cout << "           ------Munición: "; cout << raygun << "------";
                    }
                    if (eleccion2 == 4){
                        return 0;
                    }
                        //TERCER PUNTO DE LA HISTORIA
                        cout << "\nDespués de haber salido con vida de ese encuentro, te dispones a caminar entre escombros, y lo que supones que es sangre;\nencuentras una habitación y entras a ella\nAl entrar, encuentras a una persona, la distingues por la forma en cómo solloza, fuera de sí misma. Emanando desesperación.\n";
                        cout << "Al acercarte, la escuchas tomar su arma...";
                        cout << "\n\n 1: Le disparas \n 2: Preguntas si está bien \n 3: Huyes\n 4: Salir del juego\n\n";
                        cin >> eleccion3;
                        if (eleccion3 == 1){
                            cout <<"Matas a la persona\n";
                            raygun = raygun - 1; 
                            cout << "           ------Munición: "; cout << raygun << "------";
                        }
                        if (eleccion3 == 2){
                            cout <<"Al hablarle, la persona grita del susto, se vuelve loca. Entre gritos y palabras ininteligibles, se suicida\n";
                            cout << "           ------Munición: "; cout << raygun << "------";
                        }
                        if (eleccion3 == 3){
                            cout <<"Tus pasos, al escucharse con rapidez, asustan a la persona. Un disparo te roza la pierna. Decides disparar y aciertas\n";
                            raygun = raygun - 1; 
                            cout << "           ------Munición: "; cout << raygun << "------";
                        }
                        if (eleccion3 == 4){
                            return 0; 
                        }
                            //CUARTO PUNTO DE LA HISTORIA
                            cout << "\nAl parecer, ha ocurrido algo espantoso, lo suficiente para llevar a un humano a un estado sin remedio\nEscuchas, de su ropa, una voz... Un radio\n";
                            cout << "Apenas puedes distinguir lo que dice; decides avanzar al generador de energía mientras tratas de encontrar un lugar en donde mejore la señal\n";
                            cout << "El estruendo de los disparos han alertado a un ente, no suena como un remanente, es algo más peligroso, y se acerca con rapidez\n";
                            cout << " \n 1: Te escondes en la habitación\n 2: Lo esperas para enfrentarte\n 3: Usas el cuerpo de la persona como carnada\n 4: Salir del juego\n\n"; 
                            cin >> eleccion4; 
                            if (eleccion4 == 1){
                                cout << "Entra. No puedes distinguir nada de su silueta. Es como si fuera una sombra espesa. \nDespués de un tiempo, se aleja.\n";
                                raygun = raygun;
                                cout << "           ------Munición: "; cout << raygun << "------";
                            }    
                            if (eleccion4 == 2){
                                cout << "Al pararte a lado de la puerta, esperando a que llegue, disparas dos veces y, por golpes sordos, sabes que acertaste. Huyes de ahí.\n";
                                raygun = raygun - 2; 
                                cout << "           ------Munición: "; cout << raygun << "------";
                            }
                            if (eleccion4 == 3){
                                cout << "Cuando entra a la habitación, hace caso omiso del cuerpo.\nEl plan falló. Te limitas a disparar dos veces, y no sabes si aciertas, por lo tanto, disparas una vez más, dando con él. Huyes de ahí.\n";
                                raygun = raygun - 3; 
                                cout << "           ------Munición: "; cout << raygun << "------";
                            }
                            if (eleccion4 == 4){
                                return 0; 
                            }
                            
                                //QUINTO PUNTO DE LA HISTORIA
                                cout << "\nDas con la ubicación del generador, y entras\n";
                                cout <<"Cuatro remanentes, esparcidos por la gigantezca plaza en donde está el mecanismo para reestablecer la energía, vagan con pena\n";
                                cout << "El switch está en medio del lugar. Una especie de tubo enorme contiene, en su estructura, un simple switch\n";
                                cout << " \n 1: Ir en sigilo hacia el switch\n 2: Disparar a los remanentes\n 3: Lanzar un cilindro para despistarlos\n 4: Salir del juego\n\n";
                                cin >> eleccion5;
                                if (eleccion5 == 1){
                                    cout << "Pasas entre ellos. Llegas al switch \n";
                                    cout << "           ------Munición: "; cout << raygun << "------";
                                }
                                if (eleccion5 == 2) {
                                    cout << "Disparas a los 4 remanentes. Gritan y agonizan de dolor. Corres hacia el switch. No queda tiempo, en cuanto se recuperen irán por ti \n";
                                    raygun = raygun - 4; 
                                    cout << "           ------Munición: "; cout << raygun << "------";
                                }
                                if (eleccion5 == 3) {
                                    cout <<"Los remanentes, atraídos por el sonido del vidrio rebotando en el suelo, dirigen su atención y su figura hacia la fuente de sonido\n";
                                    raygun = raygun - 1; 
                                    cout << "           ------Munición: "; cout << raygun << "------";
                                }
                                if (eleccion5 == 4) {
                                    return 0;
                                }
                                // FINAL DE LA HISTORIA
                                cout << "\nAl accionar el switch, la energía vuelve. La luz te cega y, cuando tus ojos se acostumbran a la luz, los remanentes ya no están; la señal con la radio se hace clara\n";
                                cout << "\nLa voz te pide, llorando y suplicando, por una explicación. Al intentar hablar entre llantos y gritos de la persona al otro lado de la radio, decides\nrevisar lo que han grabado las cámaras";
                                cout << "\nMiras cómo corren tripulantes, desesperados, empujandose unos a otros huyendo; acto seguido, tú, apareciendo con un arma.\n";
                                cout << "\n¿Por qué lo hiciste?";
                            
                    
        
        break; 
        
        case 2:
        {
    int ingresado;
    int tripulante;
    int intentos = 0;
    
    srand(time(NULL)); 
    tripulante = 1 + rand () % (12); 
    
    cout << "Eres un remanente; sientes la presencia de un tripulante. Hay 12 habitaciones. Encuéntralo\n";
    
    do {
         cout <<"¿A qué habitación entras?\n";
         cin >> ingresado;
         
         if (ingresado > tripulante){
         cout << "Busca en una más abajo\n"; 
         }
         
         if (ingresado < tripulante) {
         cout << "Busca en una más arriba\n"; 
         }
        intentos ++;
    } while (ingresado != tripulante);
    
    cout <<"Lo atrapaste, es tuyo\n"; 
    cout << "Buscaste: " << intentos << " veces";
    }
    return 0; 
        break; 
        
        case 3: cout << "Conexión inestable\nintente en otro momento"; 
        break; 
        
        case 4: cout << "Creado por: Aguilar Avendaño Emiliano\nGrupo 1158\nTurno Vespertino\nAgradecimientos especiales a: \n- Ian Madariaga por mostrarme la función para controlar los cambios de una variable mediante las decisiones \n- Fátima Malagón por la historia del tercer acto"; 
        
        case 5: return 0; 
}
    
    return 0; 
}