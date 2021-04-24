//Torrejón Torres Carla
//Torrejón Torres Nadia
//Frías Hernández Joshua

#include <iostream>
#include <cmath>
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
int pressStart;
int menuEscape;
int token;
int secondMenu;
int tercMenu;
int cuartMenu;
int salir;
int continuar;
int firstChoose;
int tokenChoice;
int pv=10;

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
   cout<<"   El sueño te guiará a caminos jamás vistos...\n\n";
   cout<<"   Acabas de despertar y no estás seguro de lo que sucede. Sé cautelosx,\n";
   cout<<"   cada movimiento y decisión afectará directamente el porcentaje de tu vida.\n";
   cout<<"\n   Recuerda: No estas SOLX. Sigue la voz y llegarás a tu destino.\n";
   cout<<"\n\n\n────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────";
};
void cred() {
   system("clear");
      cout<<"El siguiente proyecto ha sido elaborado para la materia de Informática General - Cátedra Tirigall de la"<<endl;
	   cout<<"carrera de Artes Multimediales de la Universidad Nacional de las Artes (Buenos Aires, Argentina)"<<endl<<endl;
	   cout<<"Realizadores:"<<endl<<endl;
	   cout<<"Carla Torrejón"<<endl;
	   cout<<"Nadia Melyna"<<endl;
	   cout<<"Joshua Frías"<<endl;
      cout<<"\n\n\n────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────";
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
░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░
░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░
░░░░░░░█████████████████████████░░░░░░░░
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
░░░░░░░███████████░██░██████████░░░░░░░░
   )";
   
   cout<<"Observas una silueta negra amorfa ingresar a tu cuarto que empieza a vociferar algo indescifrable. \n";
   cout<<"QUIERES GRITAR Y NO PUEDES.\n";
   cout<<"¿Dejaste tu cuerpo atrás\? Tal vez. Ya no lo sientes\n";
   cout<<"\nVidas: "<<pv;
   
};
void notemueves(){
   system("clear");
}

int main() {
   int select;
   bool finMenu=false;
   int menuCoin;

   do
   {
      cout<<"\n\n\n\t\t┌───────────────────────────────────────────────────────┐\n";
      cout<<"\t\t│\t Ingresa 1 y presiona ENTER para comenzar \t│\n";
      cout<<"\t\t└───────────────────────────────────────────────────────┘\n";
      cin>>pressStart;
   } while (pressStart !=1);

   do
   {
      system("clear");
      cout<<R"(                          .....               .                        ... 
                          'MNMc               .                        oM: 
                          ,Mk,.                  .XXWx               ;WNM: 
                         OKMd   kO       kk     dKWX:,               ;Mx:. 
     lk.                 NXo;   KNko     KX   :OXWoc            ck.  ;Ml   
     kWdl       lc       N0     KWM0     KX 'd0MOx..dodod.    ,dKM.  ;Ml   
     kWNX       X0 .c'   N0   ,cO0M0     KXcdMXK'  .MXK0K'    lMWMl:.;Ml   
   .;0WNN,.     X0 ;Md;. N0   xM'.MK;.   KNMWMx;.  .MO;,;,,.  lMNNNN.;Ml   
   cMWWNWWx     XK.:MWM. XO   xM,.WWMo   KNWWMWM,  .MWMWMNN.  lM: KN.:Ml   
   lMc..'Wk     XWMNMWM' N0   xMWWMWMo   KX...xM,  .Mk.....   lM: KWWWMl   
   lM:  .WNNl   XWMO;kMNXN0 :NWMc,;cMo   KX   dMXX..Mx        lM: ';WWMl   
   lMK0O0WNMo   XWMk ,cXWW0 cMxc.  ,Mo d0NK   ,cKW00MX0O0OO..0XM:  .WWMl   
   lMkooodkMKk' XWMk   loN0 cMc    ,MKkXMxl     cdWXdododoo.,M0d'  .ood,   
   ;O,    'OKM; xkOl     xo ,O,    .OkOkO.    .  .kd        .O:            
            cK,                               .                            
      )";
      cout<<R"(
                           ......',;::;,,...,''...                         
                     ..';::;;;cldddoooooooodoo:ccc:;'..                    
                  .';clllclooolc;'......   .,cdccodoc:::,'.                
              ...;coddolc,;,',loodkOKK00Oxxkxxddoclolldoc;:;...            
            .',:odol;';:ldx0KNNNWWWWWMMMWMWWMMWNKOkxxl;;codd:','..         
        ..,cdol:''clxdlc:xKXXXXXNXNNNNWWNNWNXXXWMMM0dkkkxxl:cddl;..        
       .;ll:';:lddoc,...xKKXNNKXKNWMMMMNddXKNXXKXWWMKclodddkd:;;cod:..     
     ...;::lk0kc...... .W0KXNNWN0MMMMMMWOOWNXXKKXXXMMll:;,,coxxd:...''..   
   .::oxdl:..oll.       O0KKXXXN0KNMMMMMMMNXXXXX0NNMX,..  ..;lOKc..        
   ..;:loodddxocd:'......kKKKKXNXNXXXXNXNXXXXXKKKXW0. ...,;:;llc'.'.       
         ....,;:coooc:,'..,xKXK0XXXXXXNXXXKXKKXXNk;...;clccoll:,,..        
               ...':llllocc;,cdx0XXXXXKKXXXKKko:',;:llcllc;,.              
                    .';:locl:cllc:clclclc:::cclollolocc;;.                 
                        ..',::::;;;:loolloollc:;;,',,...                   
                               ........'''..........                       
                                                                           

      )";
      cout<<"\n\tMenú";
      cout<<"\n\n\t1) Jugar";
      cout<<"\n\t2) Instrucciones";
      cout<<"\n\t3) Créditos";
      cout<<"\n\t4) Salir";
      cout<<"\n\n\t¿Qué opción eliges?\t";
      cin>>select;

      switch (select)
      {
         case 1:
         initGame=true;
         finMenu=true;
         break;
         case 2:
         instrucciones= true;
         menuCoin=2;
         finMenu=true;
         break;
         case 3:
         creditos= true;
         menuCoin=3;
         finMenu=true;
         break;
         case 4:
         salir=1;
         finMenu=true;
         break;
      default:
         break;
      }
      
   } while (!finMenu);

   do
   {
      if (instrucciones=true && menuCoin==2)
      {
         do
         {
            instruc();
            cout<<"\n\n\t¿Qué quieres hacer ahora?\t";
            cout<<"\n\t1) Jugar";
            cout<<"\n\t2) Créditos";
            cout<<"\n\t3) Salir";
            cin>>secondMenu;

            switch (secondMenu)
         {
            case 1:
            system("clear");
            menuEscape=1;
            break;
            case 2:
            secondCreditos= true;
            token=1;
            break;
            case 3:
            exit();
            break;
         default:
            break;
         }
         } while (secondCreditos=true && token==1);      
      }

      if (secondCreditos=true && token==1)
      {
         do
         {
            cred();
            cout<<"\n\n\t¿Listo para jugar?\t";
            cout<<"\n\t1) Jugar";
            cout<<"\n\t2) Salir";
            cin>>tercMenu;

            switch (tercMenu)
         {
            case 1:
            menuEscape==1;
            break;
            case 2:
            tercCreditos=true;
            exit();
            break;
         default:
            break;
         }
         } while (!tercCreditos); 
      }
      
      if (creditos=true && menuCoin==3)
      {
         do
         {
            cred();
            cout<<"\n\n\t¿Qué quieres hacer ahora?\t";
            cout<<"\n\t1) Jugar";
            cout<<"\n\t2) Instrucciones";
            cout<<"\n\t3)Salir";
            cin>>secondMenu;

            switch (secondMenu)
         {
            case 1:
            menuEscape==1;
            break;
            case 2:
            secondInstrucciones= true;
            token=2;
            break;
            case 3:
            exit();
            break;
         default:
            break;
         }
         } while (!secondInstrucciones);       
      }

      if (secondInstrucciones=true && token==2)
      {
         do
         {
            instruc();
            cout<<"\n\n\t¿Listo para jugar?\t";
            cout<<"\n\t1) Jugar";
            cout<<"\n\t2) Salir";
            cin>>cuartMenu;

            switch (cuartMenu)
            {
               case 1:
               menuEscape==1;
               break;
               case 2:
               tercInstrucciones=true;
               exit();
               break;
               default:
               break;
            }
         } while (!tercInstrucciones);
         
      }     
   } while (menuEscape==1);

    if (initGame=true)
    {
      
       do
       {
          system("clear");
          cout<< "\n\tAcabas de despertar y no estás segurx de lo que recuerdas. \n\tNo sientes tus manos ni tus piernas.\n\tLa habitación esta oscura.\n";
          cout<<"\n\tEscuchas un sonido.\n";
          cout<<"\n\t\tSusurro: ~No te muevas~.\n\n\n";
          cout<<"\t¿Qué decides hacer\?\n\n";
          cout<<"\t1)Moverte\n";
          cout<<"\t2)No moverte\n\n";
          cout<<"\tDecidiste:\t";
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
      
      
      
  
   }
   return 0;
}