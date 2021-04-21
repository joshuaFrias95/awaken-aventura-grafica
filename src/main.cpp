//Torrejón Torres Carla
//Torrejón Torres Nadia
//Frías Hernández Joshua

#include <iostream>
#include <cmath>
using namespace std;



int main() {
   
   bool gameover = false; //Booleano de fin del juego
	bool boolMenu = false; //El booleano del menú principal
   bool choise = false;
	int start; //Primer variable de inicio
	int play; //Variable usada para el menú general del juego
   int continuar; //Para continuar a cada sección es necesario escribir 1 A MENOS QUE SEA NECESARIO OTRO COMANDO
	int pv = 100; //Puntos de vida
   char action;

   do {
      cout<<"Ingresa 1 para continuar:";
		cin>>start;      
   }while (start != 1);

   do
   {
      system("clear");
      /* COUT CON NOMBRE DEL JUEGO EN R"()"" */
      /* COUT CON OJO DEL JUEGO EN R"()"" */

      cout<<"MENÚ: \n\n";
		cout<<"1)Jugar\n";
		cout<<"2)Instrucciones\n";
		cout<<"3)Créditos\n";
		cout<<"4)Salir\n\n";
		cout<<"Elige una opción: ";
		cin>>play;

      
      switch (play) {
         
         case 1:
			boolMenu = true;
			break;

         case 2:
			system("clear");
			cout<<"EL SUEÑO TE GUIARÁ POR CAMINOS JAMÁS VISTOS...\n\n\n";
			cout<<"Acabas de despertar y no estás seguro de lo que recuerdas.\n ";
			cout<<"Sé cauteloso, cada movimiento que realices puede afectar tu porcentaje de vida.\n\n";
			cout<<"Recuerda: No estás solo. Sigue a tu instinto y llegarás a tu destino.\n\n"<<endl;
			break;

         case 3:
			system("clear");
			cout<<"El siguiente proyecto ha sido elaborado para la materia de Informática General - Cátedra Tirigall"<<endl;
			cout<<"de la carrera de Artes Multimediales de la Universidad Nacional de las Artes (Buenos Aires, Argentina)"<<endl<<endl;
			cout<<"Realizadores:"<<endl<<endl<<endl;
			cout<<"Carla Torrejón"<<endl;
			cout<<"Nadia Torrejón"<<endl;
			cout<<"Joshua Frías\n\n"<<endl;
         break;

         case 4:
         system("clear");
         cout<<"¡Gracias por jugar!\n";
         /* COUT CON FANTASMA EN R"()"" */
         exit(EXIT_SUCCESS);
         break;
      
         default:
         cout<<"Opción incorrecta";
         boolMenu=true;
         break;
      }
   } while (!boolMenu);

   if (play == 1) {
      
      while (!gameover) {
         
         do {
            system("clear");
            cout<<"Vida: "<<pv<<endl<<endl<<endl;
            cout<<"\n\n\n\n\n────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────\n";
            cout<<"\n\n\tLa habitación está oscura...";
            cout<<"\tSientes tu cuerpo adormecido...";
            cout<<"\tTus sentidos se agudizan más y más...\n\n";
            cout<<"\t\t\t¡UN RUIDO!\n\n";
            cout<<"\t\"¡¿QUÉ ES ESO?!...¿QUIÉN ANDA AHÍ?\"\n";
            cout<<"\n\n\n\n\n────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────\n";
            cout<<"\tIngresar 1 para continuar:"<<endl;
            cin>>continuar;
         } while (continuar == 1);

         do {
            system("clear");
            cout<<"Vida: "<<pv<<endl<<endl<<endl;
            cout<<"\n\n\n\n\n────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────\n";
            cout<<"\n\n\tMás texto en donde nos";
            cout<<"\tdamos cuenta de que alguien está ahí";
            cout<<"\n\n\n\t\t\tUna voz te dice:\t\t -\"No te muevas\"\n\n";
            cout<<"\t\"Y aquí decides si te mueves o te quedas\"\n";
            cin>>action;
            cout<<"\n\nOpciones:";
            cout<<"\nTe mueves";
            cout<<"\nNo te mueves";

            switch (action)
            {
               case 1:
               system("clear");
               (pv - 15);
               cout<<"Vida: "<<pv<<endl<<endl<<endl;
               cout<<"Te moviste y te atacó";
               break;
            
               case 2:
               system("clear");
               cout<<"No te moviste y ya";
               break;
            default:
               break;
            }
         } while (!choise);
         
         
      }
      
   }
   
   return 0;
}