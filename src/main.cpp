//Torrejón Torres Carla
//Torrejón Torres Nadia
//Frías Hernández Joshua

#include <iostream>
#include <cmath>
using namespace std;

bool gameover = false; //Fin de juego
bool contMenu;
bool exitGame;



/*******************************     FUNCIONES PRINCIPALES PARA MENÚ     ************************************************/

/////////////////////////////////////////// INSTRUCCIONES ///////////////////////////////////////////////////////////////////////////
void instrucciones() {
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
   cout<<"   El sueño te guiara a caminos jamás vistos..\n\n";
   cout<<"   Acabas de despertar y no estás seguro de lo que recuerdas. Sé cauteloso,\n";
   cout<<"   cada movimiento y decisión afectará directamente el porcentaje de tu vida.\n";
   cout<<"\n   Recuerda: No estas SOLO. Sigue la voz y llegarás a tu destino.\n";
   contMenu = true;
}

/////////////////////////////////////////// CRÉDITOS ///////////////////////////////////////////////////////////////////////////
void creditos() {
   system("clear");
   cout<<"El siguiente proyecto ha sido elaborado para la materia de Informática General - Cátedra Tirigall de la"<<endl;
	cout<<"carrera de Artes Multimediales de la Universidad Nacional de las Artes (Buenos Aires, Argentina)"<<endl<<endl;
	cout<<"Realizadores:"<<endl<<endl;
	cout<<"Carla Torrejón"<<endl;
	cout<<"Nadia Torrejón"<<endl;
	cout<<"Joshua Frías"<<endl;
   cout<< R"(
                 .''.                          .' 
                 .MW;                          ;K 
. .. ..          .Ml.    . .  .. o0x.. .      cKK 
                .oM. ,;    ;,   :0Xx          dNk 
   ..           ;WM. dk.   xd  .KWd        .  dk  
. .lO..         :X'. dWK . xd .WWo.... .  .M. dk  
   lXx    'd    :K   dWK   xd.kMx';kkk.  'OM. dk  
   lWN.   :K ,. :K  'xNK   xklWW. cWNW.  ;WM;.dk  
   lWN.   :K X; ;K  Ol:K   xWWN.  c0     ;WMW;dk  
  dNWWX.  :K XNc:K  Ol:WK. xWWWX. cWXXX: ;X:N;dk  
  xXOOM'  :NoNWl:K  OOkWW. xXOOM' cNOOO; ;K Xx0k  
. xd .W;. :WMWWdcK .0WWWW. xd .M;.c0.. . ;K XWWk  
  xd .WW: :WM'0WWK XWo.,W. xd .MWcc0     ;K .OWk  
  xXOOMW: :WM.:0WK Xk, .W.dXd .oXKKNOOO,;KK  OWk  
. xNKKXNd':WM. lXK X;  .WcXNl ..kNNKKXK;cNO  xKd  
  xd   KWl;WM.  ;K X;  .WMW:     xd     cO        
  '.   ,0l.,;.  ., ,.  .;;;.     '.     .'        
. .. .. l;               . .  .. . ... .          
   )";
}

/////////////////////////////////////////// SALIR ///////////////////////////////////////////////////////////////////////////
void salir() {
   cout<<"\n\t¡Gracias por jugar!";
   exit(EXIT_SUCCESS);
}




int main() {

   bool endMenu = false; 
   bool initGame;
   int numbOpt;
   int pressStart; 
   int select;
   int coinMenu = 5;

   do
   {
      cout<<"\n\n\n\t\t┌───────────────────────────────────────────────────────┐\n";
      cout<<"\t\t│\t Ingresa 1 para comenzar y presiona ENTER\t│\n";
      cout<<"\t\t└───────────────────────────────────────────────────────┘\n";
      cin>>pressStart;
   } while (pressStart != 1);

   do
   {
      system("clear");
      cout<<"\n\tMenú";
      cout<<"\n\n\t1) Jugar";
      cout<<"\n\t2) Instrucciones";
      cout<<"\n\t3) Créditos";
      cout<<"\n\t4) Salir";
      cin>>select;
      system("clear");
      switch (select)
      {
         case 1:
         initGame = true;
         endMenu = true;
         break;

         case 2:
         contMenu = true;
         endMenu = true;
         coinMenu++;
         break;

         case 3:
         contMenu = true;
         endMenu = true;
         coinMenu--;
         break;

         case 4:
         exitGame = true;
         endMenu = true;
         coinMenu = 0;
         break;

         default:
         cout<<"Opción incorrecta";
         break;
      }
   } while (!endMenu);

   system("clear");
   if (contMenu= true && coinMenu == 6)
   {
      instrucciones();
   } else if (contMenu= true && coinMenu == 4) {
      creditos();
      coinMenu++;
   } else if (endMenu= true && coinMenu == 0) {
      salir();
   };

   

   
  
   

   return 0;
}