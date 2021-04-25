#include <iostream>
#include <cmath>
#include <random>

using namespace std;

bool movimiento;
int primermovimiento;
int pv = 10;

void menupr();
void instrucciones();
void juegopr();
void moverte();
void nomoverte();

int main() {

    menupr();
    juegopr();
    if (movimiento=true && primermovimiento==1)
    {
        pv--;
        moverte();
    } 
    if (movimiento=true && primermovimiento==2)
    {
        nomoverte();
    };
    
    
    return 0;
}





void menupr() {


    bool repite= true;
    int opcion;

    do
    {
        //Título del juego
        system("clear");
        cout<<R"(
                     .          .    .     .WWNMo      .          . .    .....  .        .      . ..oMK. 
                                          .';WW'.. .''         ''.      ',OMNW0                    xMNW0  
                  .;;.            .        ;MNKK.   :MW:;.     .NM: . .;;KMXKd             . .;,    xMo    
                  :MNcc.        ,c,    .   ;MX.     :MWNM;     .NM: 'clWWO0, .cccccc'      ;ckMO  . xMo .  
                  :MWNM;        dMd .oo.   ;MX.   ,ookxNM;     .NMkokMNkx.   ;MNkkxk;      OMNMKol. xMo    
               ;xOMWNMkx;      dMd 'MMkx' ;MX    oMk  XMkx;   .NMNMWMNxd.   ;MNxxdxdx:    OMOdxMN. xMo    
               oMKolloKMo      dMKkkMMWM: ;MX    oMXkkNMWMo   .NMkolooWW.   ;MNoololo;    OMo 'MWkkXMo    
               lMk    OMK0x    dMWMKccXMK00MX. d0XM0c::cKMo   .NM: . .WWO0, ;MX.          OMo .ccNMWMo    
               oMNXK0XNMNM0    dMWMO  ,;OMNMX. 0Mk;'    OMo 'XKWM: . .;;KMXXKMNXXKX0Xd  OXNMo   .NMWMo .  
               lMO''''''oMWWX. dMWMO    .'cMX. 0Mo      OMNWXMN,'. .    .'OMO''',''''. .XMc'.    ''''.    
               ...      ..;MN. .....      ...  ...      .......    . .    ...           ...      .     .  
        )";
        cout<<R"(
                                                      ......',;;:;,,'...,''...                           
                                       ..,;::;;;cldddoooodoooodooccccc:,'..                     
                                    ..,:cllcclooolc:'......    .,colcodol::::,'.                 
                                 ...;clddoll:,;,',loodkO0KK0Okxxkxxddoccolllolc;:;...             
                              .',;oxdo:',;clxk0XNNNWWWWWMMMMWMWMMMWNK0kxkoc;;codd:',,..          
                           ..;ldol:'':ldxdl:cOXKXXXXNXNXNNNWWNNWNXXXWMMMNxxkkxxxl:cdxo:'.         
                        ..:ll;';:lodol;....N0KNNNKXXXNMMMMM0odNKNXXKKWNMMdloldddkdc;;codl,.      
                        ..':c:oO0kc.... .. lXK0XNNWNOMMMMMMMXk0MXNKKNX0KMMOoc;;,,cldxxc,...''..   
                     .:;lxxoc:..dll.       'N00KXNXNKKNMMMMMMMWNXXXXKXXXMMo...  ..;lkKo,..        
                     ...;cooodddxl:d:,..... ,0KXKKXNXNXKXXXNNXXXXXXKX0XWNc  ...,;:;llc,...        
                           ....,;:cloolc;,...:kKXK0XXXXKXNXXKXXXKKXXW0l...';llccool:,,'.         
                                 ....:lllcllcc;;cdd00NXXKKKXXXXXKkdc,',:clclclc;,.               
                                       ..,;cloll:cllc:clcllllc:::cclolcllllc::,.                  
                                          ..',:::::;,:cloolooollc:;;;'','..                     
                                                   ........'''...........                         
        )";
        //Opciones del menú principal
        cout<<"\n\n\n\t\t\t1) Jugar";
        cout<<"\t\t2) Instrucciones";
        cout<<"\t\t0) Salir";
        cout<<"\n\n\n\n\n\n\n\n¿Qué opción eliges?";
        cin>>opcion;

        switch (opcion)
        {
        case 1:
            repite=false;
            break;
        case 2:
            instrucciones();
            break;
        case 0:
            exit(EXIT_SUCCESS);
            repite=false;
            break;
        default:
            break;
        }
    } while (repite);
    
}
void instrucciones() {
    bool repite= true;
    int opcion;

    do
    {
        system("clear");
        cout<< R"(
                
                            __,  _,  _, __, __, _ ___   _,_  _,  _,   _,_ _, _  _, _,_  _, _, _
                            | \ / \ / ` |_  |_) |  |    | / / \ (_    | | |\/| / \ | | /_\ |\/|
                            |_/ \ / \ , |   |_) |  |    |/  \ / , )   | | |  | \\/ | | | | |  |
                            ~    ~   ~  ~~~ ~   ~  ~    ~    ~   ~    `~' ~  ~  ~` `~' ~ ~ ~  ~
                                                                                            
                            _,  _, _, _ _, _ _ _,_ _, _   _ ___ _ _, _ __, __, _ __, _,_  _,
                            (_  / \ |\/| |\ | | | | |\/|   |  |  | |\ | |_  |_) | |_) | | (_ 
                            , ) \ / |  | | \| | | | |  |   |  |  | | \| |   | \ | |_) | | , )
                            ~   ~  ~  ~ ~  ~ ~ `~' ~  ~   ~  ~  ~ ~  ~ ~~~ ~ ~ ~ ~   `~'  ~ 
        )";
        cout<<"\n\n\t\t\t\t\"El sueño te guiará a caminos jamás vistos...\"";
        cout<<"\n\n\n\n\tAcabas de despertar y no estás seguro de lo que sucede.";
        cout<<"\n\tSé cautelosx, cada movimiento y decisión afectará directamente el porcentaje de tu vida.\n";
        cout<<"\n\tRecuerda: No estas SOLX. Sigue la voz y llegarás a tu destino.\n";
        cout<<"\n────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────";
         cout<<"\n\n\n\tAWAKEN es una aventura conversacional creada por Carla Torrejón, Nadia Melyna y Joshua Frías para el primer";
         cout<<"\n\tcuatrimestre de Informática General en la Universidad Nacional de Artes, 2021,";
         cout<<"\n\n────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────";
        //Opciones del menú principal
        cout<<"\n\n\n\t\t\t1) Jugar";
        cout<<"\t\t2) Regresar";
        cout<<"\t\t0) Salir";
        cout<<"\n\n\n\n\n\n\n\n¿Qué opción eliges?";
        cin>>opcion;

        switch (opcion)
            {
            case 1:
                repite=false;
                break;
            case 2:
                repite=false;
                break;
            case 0:
                exit(EXIT_SUCCESS);
                break;
            default:
                break;
        }
    } while (repite);
    
};
void juegopr() {
    
    bool paso=true;
    int elegir;
    do
    {
        system("clear");
        cout<< "\n\n\tAcabas de despertar y no estás segurx de lo que recuerdas. \n\tNo sientes tus manos ni tus piernas.\n\tLa habitación esta oscura.\n";
        cout<<"\n\tEscuchas un sonido.\n";
        cout<<"\n\n\t\tSusurro: ~No te muevas~";
        cout<<"\n\n\n\n\t¿Qué decides hacer\?";
        cout<<"\n\n\n\n\t\t\t1)Moverte";
        cout<<"\t\t2)No moverte\n\n";
        cout<<"\nDecidiste:";
        cin>>elegir;

        switch (elegir)
        {
        case 1:
            movimiento=true;
            primermovimiento=1;
            paso=false;
            break;
        case 2:
            movimiento=true;
            primermovimiento=2;
            paso=false;
            break;
        default:
            break;
        }
    } while (paso);
    
};

void moverte() {
    system("clear");
    cout<< R"(
                                    ░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░
                                    ░░░░░░░█████████████████████████░░░░░░░░
                                    ░░░░░░░██████████░░░░░██████████░░░░░░░░
                                    ░░░░░░░█████████░░░░░░░█████████░░░░░░░░
                                    ░░░░░░░█████████░░░░░░░█████████░░░░░░░░
                                    ░░░░░░░█████████░░░░░░░█████████░░░░░░░░
                                    ░░░░░░░███████████░░░███████████░░░░░░░░
                                    ░░░░░░░███████████░░░███████████░░░░░░░░
                                    ░░░░░░░███████░█░░░░░░░█░███████░░░░░░░░
                                    ░░░░░░░██████░░░░░░░░░░░░░██████░░░░░░░░
                                    ░░░░░░░██████░░░░░░░░░░░░░██████░░░░░░░░
                                    ░░░░░░░██████░░░░░░░░░░░░░██████░░░░░░░░
                                    ░░░░░░░██████░░░█░░░░░░█░░██████░░░░░░░░
                                    ░░░░░░░██████░░░█░░░░░░█░░██████░░░░░░░░
                                    ░░░░░░░██████░░██░░░░░░█░░██████░░░░░░░░
                                    ░░░░░░░██████░░██░░░░░░█░░██████░░░░░░░░
                                    ░░░░░░░██████░░██░░░░░░█░░██████░░░░░░░░
                                    ░░░░░░░█████░░███░░██░░█░░░█████░░░░░░░░
                                    ░░░░░░░███░░░████░░██░░██░░░████░░░░░░░░
                                    ░░░░░░░███░░░████░░██░░████░░███░░░░░░░░
                                    ░░░░░░░██░░██████░░██░░█████░░██░░░░░░░░
                                    ░░░░░░░█░░███████░░██░░█████░░██░░░░░░░░
                                    ░░░░░░░█░░███████░░██░░██████░██░░░░░░░░
                                    ░░░░░░░██████████░░██░░█████████░░░░░░░░
                                    ░░░░░░░██████████░░██░░█████████░░░░░░░░
                                    ░░░░░░░███████████░██░██████████░░░░░░░░
   )";
   cout<<"\nObservas una silueta negra amorfa ingresar a tu cuarto que empieza a vociferar algo indescifrable. \n";
   cout<<"QUIERES GRITAR Y NO PUEDES.\n";
   cout<<"\n\n¿Dejaste tu cuerpo atrás\? Tal vez. Ya no lo sientes\n";
   cout<<"Observas hacia abajo y ves tu cuerpo echado en tu cama.\n";
   cout<<"Estas dormido, pero estas seguro que esto no es un simple juego.\n";
   cout<<"\n\tSusurro: Debes seguir el camino.\n";
   cout<<"\nVidas: "<<pv;
};

void nomoverte() {
    system("clear");
      cout<<"Observas la hora en el reloj de mesa 3am.\n";
      cout<<"Susurro: Hiciste bien, no te hubiera gustado ver lo que hubiera ingresado por esa puerta."; 
      cout<<"\n\t1)¿Quién eres?";
      cout<<"\n\t2)¿Dónde estoy?";
      cout<<"\nVidas: "<<pv;
}