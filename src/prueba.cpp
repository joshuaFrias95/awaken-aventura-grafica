#include <iostream>
#include <cmath>
#include <thread>
#include <chrono>
using namespace std;

bool initGame;
bool instrucciones=false;
bool secondInstrucciones=false;
bool tercInstrucciones=false;
bool creditos=false;
bool secondCreditos=false;
bool tercCreditos=false;
bool elegir=false;
bool gameover=false;
bool responder=false;
int menuEscape;
bool nomoveruno;
int token;
int secondMenu;
int tercMenu;
int cuartMenu;
int salir;
int continuar;
int firstChoose;
int tokenChoice;
int pv=10;
int secondChoose;
int secondtokenChoose;
int infotokena;
int infotokenb;

void instruc() {
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
   
};

void exit() {
   system("clear");
   cout<<"\n\n\n\t[El camino ha concluido]\n\n\n";
   exit(EXIT_SUCCESS);
};
void temueves(){
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
void notemueves(){
   
   do
   {
      system("clear");
      cout<<"Observas la hora en el reloj de mesa 3am.\n";
      cout<<"Susurro: Hiciste bien, no te hubiera gustado ver lo que hubiera ingresado por esa puerta."; 
      cout<<"\n\t1)¿Quién eres?";
      cout<<"\n\t2)¿Dónde estoy?";
      cout<<"\nVidas: "<<pv;
      cout<<"\nDecidiste:\t";
      cin>>secondChoose;

      system("clear");

      switch(secondChoose)
      {
      case 1:
         system("clear");
         responder=true;
         secondtokenChoose=1;
         cout<<"\n\nAún no estás listo para saberlo";
         break;
         
      case 2:
        responder=true;
         secondtokenChoose=2;
         cout<<"\n\nEstás en un lugar perdido en el tiempo";
         break;

      default:
         break;
      }

            
   } while (!nomoveruno);
   
//void dospu

   
}


int main() {
   int select;
   bool finMenu=false;

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
      cout<<"\n\n\n\t\t\t1) Jugar";
      cout<<"\t\t2) Instrucciones";
      cout<<"\t\t0) Salir";
      cout<<"\n\n\n\n\n\n\n\n¿Qué opción eliges?\t";
      cin>>select;

      switch (select)
      {
         case 1:
         initGame=true;
         finMenu=true;
         break;
         case 2:
         instrucciones= true;
         finMenu=true;
         break;
         case 0:
         exit();
         break;
      default:
         break;
      }
      
   } while (!finMenu);

   if (initGame=true)
     {
        do
         {
            system("clear");
            cout<< "\n\n\tAcabas de despertar y no estás segurx de lo que recuerdas. \n\tNo sientes tus manos ni tus piernas.\n\tLa habitación esta oscura.\n";
            cout<<"\n\tEscuchas un sonido.\n";
            cout<<"\n\n\t\tSusurro: ~No te muevas~";
            cout<<"\n\n\n\n\t¿Qué decides hacer\?";
            cout<<"\n\n\n\n\t\t\t1)Moverte";
            cout<<"\t\t2)No moverte\n\n";
            cout<<"\nDecidiste:\t";
            cin>>firstChoose;

            switch (firstChoose)
            {
            case 1:
               elegir=true;
               tokenChoice=1;
               break;
            case 2:
               elegir=true;
               tokenChoice=2;
               break;
            default:
               break;
            }
       } while (!elegir);

       if (elegir=true && tokenChoice==1)
        {
           pv--;
           temueves();
        };
        
        if (elegir=true && tokenChoice==2)
        {
           notemueves();
        };
     } else if (instrucciones=true)
   {
     do
     {
        instruc();
         cout<<"\n────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────";
         cout<<"\n\n\n\tAWAKEN es una aventura conversacional creada por Carla Torrejón, Nadia Melyna y Joshua Frías para el primer";
         cout<<"\n\tcuatrimestre de Informática General en la Universidad Nacional de Artes, 2021,";
         cout<<"\n\n────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────";
         cout<<"\n\n\n\t¿Qué quieres hacer ahora?\t";
         cout<<"\n\n\n\n\t\t1) Jugar";
         cout<<"\t\t\t0 ) Salir";
         cin>>secondMenu;

         switch (secondMenu)
         {
            case 1:
            system("clear");
            menuEscape=1;
            break;
            case 0:
            exit();
            break;
         default:
            break;
         }
     } while (menuEscape==1);
     
     bool subir;

    if(subir=true){

    int i;
    for(i=1;i<=10;i++)

    {
        std::this_thread::sleep_for(std::chrono::milliseconds(200));
        cout<<"has subido un escalón\n";
    }
/*for(i=1;i<=10;i++){

	cout<<"Presiona 1 para avanzar.\n";
	cin>>pasos;

	if(pasos==1)
    {

        cout<<"has subido un escalón\n";
    }

}

return 0;
}*/
*/
    }
   }
   return 0;
}


/*

