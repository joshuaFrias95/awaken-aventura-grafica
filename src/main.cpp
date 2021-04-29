//Torrejón Torres Carla
//Torrejón Torres Nadia
//Frías Hernández Joshua

#include <iostream>
#include <cmath>
#include <random>
#include <thread>
#include <string>
 
using namespace std;

bool movimiento;
bool ayudar;
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
void interaccion_fantasma();
void help();    
void nohelp();   
void espejo();  //Próximo a desarrollar
void cruzandoespejo_aceptar_fantasma(); //Próximo a desarrollar
void cruzandoespejo_rechazar_fantasma();    //Próximo a desarrollar
void desafiofinal();    //Próximo a desarrollar
void finganar();    //Próximo a desarrollar
void finperder();   //Próximo a desarrollar

int main() {

    menupr();
    juegopr();
    if (movimiento=true && primermovimiento==1)     //Te mueves
    {
        pv--;
        moverte();
        puertas();
        if (puerta == 100)
        {
            puertaincorrecta();
        } else if (puerta == 300) {
            
            puertacorrecta();
            interaccion_fantasma();

            if (ayudar==true)
            {
                help();
                espejo();
            } else if (ayudar==false)
            {
               nohelp();
            }
            
            
        };
        //escaleras(); 
        
        
        
         
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
        cout<<"\n\n\n\n\n\n\n\n¿Qué opción eliges?  \a";
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
        cout<<"\n\tSe cautelosx, cada movimiento y decisión afectará directamente el porcentaje de tu vida.\n";
        cout<<"\n\tRecuerda: No estas SOLX. Sigue la voz y llegarás a tu destino.\n";
        cout<<"\n────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────";
         cout<<"\n\n\n\tAWAKEN es una aventura conversacional creada por Carla Torrejón, Nadia Melyna T y Joshua Frías para el primer";
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
        cout<<"\n\n~Susurro: No te muevas~";
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
    cout<<"\nObservas a una silueta negra amorfa acercarse lentamente a la habitación.De pronto empieza a vociferar algo indescifrable. \n";
    cout<<"~QUIERES GRITAR Y NO PUEDES.~\n";
    cout<<"\n\n¿Dejaste tu cuerpo atrás\? Tal vez. Ya no lo sientes\n";
    cout<<"Observas hacia abajo y ves tu cuerpo acostado en tu cama.\n";
    cout<<"Estas dormido, pero estas seguro que esto no es un simple sueño.\n";
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
        cout<<"\n\t Abres los ojos y observas con dificultad la hora en el reloj de mesa:\t\t\t\t\t\t3:00 am.\n\n\n";
        cout<<"\n\n\t\tSusurro: ~Hiciste bien, no te hubiera gustado ver lo que se hubiera asomado por esa puerta.~"; 
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
        cout<<"\n\t~Pronto lo sabrás...~";
        cout<<"\n\t~Nunca olvides la hora.~";
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
            cout<<"Recorres un largo y oscuro pasillo confundidx por el hecho de no tener una forma corpórea.";
            cout<<"Observas siluetas avanzando junto a ti. De pronto, observas dos puertas que llaman tu atención.";
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
        cout<<"\n\n~Un viento helado escapa al abrir la puerta.~";
        cout<<"\nNo encuentras nada en la habitación";
        cout<<"\n\n~Susurro: ~Sigue avanzando...Estás más cerca de lo que crees~";
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
        cout<<"Sientes que tus pasos se tornan más pesados y la respiración más lenta. Unas siluetas amorfas cruzan tu camino.\n";
        cout<<"~Sientes como una silueta se acerca y empieza a gritar con diferentes voces desgarradoras, pierdes la noción del sonido.";
        cout<<"Susurro:~ Recuerda y observa. Cada vida perdida aquí, es un paso más a lo desconocido.~";
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
    string escalones[] = {
        "Subiste al primer escalón",
        "Subiste al segundo escalón",
        "Subiste al tercer escalón",
        "Subiste al cuarto escalón",
        "Subiste al quinto escalón",
        "Subiste al sexto escalón",
        "Subiste al séptimo escalón",
        "Subiste al octavo escalón",
        "Subiste al noveno escalón",
        "Llegaste al final de la escalera"
    };

    
    for(int i=0;i < 10;i++)
    {
        std::this_thread::sleep_for(std::chrono::milliseconds(1000));
        system("clear");
        cout<<escalones;
        
    }

    if (i=10)
    {
        int cerca;
        
        do
        {
            system("clear");
            cout<<"~Llegaste al final de las escaleras~";
            cout<<"\nA la distancia observas una siluesta borrosa suplicando que te acerques";
            cout<<"\nIngresa 1 para acercarte";
            cin>>cerca;
        } while (!cerca);
        
    }
    
};
void interaccion_fantasma() {
    int option;
    int continuar;
    do
    {
        system("clear");
        cout<< R"(                                              ,'oOMMMW0xlokKNMMWK:        .:   
                                             .c0NWWKx:'. .':c:;cokXXxc.      ..  
                                          ..,oKMXd.    .;cd0Odlclold0Wk.      .  
                                         .ldkNNd..,.  .lOKK0KKOOk0K00ONXd'       
                                       ..oNNWXldkOldlloOWKN0kK0XNKOO0l,0WXk,     
                                         '0MWdl00X0WXXXKxldkl;':okd:,,'.0MNx.    
                                         .xWX;ckOOkkld:o'...   ..:',..'',WNOc.   
                                        cxWM0.',:c'' ..           . .....dMW0d'  
                                      .;ooOMo   ..                ..     'WMM0c  
                                          :Nd            .;llc:l.. .      xWKO'  
                                         .kWO    ....lcd;,':o;OXl. ..     ,WNx   
                                          lXX' .::ol.:OONKoxNOOWd. .       KWNo. 
                                         .lXWl. .lck:xWXMMMMMMkXk.         xMMO' 
                                    . .. ;NMMx ..:oKKd0000WMMMNxd.         cMWO. 
                                         ,lXMO ...,dNx0OddllxWNdo          .NMK;.
                                        '..xW0  ....c0o:...,,OK:.           dMWd 
                                         .'0Mk. ......,.,cklk,:   .         .KW0;
                                       ';cXMMd'.. .       ... .....          'NMO
                                      ..'dXMW;.   .     .''.;ox;.. .          cWW
                                        .l0Mk':  .. ..cXNNll'cXl;;. .  . '....cOX
                                      .;dNX0,,;. . .':kWNcd::XK;l.'... ' ,,..'cNK
                                     .;0WO0d.l,.   ,,xOMX;Wlkcx,:.,. . '..,.,'x:0
                                    ..oWOKKccc'    clKKM0;WlWd,c,...  .,..c;'::lx
                                     .dNkNo0cc'.. .coNXMdoMlW;.c.;'.. c.',lO'o,Wx
                                      ;0kNlX:o.;.. c:WNM;0WlW' c,;..' 0..;lK'dcN0
)";
        cout<<"\nAl acercarte ves que es una niña. No puedes verle el rostro.\nDe pronto te dice algo casí indescifrable.\n ";
        cout<<"\nEn voz baja te susurra:\n\n\t\tP͖̃ensé ͙̻̤ͧ͊ͩqu̥̫ͧ͆ẽ̫͖̓ n̠ͧo t̰̗̝̃̑͌ẻ̼̳̪̈͂ ͉͚̦͆ͫ̔a͚c̪̥͎er̮̰̠ͫͭ̆c̝͙̩̓̐̃a̜ͮr͎ḭ́̃aͪs͖̝͆̅.̰ͭ. ̩͛¿̯̦ͮ͂Pṳ̙ed͆̚e͈ͅs͓̭͖͐̐̒ ay͇͎͑̚ụ̭̟̽̎̆darḿ͙è͍?ͮ͗̒ ̜̩̭̓͑͋n̟͒ẹ̝̐ͦc͖͙͓ͨͤͪe͍͖̮͆͒̂s̓͌̋i̫͎̖to͚̟̽͂ vo̦l͆v̘ͪer ͑a̼̠͎̍͐͐ ̬͍͙̀̒ͫc̲á͍͍̘̽͗sͯa ̙̲͎es ͉̐m̊u̲̝͋̔y ͓͓͕t̤̱̳͆̋ͯå͈͓̣̂͐rd͚̮̋̌̾ͅe̋̽̌\n\n";

        cout<<"\n¿Que deseas hacer?\t\t";
        cout<<"\n\n1) Ayudar\t 2)No ayudar\n";
        cin>>continuar;

        switch(continuar)
        {
        case 1:
            ayudar=true;
            break;
        case 2:
            ayudar=false;
            break;
            default:
            break;

    }
    } while (!ayudar);

};
void help(){
    int seguir;
    do{
        system("clear");
        cout<<"\n";
       cout<< R"(                                        00O000O000KKKXXXXXXXXXXXNNNXXXXXNNNNXNXXXXXXN
                                        XKKXKKKKKKXXXXNXK0OkkxkO0XNNXXXXNNNNXXNNNNNXX
                                        K0KKXKKKKXXKxc;..   ..   ..,cd0XNNNNXXNXXNNNX
                                        XXXXXKXXKo,...    ..,;,.    ...,cxKXXXKK0XKXX
                                        KXXXXXO:.... .';cx00KWWNkc;,';,:l;:xKXXXKXKXN
                                        XXXXXl;ldl,.':oOXXW0NMMWWKdxkc,;co,'lOXXXNXXN
                                        XXKK: .,cl,;lkOK0KOOXMWNK0Oxk0o......lKNXNNNX
                                        KKKx.  ...,cddkxx0OxXWN0KOxxddd;.. ...dXXXNXN
                                        KKKc.     ,doxkxxk0ONMWXKxxkOkxO:. ..'dXNXXNN
                                        XK0;.     .00XKxxNNXNMWXNxxNWNOO,  ...c0NXXNN
                                        0OO:.     .x0NNNXK000XKKOKXNKkcl'  ...,ckOKNN
                                        xO0l.      :,',;;oxxxxxxdc:l;':d......,;odoxO
                                        xkx;.      .o'';c;;OOxOkc.c,:ld. .....:;okxoo
                                        000c;       .:lc:l.lOK0x;.coxc.  .....;;cxkdo
                                        dxc,,        .'lxl:;:l:;;:dOcc.  . ....,':cc:
                                        ;;.'.        '..'xkolccloxxccd,. .......':oxO
                                        ,,..       ......,d0xlcoc;cxxdc'. .......;cdk
                                        o....  ..  ....clcldkKkoodxKdll,... .....'cll
                                        Kx,..  ...  ..clodkO0xxcdkkllkxl'..........;:
                                        Xkl '. ... ..;:ccccodl,xkNO:,kNNK;..........;
                                        XO:.... ......''',,;:,'dOxKXXKNNNX,.........,
                                        Xk'..,,.  .... ..'.,:'.cxkk0KNNNX0:........':
                                        NO;,..:... ........,,:c;;;;:ldoddlc.......:'.
                                        XXd:l,,;.:...          ....... ..;:.''.,.',,'
                                        NXx;O,,:'cd.                      ..,c.l..'.;)";
        pv-=2;
        cout<<"\n\n\tDe pronto la voz de la niña se torna gruesa y te grita:\n\n\t\t ¡ Ah̟̞̪̻̖̻̤̣̩o̬̬̘̯̺͎̹͍̤̪̤̓̑̄ͩͪ͐̓ͫ̾ͤ͆ͩͅr̺̻̄͐å̪̼̻̣̥͉̮̟̜̩͙̭͚̜̎̋ͣͭ͌̅͆̀͗ͦ͒̓ͮ ̼͕̟̺̞̘͙͕̰ͭ̆ͪ̑͛ͩͩ̂͆a͍̞ͫ̋l̙̣̠̞̜̘̝̣͒̇͗ͩ̆̽̇ͪé̘͔͍̜́͊̿̿j̺̳̹̯̤̗͓͖̺͕̟̼ͣ̈́̇̅͒̎͐̋͆̀̑ͮa̘̰̩̭̭̘͖͎̭t̤̰̯̠͈̣̜͉̗̞͍̹͉̘ͭ͌̏̅ͥ̽͊̀ͨ̈ͤ̀̄͌e͇͇͖̠̘͕̟̙̟̲̩̰̓͗ͩͧͦͮ͛̓ͤ̅̈́̽ͧͅ !\n\n"; 
        cout<<"Perdiste dos de tus vidas.\n";
        cout<<"Vidas: "<<pv;
        cout<<"\nIngresa 1 para continuar:  ";
        cin>>seguir;

        


    } while(!seguir);

}
void nohelp(){
    int seguir;

    do{
        system("clear");
         cout<< R"(                                        00O000O000KKKXXXXXXXXXXXNNNXXXXXNNNNXNXXXXXXN
                                        XKKXKKKKKKXXXXNXK0OkkxkO0XNNXXXXNNNNXXNNNNNXX
                                        K0KKXKKKKXXKxc;..   ..   ..,cd0XNNNNXXNXXNNNX
                                        XXXXXKXXKo,...    ..,;,.    ...,cxKXXXKK0XKXX
                                        KXXXXXO:.... .';cx00KWWNkc;,';,:l;:xKXXXKXKXN
                                        XXXXXl;ldl,.':oOXXW0NMMWWKdxkc,;co,'lOXXXNXXN
                                        XXKK: .,cl,;lkOK0KOOXMWNK0Oxk0o......lKNXNNNX
                                        KKKx.  ...,cddkxx0OxXWN0KOxxddd;.. ...dXXXNXN
                                        KKKc.     ,doxkxxk0ONMWXKxxkOkxO:. ..'dXNXXNN
                                        XK0;.     .00XKxxNNXNMWXNxxNWNOO,  ...c0NXXNN
                                        0OO:.     .x0NNNXK000XKKOKXNKkcl'  ...,ckOKNN
                                        xO0l.      :,',;;oxxxxxxdc:l;':d......,;odoxO
                                        xkx;.      .o'';c;;OOxOkc.c,:ld. .....:;okxoo
                                        000c;       .:lc:l.lOK0x;.coxc.  .....;;cxkdo
                                        dxc,,        .'lxl:;:l:;;:dOcc.  . ....,':cc:
                                        ;;.'.        '..'xkolccloxxccd,. .......':oxO
                                        ,,..       ......,d0xlcoc;cxxdc'. .......;cdk
                                        o....  ..  ....clcldkKkoodxKdll,... .....'cll
                                        Kx,..  ...  ..clodkO0xxcdkkllkxl'..........;:
                                        Xkl '. ... ..;:ccccodl,xkNO:,kNNK;..........;
                                        XO:.... ......''',,;:,'dOxKXXKNNNX,.........,
                                        Xk'..,,.  .... ..'.,:'.cxkk0KNNNX0:........':
                                        NO;,..:... ........,,:c;;;;:ldoddlc.......:'.
                                        XXd:l,,;.:...          ....... ..;:.''.,.',,'
                                        NXx;O,,:'cd.                      ..,c.l..'.;)";
                        
        cout<<"\n\tDe pronto la voz de la niña se torna gruesa y te grita con desesperación:\n\n\t\t\t\t\t\t\t ¡d̀ͩ̃͛̍̓̆̓̈́a͑̐̐me̞̤͖͍̙̬̜͔ͅ ̗̙͉̪̫̱̑͋̉ͧ͗̋ṭ̮̱͎̞̙͕̖̱ǔ̗̮̰̫͒͊̀s̪̯͊͛ ̦̻̥̲͓͖͙̦̲̏ͦ̓ͯ̆ͯ̃̏͆v̟̖̩̲̜i̞̫͉̥͍̱͍̰ͤ̓͑ͤͧ̅͑͌d̘ͯa̜̥s̤̰͓̭̎̑ͧͧ!\n\n";
        cin>>seguir;

    }while (!seguir);
 
}
void espejo(){
    int seguir;

    do{
        system("clear");
        cout<<"\n";
        cout<< R"(                                                         dlccc:::;;;,,,'''c   
                                                        x      ';,.      o.  
                                                        x    ,OKKK0x.    l.  
                                                        d   .OKKXXKK0.   c'  
                                .cxO00Okl;.             o   ,00KKKKKKl   :;  
                                0KKKKKKKKOOo.           c.  ;k00KKK00x   ;:  
                                O00KKKKKKKK0k.          ,   ,xOKXXK0Ok   ,c  
                                0KKKKKKXKKK0Od          .  .lxOKKXX0O0,  'l  
                                O0KXXXKK0KK0O0.         .,   xO0KKK0Od'  .d  
                                k00KKKKK0OOOkO.          c   cx0O00Okc   .x  
                                dOO0KK0K00kkOOO,         :    okkxkOx'   .k  
                                xkOkO000O0OO0OOl         ;     oxkxd;     O  
                                :xxxd0kkkOOOOOk                xxddd      0  
                                 dxkd0xdxOkkkko          '   .:OO00O;     0  
                                 oxkxKkxxdxxkko          ;xkOOOO0000Oo'   K  
                                 dxk00Kxkl....           'OOO0000O0000OOo,K  
                                 kxOKKKOOl                ..,:ldO0KOO00O00N  
                                'kxk0K0Oxo                        .';coxOKN. 
                                xkkkOOK0ox.                               .  
                                OxkOk000kOk.                                 
                                kkkOx0K0kOOk'                                
                                0OOXd00Kx0Okk;                               
                                0O0KxO0KkOOOkO:                              
                                000OO0OK00OOO00o                             
                                000kOK0KO0O0O00Ko   )";
                         
        cout<<"\n\tCorres para escapar y te encuentras en una habitación desolada.\n";
        cout<<"\n\t\n\tSusurro: Falta poco...\n";
        cout<<"\n\tObservas un espejo que te llama la atención y te acercas.\n";
        cout<<"\n\t\n\tSusurro: Observate, n\n";
        cout<<"Ingresa 1 para continuar:   ";
        cin>>seguir;


       
        

    } while(!seguir);



    





}