//Torrejón Torres Carla
//Torrejón Torres Nadia
//Frías Hernández Joshua

#include <iostream>
#include <cmath>
#include <random>
#include <thread>
#include <chrono>

using namespace std;

bool movimiento;
int primermovimiento;
int pv = 10; //Vidas
int puerta;
//Falta float 
//Falta poner or ||
//Constane enumerada

void menupr();
void instrucciones();
void juegopr();
void moverte();
void nomoverte();
void quieneres();
void dondeestoy();
void puertas();
void puertacorrecta();
void puertaincorrecta();
void escaleras();
void interaccion_fantasma(); //Próximo a desarrollar
void aceptar_fantasma();    //Próximo a desarrollar
void rechazar_fantasma();   //Próximo a desarrollar
void espejo();  //Próximo a desarrollar
void cruzandoespejo_aceptar_fantasma(); //Próximo a desarrollar
void cruzandoespejo_rechazar_fantasma();    //Próximo a desarrollar
void desafiofinal();    //Próximo a desarrollar
void finganar();    //Próximo a desarrollar
void finperder();   //Próximo a desarrollar

int main() {

    menupr();
    juegopr();
    if (movimiento=true && primermovimiento==1)     //Te meves
    {
        pv--;
        moverte();
        puertas();
        if (puerta == 100)
        {
            puertaincorrecta();
        } else if (puerta == 300) {
            puertacorrecta();
        };
        escaleras();      
    } 
    if (movimiento=true && primermovimiento==2)     //No te mueves
    {
        nomoverte();
        puertas();
        if (puerta == 100)
        {
            puertaincorrecta();
        } else if (puerta == 300) {
            puertacorrecta();
        };
        escaleras();
    };
    
    
    return 0;
}





void menupr() {


    bool repite= true;
    int opcion;

    do
    {
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
        cout<<"\n\n\n\n\n\n\n\n¿Qué opción eliges?  ";
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
        cout<< R"(                                                                                                                        
                                     .......................                                                            
                               .:lllll;:do'....;xxxxxd;dxl.....:oolcc;',,.                                              
                               .;:;'''.oXXc....ckkl,,,,KNK,....:ol,...'::,.                                             
                                .......dXXl....dNNd...,KNK,....xKO,   .::,                                              
                                .......oXNo.od.xWWx...,KWX,....xK0,   .::,                                              
                                .'cloodx0kc.,,.lko,....;od'....ll,.   ..''                                              
                                ..,::ccd00o.;:.o0k:....lkO,....odc.   .','                                              
                                .......lNWx.lo.dWWk...'XWN;....kX0,   .c:,                                              
                                .......lNNk....lXNx...'XWN;....dOk'   .c:,    '.......  .                               
                               .cxxoloclNNk....cKKOdddcKWX,....lxdc:;,'c:,   .'.........                                
                                .;::cc:'cc,.....looooo;cl:..  .,:::;;'....    .                                         
                                    ......................                                                              
                                                ....                                                                    
        )";
        cout<< "\n\nAcabas de despertar y no estás segurx de lo que recuerdas.\nNo sientes tus manos ni tus piernas.\nLa habitación esta oscura.";
        cout<<"\nEscuchas un sonido.\n";
        cout<<"\n\n~Susurro: ¡No te muevas!";
        cout<<"\n\n\n\n\n¿Qué decides hacer\?";
        cout<<"\n\n\n\t\t\t1)Moverte";
        cout<<"\t\t2)No moverte";
        cout<<"\n\n\n\n\n\n\n\n\n\nDecidiste:  ";
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
    int continuar;
    do
    {
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
    cout<<"\nSusurro: Debes seguir el camino.\n";
    cout<<"\nVidas: "<<pv;
    cout<<"\nIngresa 1 para continuar:  ";cin>>continuar;
    } while (!continuar);
    
};
void nomoverte() {
    
    bool repite=true;
    int opcion;

    do
    {
        system("clear");
        cout<< R"(                                                                                                                        
                                     .......................                                                            
                               .:lllll;:do'....;xxxxxd;dxl.....:oolcc;',,.                                              
                               .;:;'''.oXXc....ckkl,,,,KNK,....:ol,...'::,.                                             
                                .......dXXl....dNNd...,KNK,....xKO,   .::,                                              
                                .......oXNo.od.xWWx...,KWX,....xK0,   .::,                                              
                                .'cloodx0kc.,,.lko,....;od'....ll,.   ..''                                              
                                ..,::ccd00o.;:.o0k:....lkO,....odc.   .','                                              
                                .......lNWx.lo.dWWk...'XWN;....kX0,   .c:,                                              
                                .......lNNk....lXNx...'XWN;....dOk'   .c:,    '.......  .                               
                               .cxxoloclNNk....cKKOdddcKWX,....lxdc:;,'c:,   .'.........                                
                                .;::cc:'cc,.....looooo;cl:..  .,:::;;'....    .                                         
                                    ......................                                                              
                                                ....                                                                    
        )";
        cout<<"\n\tObservas la hora en el reloj de mesa:\t\t\t\t\t\t3:00 am.\n\n\n";
        cout<<"\n\n\t\tSusurro: Hiciste bien, no te hubiera gustado ver lo que hubiera ingresado por esa puerta."; 
        cout<<"\n\n\n\t\t\t1) ¿Quién eres?";
        cout<<"\t\t2) ¿Dónde estoy?";
        cout<<"\t\t3) Continuar con el viaje";
        cout<<"\nVidas: "<<pv;
        cout<<"\n";
        cin>>opcion;

        switch (opcion)
        {
        case 1:
            quieneres();
            break;
        case 2:
            dondeestoy();
            break;
        case 3:
            repite=false;
            break;
        default:
            break;
        }
        
    
    } while (repite);
}
void quieneres() {
    
    bool paso=true;
    int opcion;

    do
    {
        system("clear");
        cout<<"Aún no estas listo para saberlo.\n";
        cout<<"\n\n\n\t\t\t\t\t1)¿Dónde estoy?";
        cout<<"\t\t2)Volver";
        cout<<"\n";
        cin>>opcion;

        switch (opcion)
        {
        case 1:
            dondeestoy();
            break;
        case 2:
            paso=false;
            break;
        default:
            break;
        }

    } while (paso);
    
};
void dondeestoy() {
    
    bool paso=true;
    int opcion;

    do
    {
        system("clear");
        cout<<"\n\tEstas en camino a saberlo...";
        cout<<"\n\tNunca olvides la hora.";
        cout<<"\n\n\n\t\t\t\t\t1)¿Quién eres?";
        cout<<"\t\t2)Volver";
        cout<<"\n";
        cin>>opcion;

        switch (opcion)
        {
        case 1:
            quieneres();
            break;
        case 2:
            paso=false;
            break;
        default:
            break;
        }
    } while (paso);
    
};
void puertas() {
    
    bool next =true;
        while (next == true)
        {
            system("clear");
            cout<<"Recorres un largo y frio pasillo confundidx por el hecho de no tener una forma corpórea.";
            cout<<"Observas siluetas avanzando junto a ti, más adelante hay dos puertas que llaman tu atención.";
            cout<<"\n\nTe acercas";
            cout<<R"(
                                  _______________                           _______________
                                 |\ ___________ /|                         |\ ___________ /|
                                 | |  _ _ _ _  | |                         | |  _ _ _ _  | |
                                 | | | | | | | | |                         | | | | | | | | |
                                 | | |-+-+-+-| | |                         | | |-+-+-+-| | |
                                 | | |-+-+=+%| | |                         | | |-+-+=+%| | |
                                 | | |_|_|_|_| | |                         | | |_|_|_|_| | |
                                 | |    ___    | |                         | |    ___    | |
                                 | |   [___] ()| |                         | |   [___] ()| |
                                 | |    100    | |                         | |    300    | |
                                 | |         ||| |                         | |         ||| |
                                 | |         ()| |                         | |         ()| |
                                 | |           | |                         | |           | |  
                                 | |           | |                         | |           | |
                                 | |           | |                         | |           | |
                                 |_|___________|_|                         |_|___________|_|
            )";
            cout<<"\n\nElegiste:  ";
            cin>>puerta;

            switch (puerta)
            {
            case 100:
                pv -=2;
                next=false;
                break;
            case 300:
                next=false;
                break;
            default:
                break;
            }
        }
}
void puertacorrecta() {
    bool paso=true;
    int select;
    
    do
    {
       system("clear");
       cout<< R"(
                                                      ______________
                                                    |\ ___________ /|
                                                    | |  /|,| |   | |
                                                    | | |,x,| |   | |
                                                    | | |,x,' |   | |
                                                    | | |,x   ,   | |
                                                    | | |/    |===| |
                                                    | |    /] ,   | |
                                                    | |   [/ ()   | |
                                                    | |       |   | |
                                                    | |       |   | |
                                                    | |       |   | |
                                                    | |      ,'   | |
                                                    | |   ,'      | |
                                                    |_|,'_________|_|
        )";
        cout<<"\n\nUn viento helado escapa al abrir la puerta.";
        cout<<"\nNo parece haber ningún peligro";
        cout<<"\n\n~Susurro: ¡Sigue avanzando! Estás más cerca de lo que crees";
        cout<<"\nVidas:"<<pv;

        cout<<"\n\nIngresa 1 para continuar:  ";
        cin>>paso;
        if (select == 1) {
            system("clear");
            paso=false;
        }
    } while (paso);
    
    
    
};
void puertaincorrecta() {
    bool paso=true;
    int select;
    
    system("clear");
    pv -=2;
    do
    {
        cout<<"Sientes los pasos pesados y la respiración más lenta, unas siluetas vuelven a cruzar por medio tuyo.\n";
        cout<<"De repente una silueta te ataca";
        cout<<"Susurro: Se cuidadoso. Recuerda y observa. Cada vida perdida aquí, es un paso más a lo desconocido.";
        cout<<pv;
        cout<<"\nIngresa 1 para continuar:\t";
        cin>>select;
        if (select == 1) {
            paso=false;
        }
    } while (paso);
};
void escaleras(){
    int i;
    
    for(i=1;i<=10;i++)

    {
        std::this_thread::sleep_for(std::chrono::milliseconds(1000));
        cout<<"has subido un escalón\n";
    }

    if (i=10)
    {
        int cerca;
        
        do
        {
            system("clear");
            cout<<"Llegaste al final de las escaleras";
            cout<<"\nA lo lejos ves una figura que te está llamando";
            cout<<"\nIngresa 1 para acercarte";
            cin>>cerca;
        } while (!cerca);
        
    }
    
};