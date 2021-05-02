//Torrejón Torres Carla
//Torrejón Torres Nadia
//Frías Hernández Joshua

#include <cstdlib>
#include <iostream>
#include <string>
#include <ctime>
#include <thread>

using namespace std;

/*      Variables globales      */
bool finanimacion;
bool ganar;
bool movimiento;
bool ayudar;
bool cruzar;
bool gameover = false;
bool azazel;
int primermovimiento;
int passcoin;
int puerta;
float pv = 10;
string nombre;

/*      Prototipado del juego       */
void animpr();
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
void espejo();
void cruzandoespejo_si();
void cruzandoespejo_no();
void desafiofinal();
void finganar();
void finperder();


/*      Main principal      */
int main() {
    animpr();
    menupr();
    juegopr();

    if (movimiento == true && primermovimiento == 1)
    {
       moverte();
       puertas(); 

       if (puerta == 100)
       {
           puertaincorrecta();
           escaleras();
           interaccion_fantasma();

           if (ayudar == true)
           {
               help();
               espejo();

               if (cruzar == true)
               {
                   cruzandoespejo_si();
                   desafiofinal();
               }
               else if (cruzar == false)
               {
                   cruzandoespejo_no();
                   desafiofinal();
               }    
           }
           else if (ayudar == false)
           {
               nohelp();
               espejo();

               if (cruzar == true)
               {
                   cruzandoespejo_si();
                   desafiofinal();
               }
               else if (cruzar == false)
               {
                   cruzandoespejo_no();
                   desafiofinal();
               }  
           }   
       }
       else if (puerta == 300)
       {
           puertacorrecta();
           escaleras();
           interaccion_fantasma();

           if (ayudar == true)
           {
               help();
               espejo();

               if (cruzar == true)
               {
                   cruzandoespejo_si();
                   desafiofinal();
               }
               else if (cruzar == false)
               {
                    cruzandoespejo_no();
                    desafiofinal();
               } 
           }
           else if (ayudar == false)
           {
               nohelp();
               espejo();

               if (cruzar == true)
               {
                   cruzandoespejo_si();
                   desafiofinal();
               }
               else if (cruzar == false)
               {
                   cruzandoespejo_no();
                   desafiofinal();
               }
           }  
       }  
    }
    else if (movimiento == true && primermovimiento == 2)
    {
        nomoverte();
        puertas(); 

        if (puerta == 100)
       {
           puertaincorrecta();
           escaleras();
           interaccion_fantasma();

           if (ayudar == true)
           {
               help();
               espejo();

               if (cruzar == true)
               {
                   cruzandoespejo_si();
                   desafiofinal();
               }
               else if (cruzar == false)
               {
                   cruzandoespejo_no();
                   desafiofinal();
               }    
           }
           else if (ayudar == false)
           {
               nohelp();
               espejo();

               if (cruzar == true)
               {
                   cruzandoespejo_si();
                   desafiofinal();
               }
               else if (cruzar == false)
               {
                   cruzandoespejo_no();
                   desafiofinal();
               }  
           }   
       }
       else if (puerta == 300)
       {
           puertacorrecta();
           escaleras();
           interaccion_fantasma();

           if (ayudar == true)
           {
               help();
               espejo();

               if (cruzar == true)
               {
                   cruzandoespejo_si();
                   desafiofinal();
               }
               else if (cruzar == false)
               {
                    cruzandoespejo_no();
                    desafiofinal();
               } 
           }
           else if (ayudar == false)
           {
               nohelp();
               espejo();

               if (cruzar == true)
               {
                   cruzandoespejo_si();
                   desafiofinal();
               }
               else if (cruzar == false)
               {
                   cruzandoespejo_no();
                   desafiofinal();
               }
           }  
       }
    }
    return 0;    
}

/*      Desgloce de funciones       */
void animpr() {
    int i;
    int j;
    string animacion1[] = {
        R"(
                     .          .    .     .WWNMo      .          . .    .....  .        .      . ..oMK. 
                      
                       
                    
                    
                    
                    
                    
                  
                    
               ...      ..;MN. .....      ...  ...      .......    . .    ...           ...      .     .  
        )",
        R"(
                     .          .    .     .WWNMo      .          . .    .....  .        .      . ..oMK. 
                                          .';WW'.. .''         ''.      ',OMNW0                    xMNW0  
                  
                   
                   
                
                
                
                
               lMO''''''oMWWX. dMWMO    .'cMX. 0Mo      OMNWXMN,'. .    .'OMO''',''''. .XMc'.    ''''.    
               ...      ..;MN. .....      ...  ...      .......    . .    ...           ...      .     .  
        )",
        R"(
                     .          .    .     .WWNMo      .          . .    .....  .        .      . ..oMK. 
                                          .';WW'.. .''         ''.      ',OMNW0                    xMNW0  
                  .;;.            .        ;MNKK.   :MW:;.     .NM: . .;;KMXKd             . .;,    xMo    
            
             
              
               
           
               oMNXK0XNMNM0    dMWMO  ,;OMNMX. 0Mk;'    OMo 'XKWM: . .;;KMXXKMNXXKX0Xd  OXNMo   .NMWMo .  
               lMO''''''oMWWX. dMWMO    .'cMX. 0Mo      OMNWXMN,'. .    .'OMO''',''''. .XMc'.    ''''.    
               ...      ..;MN. .....      ...  ...      .......    . .    ...           ...      .     .  
        )",
        R"(
                     .          .    .     .WWNMo      .          . .    .....  .        .      . ..oMK. 
                                          .';WW'.. .''         ''.      ',OMNW0                    xMNW0  
                  .;;.            .        ;MNKK.   :MW:;.     .NM: . .;;KMXKd             . .;,    xMo    
                  :MNcc.        ,c,    .   ;MX.     :MWNM;     .NM: 'clWWO0, .cccccc'      ;ckMO  . xMo .  
            
             
           
               lMk    OMK0x    dMWMKccXMK00MX. d0XM0c::cKMo   .NM: . .WWO0, ;MX.          OMo .ccNMWMo    
               oMNXK0XNMNM0    dMWMO  ,;OMNMX. 0Mk;'    OMo 'XKWM: . .;;KMXXKMNXXKX0Xd  OXNMo   .NMWMo .  
               lMO''''''oMWWX. dMWMO    .'cMX. 0Mo      OMNWXMN,'. .    .'OMO''',''''. .XMc'.    ''''.    
               ...      ..;MN. .....      ...  ...      .......    . .    ...           ...      .     .  
        )",
        R"(
                     .          .    .     .WWNMo      .          . .    .....  .        .      . ..oMK. 
                                          .';WW'.. .''         ''.      ',OMNW0                    xMNW0  
                  .;;.            .        ;MNKK.   :MW:;.     .NM: . .;;KMXKd             . .;,    xMo    
                  :MNcc.        ,c,    .   ;MX.     :MWNM;     .NM: 'clWWO0, .cccccc'      ;ckMO  . xMo .  
                  :MWNM;        dMd .oo.   ;MX.   ,ookxNM;     .NMkokMNkx.   ;MNkkxk;      OMNMKol. xMo    
           
               oMKolloKMo      dMKkkMMWM: ;MX    oMXkkNMWMo   .NMkolooWW.   ;MNoololo;    OMo 'MWkkXMo    
               lMk    OMK0x    dMWMKccXMK00MX. d0XM0c::cKMo   .NM: . .WWO0, ;MX.          OMo .ccNMWMo    
               oMNXK0XNMNM0    dMWMO  ,;OMNMX. 0Mk;'    OMo 'XKWM: . .;;KMXXKMNXXKX0Xd  OXNMo   .NMWMo .  
               lMO''''''oMWWX. dMWMO    .'cMX. 0Mo      OMNWXMN,'. .    .'OMO''',''''. .XMc'.    ''''.    
               ...      ..;MN. .....      ...  ...      .......    . .    ...           ...      .     .  
        )",
        R"(
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
        )"
    };
    string animacion2[] = {
        R"(
                                                      ......',;;:;,,'...,''...                           
                                                           
                                      
                                  
                               
                           
                         
                         
                      
                      
                            
                                  
                                        
                                           
                                                   ........'''...........                         
        )",
        R"(
                                                      ......',;;:;,,'...,''...                           
                                       ..,;::;;;cldddoooodoooodooccccc:,'..                     
                                    ..,:cllcclooolc:'......    .,colcodol::::,'.                 
                                 ...;clddoll:,;,',loodkO0KK0Okxxkxxddoccolllolc;:;...             
         
                            
                         
                         
                      
                      
                            
                                 ....:lllcllcc;;cdd00NXXKKKXXXXXKkdc,',:clclclc;,.               
                                       ..,;cloll:cllc:clcllllc:::cclolcllllc::,.                  
                                          ..',:::::;,:cloolooollc:;;;'','..                     
                                                   ........'''...........                         
        )",
        R"(
                                                      ......',;;:;,,'...,''...                           
                                       ..,;::;;;cldddoooodoooodooccccc:,'..                     
                                    ..,:cllcclooolc:'......    .,colcodol::::,'.                 
                                 ...;clddoll:,;,',loodkO0KK0Okxxkxxddoccolllolc;:;...             
                              .',;oxdo:',;clxk0XNNNWWWWWMMMMWMWMMMWNK0kxkoc;;codd:',,..          
                            
                         
                         
                      
                      
                           ....,;:cloolc;,...:kKXK0XXXXKXNXXKXXXKKXXW0l...';llccool:,,'.         
                                 ....:lllcllcc;;cdd00NXXKKKXXXXXKkdc,',:clclclc;,.               
                                       ..,;cloll:cllc:clcllllc:::cclolcllllc::,.                  
                                          ..',:::::;,:cloolooollc:;;;'','..                     
                                                   ........'''...........                         
        )",
        R"(
                                                      ......',;;:;,,'...,''...                           
                                       ..,;::;;;cldddoooodoooodooccccc:,'..                     
                                    ..,:cllcclooolc:'......    .,colcodol::::,'.                 
                                 ...;clddoll:,;,',loodkO0KK0Okxxkxxddoccolllolc;:;...             
                              .',;oxdo:',;clxk0XNNNWWWWWMMMMWMWMMMWNK0kxkoc;;codd:',,..          
                           ..;ldol:'':ldxdl:cOXKXXXXNXNXNNNWWNNWNXXXWMMMNxxkkxxxl:cdxo:'.         
                         
                         
                      
                     ...;cooodddxl:d:,..... ,0KXKKXNXNXKXXXNNXXXXXXKX0XWNc  ...,;:;llc,...        
                           ....,;:cloolc;,...:kKXK0XXXXKXNXXKXXXKKXXW0l...';llccool:,,'.         
                                 ....:lllcllcc;;cdd00NXXKKKXXXXXKkdc,',:clclclc;,.               
                                       ..,;cloll:cllc:clcllllc:::cclolcllllc::,.                  
                                          ..',:::::;,:cloolooollc:;;;'','..                     
                                                   ........'''...........                         
        )",
        R"(
                                                      ......',;;:;,,'...,''...                           
                                       ..,;::;;;cldddoooodoooodooccccc:,'..                     
                                    ..,:cllcclooolc:'......    .,colcodol::::,'.                 
                                 ...;clddoll:,;,',loodkO0KK0Okxxkxxddoccolllolc;:;...             
                              .',;oxdo:',;clxk0XNNNWWWWWMMMMWMWMMMWNK0kxkoc;;codd:',,..          
                           ..;ldol:'':ldxdl:cOXKXXXXNXNXNNNWWNNWNXXXWMMMNxxkkxxxl:cdxo:'.         
                        ..:ll;';:lodol;....N0KNNNKXXXNMMMMM0odNKNXXKKWNMMdloldddkdc;;codl,.      
                         
                     .:;lxxoc:..dll.       'N00KXNXNKKNMMMMMMMWNXXXXKXXXMMo...  ..;lkKo,..        
                     ...;cooodddxl:d:,..... ,0KXKKXNXNXKXXXNNXXXXXXKX0XWNc  ...,;:;llc,...        
                           ....,;:cloolc;,...:kKXK0XXXXKXNXXKXXXKKXXW0l...';llccool:,,'.         
                                 ....:lllcllcc;;cdd00NXXKKKXXXXXKkdc,',:clclclc;,.               
                                       ..,;cloll:cllc:clcllllc:::cclolcllllc::,.                  
                                          ..',:::::;,:cloolooollc:;;;'','..                     
                                                   ........'''...........                         
        )",
        R"(
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
        )"
    };

    do
    {
        for (i = 0; i < 6; i++)
        {
            if (i)
            {
                std::this_thread::sleep_for(std::chrono::milliseconds(200));
                system("clear");
                cout<<animacion1[i];
                cout<<animacion2[i];
            }    
        }

        

        if (i == 6)
        {
            finanimacion = true;
        }
        
        
        
    } while (!finanimacion);
}

void menupr() {
    bool repite = true;
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
        cout<<"\n\n\n\t\t\t1) Jugar";
        cout<<"\t\t2) Instrucciones";
        cout<<"\t\t0) Salir";
        cout<<"\n\n\n\n\n\n\n\n¿Qué opción eliges?  \a";
        cin>>opcion;

        switch (opcion)
        {
        case 1:
            repite = false;
            break;
        case 2:
            instrucciones();
            break;
        case 0:
            exit(EXIT_SUCCESS);
            repite = false;
            break;
        default:
            break;
        }
    } while (repite);
};

void instrucciones() {
    bool repite = true;
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
                            ~   ~  ~  ~ ~  ~ ~ `~' ~  ~   ~  ~  ~ ~  ~ ~~~ ~ ~ ~ ~   `~'  ~ )";
        cout<<"\n\n\t\t\t\t\"El sueño te guiará a caminos jamás vistos...\"";
        cout<<"\n\n\n\n\tAcabas de despertar y no estás seguro de lo que sucede.";
        cout<<"\n\tSe cautelosx, cada movimiento y decisión afectará directamente el porcentaje de tu vida.\n";
        cout<<"\n\tRecuerda: No estas SOLX. Sigue la voz y llegarás a tu destino.\n";
        cout<<"\n────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────";
        cout<<"\n\n\n\tAWAKEN es una aventura conversacional creada por Carla Torrejón, Nadia Melyna T y Joshua Frías para el primer";
        cout<<"\n\tcuatrimestre de Informática General en la Universidad Nacional de Artes, 2021,";
        cout<<"\n\n────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────";
        cout<<"\n\n\n\t\t\t\t\t1) Regresar";
        cout<<"\t\t0) Salir";
        cout<<"\n\n\n\n\n\n\n\n¿Qué opción eliges?";
        cin>>opcion;

        switch (opcion)
        {
        case 1:
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
    bool paso = true;
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
                                                ....                                                                    )";
        cout<< "\n\nAcabas de despertar y no estás segurx de lo que recuerdas.\nNo sientes tus manos ni tus piernas.\nLa habitación esta oscura.";
        cout<<"\nEscuchas un sonido.\n";
        cout<<"\n\n~Susurro: No te muevas~";
        cout<<"\n\n\n\n\n¿Qué decides hacer\?";
        cout<<"\n\n\n\t\t\t\t\t1)Moverte";
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
    int conta;
    int contb;

    do
    {
        pv--;
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
                                        ░░░░░░░███████████░██░██████████░░░░░░░░)";
            cout<<"\n\nObservas a una silueta negra amorfa acercarse lentamente a la habitación.\n";
            cout<<"De pronto empieza a vociferar algo indescifrable.\n";
            cout<<"Se acerca a ti y, aunque no te toca, sabes que te ha quitado algo.\n";
            cout<<"\nQuieres gritar y no puedes.\n";
            cout<<"La silueta se aleja lentamente y se desvanece en el aire.\n";
            cout<<"\nPerdiste una vida.\n";
            cout<<"\n\nVidas: "<<pv;
            cout<<"\nIngresa 1 para continuar:  ";cin>>conta;            
    } while (!conta); 

    do
    {
        system("clear");
        cout<< R"(
                                        ░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░
                                        ░░░░░░░█████████████████████████░░░░░░░░
                                        ░░░░░░░█████████████████████████░░░░░░░░
                                        ░░░░░░░█████████████████████████░░░░░░░░
                                        ░░░░░░░█████████████████████████░░░░░░░░
                                        ░░░░░░░█████████████████████████░░░░░░░░
                                        ░░░░░░░█████████████████████████░░░░░░░░
                                        ░░░░░░░█████████████████████████░░░░░░░░
                                        ░░░░░░░█████████████████████████░░░░░░░░
                                        ░░░░░░░█████████████████████████░░░░░░░░
                                        ░░░░░░░█████████████████████████░░░░░░░░
                                        ░░░░░░░█████████████████████████░░░░░░░░
                                        ░░░░░░░█████████████████████████░░░░░░░░
                                        ░░░░░░░█████████████████████████░░░░░░░░
                                        ░░░░░░░█████████████████████████░░░░░░░░
                                        ░░░░░░░█████████████████████████░░░░░░░░
                                        ░░░░░░░█████████████████████████░░░░░░░░
                                        ░░░░░░░█████████████████████████░░░░░░░░
                                        ░░░░░░░█████████████████████████░░░░░░░░
                                        ░░░░░░░█████████████████████████░░░░░░░░
                                        ░░░░░░░█████████████████████████░░░░░░░░
                                        ░░░░░░░█████████████████████████░░░░░░░░
                                        ░░░░░░░█████████████████████████░░░░░░░░
                                        ░░░░░░░█████████████████████████░░░░░░░░
                                        ░░░░░░░█████████████████████████░░░░░░░░
                                        ░░░░░░░█████████████████████████░░░░░░░░)";
            cout<<"\n\n\"¿Dejaste tu cuerpo atrás\? Tal vez ya ni siquiera lo sientes.\"\n";
            cout<<"\nObservas hacia abajo y te ves a ti acostado...\n";
            cout<<"Estas dormido, pero no estas realmente seguro de que solo es un sueño.\n";
            cout<<"\n\nSusurro: \"~No puedes quedarte aquí, este lugar es peligroso.~\n";
            cout<<"\t ~No hay tiempo de responder preguntas, sé cuatelosx y presta atención a los detalles~\"";
            cout<<"\n\n\nVidas: "<<pv;
            cout<<"\nIngresa 1 para continuar:  ";cin>>contb;  
    } while (!contb);
    
}

void nomoverte() {
    bool repite = true;
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
                                                ....                                                                    )";
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
            repite = false;
            break;
        default:
            break;
        }
    } while (repite); 
}

void quieneres() {
    bool paso = true;
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
}

void dondeestoy() {
    bool paso = true;
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
}

void puertas() {
    bool next = true;
    
    while (next == true)
    {
        system("clear");
        cout<<"\n";
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
                                 |_|___________|_|                         |_|___________|_|)";
        cout<<"\n\n\n\nRecorres un largo y oscuro pasillo, tu cuerpo se vuelve cada vez más translucido. Eso te aterra.\n";
        cout<<"\nObservas siluetas avanzando junto a ti. De pronto, observas dos puertas que llaman tu atención.\n";
        cout<<"\nLa primera puerta tiene un número 100, se ve nueva y parece que hay alguien dentro.\n";
        cout<<"\nLa segunda puerta tiene un número 300, esta puerta es vieja y un aire espectral sale de él.";
        cout<<"\n\nSusurro: \"~Elige cuidadosamente, en este lugar todo puede ser una trampa...~\"";
        cout<<"\n\n\n\n\nTe acercas";
        cout<<"\n\n\n\nVidas: "<<pv;
        cout<<"\nElegiste:  ";
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
    bool paso;
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
                                                    |_|,'_________|_|)";
        cout<<"\n\n~Un viento gélido escapa al abrir la puerta.~";
        cout<<"\nNo encuentras nada en la habitación";
        cout<<"\n\n~Susurro: ~Sigue avanzando...Estás más cerca de lo que crees~";
        cout<<"\nVidas:"<<pv;
        cout<<"\n\nIngresa 1 para continuar:  ";
        cin>>select;

        if (select == 1)
        {
            system("clear");
            paso = true;
            passcoin = 1;
        }
        
    } while (!paso && passcoin == 1);  
}

void puertaincorrecta() {
    bool paso = true;
    int select;

    do
    {
        system("clear");
        cout<<"\nSientes que tus pasos se tornan más pesados y tu respiración más lenta. \t¡Las siluetas te atacan!\n";
        cout<<"\nVoces desgarradoras se arremolinan por todo el cuarto, pierdes la noción del espacio.";
        cout<<"\n\nCuando la habitación se calma observas tu mano y es casí impercibible.";
        cout<<"~Susurro: Te estás perdiendo... Si sigues perdiendo vidas terminarás como ellos.~";
        cout<<"\n\nPerdiste 2 vidas.";
        cout<<"\n\nFrente a ti se materializan unas escaleras.";
        cout<<"\n\n\n\n\n\nSusurro: \"~Debemos continuar, la prueba más grande aún te espera~\"";
        cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nVidas: "<<pv;
        cout<<"\nIngresa 1 para continuar:   ";
        cin>>select;
        system("clear");

        if (select == 1)
        {
            paso = false;
        }
        
    } while (paso);   
}

void escaleras() {      
    int i;
    string escalones[] = {
        "Caminas\n",
        "\n\n\n\n\n\n\n\n\n\n\n\nSubiste al primer escalón\n",
        "\n\n\n\n\n\n\n\n\n\n\n\tSubiste al segundo escalón\n",
        "\n\n\n\n\n\n\n\n\n\n\t\tSubiste al tercer escalón\n",
        "\n\n\n\n\n\n\n\n\n\t\t\tSubiste al cuarto escalón\n",
        "\n\n\n\n\n\n\n\n\t\t\t\tSubiste al quinto escalón\n",
        "\n\n\n\n\n\n\n\t\t\t\t\tSubiste al sexto escalón\n",
        "\n\n\n\n\n\n\t\t\t\t\t\tSubiste al séptimo escalón\n",
        "\n\n\n\n\n\t\t\t\t\t\t\tSubiste al octavo escalón\n",
        "\n\n\n\n\t\t\t\t\t\t\t\tSubiste al noveno escalón\n",
    };

    for (i = 0; i < 10; i++)
    {
        if (i)
        {
            std::this_thread::sleep_for(std::chrono::milliseconds(800));
            system("clear");
            cout<<escalones[i];
        }
        
    }

    if (i = 10)
    {
        int cerca;

        do
        {
            system("clear");
            cout<<"\n\n\nAl subir las escaleras miras a la distancia una siluesta borrosa.\n";
            cout<<"Con señas te pide que te acerques.\nAunque te causa terror saber que es, decides acercarte.";
            cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nVidas: "<<pv;
            cout<<"\nIngresa 1 para acercarte:   ";
            cin>>cerca;
        } while (!cerca);        
    }
}

void interaccion_fantasma() {
    int option;
    int conta;
    
    do
    {
        system("clear");
        cout<<"\n";
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
                                      ;0kNlX:o.;.. c:WNM;0WlW' c,;..' 0..;lK'dcN0)";
    cout<<"\n\nAl acercarte ves que es una niña. No puedes verle el rostro.\n\nSe acerca muy lento a ti y te dice algo casí indescifrable:\n ";
    cout<<"\n\t\tP͖̃ensé ͙̻̤ͧ͊ͩqu̥̫ͧ͆ẽ̫͖̓ n̠ͧo t̰̗̝̃̑͌ẻ̼̳̪̈͂ ͉͚̦͆ͫ̔a͚c̪̥͎er̮̰̠ͫͭ̆c̝͙̩̓̐̃a̜ͮr͎ḭ́̃aͪs͖̝͆̅.̰ͭ. ̩͛¿̯̦ͮ͂Pṳ̙ed͆̚e͈ͅs͓̭͖͐̐̒ ay͇͎͑̚ụ̭̟̽̎̆darḿ͙è͍?ͮ͗̒ ̜̩̭̓͑͋n̟͒ẹ̝̐ͦc͖͙͓ͨͤͪe͍͖̮͆͒̂s̓͌̋i̫͎̖to͚̟̽͂ vo̦l͆v̘ͪer ͑a̼̠͎̍͐͐ ̬͍͙̀̒ͫc̲á͍͍̘̽͗sͯa ̙̲͎es ͉̐m̊u̲̝͋̔y ͓͓͕t̤̱̳͆̋ͯå͈͓̣̂͐rd͚̮̋̌̾ͅe̋̽̌.";
    cout<<"\n\t\tN̻͉̫ḙ͎͎́ͣ̊c̭̻̣͖̪̩̮e̹̻̤̺͛̒̍̚s̩̣͎̑ͦͬỉ̾ͪͦ̈́ͮt̀ͅo̺̪͍̙͚͒ͧ̅ͮ̋ ͎͖̱̃̀̅q̗͎̫̫͓̾̋͊̈́ͬu̠̱̹͓ĕ͎̼̺̼̟͙͉͑̔͊̈͊͋ ̯͇̂̾m̖̝͈̜̖͉̃͋̏̈́͑́e̿̏ͣͮͧͤ ̣͚̙ͨͭ̅ͫͅd̘̅eṣ̮́̀ ̱͍ͬͨa̻̤͑ͮl̃̇̍ͭ̾̿̓g̯̞̮̰̫̋͒̐̍ͧo ̞̫ͯ̇tụ͖̖̳̳͈̩y̰ȍ̑̀͂ͩ͑̏ ̤ͪpa̬̤͓̪̓̋͆̚r͇̻̳̬̮̘͛ͩ̓̈̓͊a̬̰̤̬̹̯̒ͪ̐͛ͣ͗ ̟̳͐͆po̜̪̣͆ͣ̾de̊r̯͇̩͖̈̂͌ͭ ̓͑́͐͊̂v̠̘̏ͭö̩̬̎̄ͅl͖͙̬̾̉̈́v̪̤͕̝̒̅ͪͣḙ̟̙͙̬̜̘̈̎ͥ̍́ͧ́r̮̮ͬ͗ ̩̥̦͖̦ͣ̋̈̌ͬ͒ͅa c͚a͙̝̤̜̼s̖͔̱͚̜̍̍̓̿͛a͈̞.̐̑̎͌";
    cout<<"\n\n\n\n\n\nVidas: "<<pv;
    cout<<"\nIngresa 1 para continuar:   ";
    cin>>conta;
    } while(!conta);

    
        system("clear");
        cout<<"\n";
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
                                      ;0kNlX:o.;.. c:WNM;0WlW' c,;..' 0..;lK'dcN0)";
        cout<<"\n\n\t\t\t\tS̟i͉̭̟̖͗ͮͤ́ ẗ̠̱́̎a̰̹n͔̩̠ ̬̯̜͎͌͂ͯ͑soͤ͊lͦo͈͖ͤ̉ ̩͕̳̥̦̀ͩ̈ͤ́p̈́̃̿̍͒͒ü̆̋d͕̤͉͙̖̊̌̊ͧͪi̯̓e̟͇̬͇̰̔ͯ̃̾̓r̲̼̜̣ȃ͖͕̯̳̏̽ͩs͍͎͙͔̼̯ͭ͂͛ͨ̔̔ ̤̖͇̪̟́̾̄ͣ͛da̜̻̺ͥͥ̔r̯͍̭͚͈̝̺͆̽͋̔̓ͤ̓mȇ̈́̅͛͛̌ ͩ̍͂͐̍ďos ͉͖͎̂̾̒d̞̰͂ͬe͈̔ ̿tû̇̄͊̚s̠̺͎̺͂ͬ̿̓ ̰̝͚́ͭ̈v̽ͤ̽̽̆̒̓ï̺̪̈́d̩̹̪aͨͨs͖̳͖͍̙̜̪.\n";
        cout<<"\t\t\tA̎ cặmbỉ͑̑o͈̱̠ͩͯ͑ p̼͗ue̒͋d̰͎͔o̯͓ͮͯ ͧ̾̋da̜͙rt̻̭ͩ̆ē̜̩̻ͤ̎ a̳̘̲͋̾ͨl̀g͓̾o͇͕ͭ̊ q̇u̝̗̅͑eͬͯ ͪte̦͆ ̩͙̬̍̆͋s̬͉̍̉e͖ͦrá͚͙̾̉ ̗d̂ͨe̫ͮͨͅ ̲͆g̟̫͓ͮͭ̇r̻ͅȁ̦ṉ̣ͭ͛ ̞̲ͣ̀v͍͙̈́ͬal͖̱͎ͥͮ̉or̰͕ ̃e̺̤̓ͣn t͚̏͂ͅu̪̘̭̽ͥ̊ ̂v̖̰̦̄̽̅ia̻ͥj̟͎e.̪\n";
        cout<<"\n\n\t\t\t\t\t1) Ayudar\t 2)No ayudar\n";
        cout<<"\n\n\n\n\n\nVidas: "<<pv;
        cout<<"\n¿Qué decides hacer\?   ";
        cin>>option;
        switch (option)
        {
        case 1:
            ayudar = true;
            break;
        case 2:
            ayudar = false;
            break;
        default:
            break;
        }
    
}

void help() {
    int seguir;

    do
    {
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
        pv -=2;
        azazel = true;
        cout<<"\n\nDe pronto la niña se transforma en un horrible ser infernal. Y con una terrorifica voz te grita:";
        cout<<"\n\n\t\t\tĀ̓̾ͥ̈̿̌q̠͔̭ͭ͒͛u̘͓e͕̪͙͕̦̰̭̽ͤ͑̒̓̋͒l͎̻͈̥ͩ̾̇̄ ̺͙̱̞̣s̩̦̞̱̻e͚͉̎͆r̯̯̜͊̑ͪ ͈̬ͬ̑q͐̄ue̟͇ͫ̌ ṱ̬̰e̻͓͚̼̳̹ͯ̇͗͋͆͊ a͋co̿̀̃ͭ̀ḿ̪̭͈̑̒͊ͅp̯̰͔̞̞̆̍̍̒ͤͬͅa̘̲̰͚̝̟̒̿̎̓͑̚ñ̫̺̬͕ͤ͗̆͌a̘̹̭͉̐̏ͤͦ s̬̦͔̦̤͇̀̔ͣ̆͒̚ẹ̬̠̫̫̼̪̑͐̂͊̓ͤ̓ ͨ̚ĥa̋̄ͧ̄̚c̙͇͊ͩě͕̹̺̭̦̞͙̇̏ͮ̈́ͤ̚ l̬̮̮͕̀ͣͮ̊la͆ͫͭ̃m̜̣͍͚̥̪̗̌̋̅̓͒͒̀a̓ͣ͐ͭr͇͍̈ͪ ̝̞̯̙̜̓͒ͯ̂͗A̯̱͙̫̬Z̀ͫ͊̉Ã̗̝̰̯̝̉̇ͦͭ̚ͅZ̄̏E͚͈ͅL̊̆̇ͨ ̞̼͔\n";
        cout<<"\t\t\tA͎̥ͬͬho̙ra̫ á̘̥̖͐ͪléj̞͎̠̃̒͂ate ͕͓͋͌y̲̭̟͊̌̓ sigͧ͑u͕͔̤ͤ̐ͪe̖͇̳̽͛ͥ t̯̾u ca̜͗mí͍̩͈̇̑n͍̻ͅŏ̫\n";
        cout<<"\n\n\nPerdiste 2 vidas.\n";
        cout<<"\n\n\nVidas: "<<pv;
        cout<<"\nIngresa 1 para continuar:  ";
        cin>>seguir;
    } while (!seguir); 
}

void nohelp() {
    int seguir;

    do
    {
        system("clear");
        azazel = false;
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
        cout<<"\n\tDe pronto la voz de la niña se torna grave y te grita con desesperación:\n\n\t\t\t\t\t\t\t ¡d̀ͩ̃͛̍̓̆̓̈́a͑̐̐me̞̤͖͍̙̬̜͔ͅ ̗̙͉̪̫̱̑͋̉ͧ͗̋ṭ̮̱͎̞̙͕̖̱ǔ̗̮̰̫͒͊̀s̪̯͊͛ ̦̻̥̲͓͖͙̦̲̏ͦ̓ͯ̆ͯ̃̏͆v̟̖̩̲̜i̞̫͉̥͍̱͍̰ͤ̓͑ͤͧ̅͑͌d̘ͯa̜̥s̤̰͓̭̎̑ͧͧ!\n\n";
        cin>>seguir;
    } while (!seguir);
}

void espejo() {
    bool seguir;
    int opcion;

    do
    {
        system("clear");
        cout<<"\n";
        cout<< R"(                                                             dlccc:::;;;,,,'''c   
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
        cout<<"\n\nIntentas escapar y llegas a una habitación desolada y lugubre. Dentro de ella observas y te acercas lentamente.\n";
        cout<<"\n\nSusurro: \"~Falta poco...para poder continuar es necesario cruzar el espejo.~\n";
        cout<<"\t  ~Esta es una decisión dificil pues muy pocos son capaces de dar \n\t  el salto al vacío y perder un poco de sí mismos.~";
        cout<<"\n\nAl ver tu mano notas que te desvaneces lentamente.\n";
        cout<<"\n\t\t1) Entrar al espejo";
        cout<<"\t\t2) No entrar al espejo";
        cout<<"\nDecidiste:   ";
        cin>>opcion;

        switch (opcion)
        {
        case 1:
            seguir = true;
            cruzar = true;
            break;
        case 2:
            seguir = true;
            cruzar = false;
            break;
        default:
            break;
        }
    } while (!seguir);  
};

void cruzandoespejo_si() {
    int conta;
    int contb;
    
    do
    {
        pv -= 3;
        system("clear");
        cout<<"\nDecidiste entrar al espejo.";
        cout<<"Al tocarlo, sientes cómo te absorbe poco a poco dentro de él.\n";
        cout<<"Todo se vuelve oscuro por un momento. Pero tú sientes paz.";
        cout<<"Has perdido 3 vidas";
        cout<<"\n\n\n\n\n\nVidas: "<<pv;
        cout<<"\nIngresa 1 para continuar:   ";
        cin>>conta;
    } while (!conta);

    do
    {
        system("clear");
        pv += 2;
        cout<<"Una luz ha salido del espejo, observas que tu cuerpo lentamente se materializa r\n";
        cout<<"El espejo te ha regalado 2 vidas";
        cout<<"Susurro: \"~Parece que el espejo ha recompensado tu valentía. Ahora debemos continuar~\"";
        cout<<"\n\n\n\n\n\nVidas: "<<pv;
        cout<<"\nIngresa 1 para continuar:   ";
        cin>>contb;
    } while (!contb);   
}

void cruzandoespejo_no() {
    int conta;
    int contb;

    do
    {
        pv -= 3;
        system("clear");
        cout<<"\nDecidiste alejarte del espejo.";
        cout<<"Mientras te alejas, voces y gritos emanan del espejo. Una energía te jala hacia del espejo y te obliga a entrar .\n";
        cout<<"Todo se vuelve oscuro por un momento y sientes miedo.";
        cout<<"Has perdido 3 vidas";
        cout<<"\n\n\n\n\n\nVidas: "<<pv;
        cout<<"\nIngresa 1 para continuar:   ";
        cin>>conta;
    } while (!conta);

    do
    {
        system("clear");
        cout<<"\nAl pasar al otro lado del espejo, éste se rompe y te atrapa del otro lado.\n";
        cout<<"Cada vez te pierdes más y más";
         cout<<"Susurro: \"~El espejo ha tenido qué guiarte por el camino y ha exijido algo a cambio. Quiza estas acercandote al destino final~\"";
        cout<<"\n\n\n\n\n\nVidas: "<<pv;
        cout<<"\nIngresa 1 para continuar:   ";
        cin>>contb;
    } while (!contb);   
}

void desafiofinal() {
    string nombre;
    //Variables combate jugador
    float pvcombate = pv;
    float tuventaja;
    //Variables combate ente
    float pvente = pv + 2;
    float suventaja;

    do
    {
        if (pvcombate >= 5)
        {
            system("clear");
            cout<<"Tienes más de 5 vidas";
        }
        else if (pvcombate < 5)
        {
            system("clear");
            cout<<"Tienes menos de 5 vidas";
        }
        
        
        
    } while (gameover == true || pv == 0);

    if (ganar == true)
    {
        finganar();
    }
    else if (ganar == false)
    {
        finperder();
    }
    
    
     /*cout<<"\nSientes que tu cuerpo se adentra a un espiral de caída libre. De pronto, frenas en seco.\n";
     cout<<"Llegas a un espacio completamente luminoso. La claridad te nubla la vista.\n";
     cout<<"No observas ni sientes nada. Cuando de pronto escuchas multiples voces acercándose,\n";
     cout<<"el ambiente empieza a temblar y ves a lo distancia una silueta oscura acercarse. Todo se torna oscuro y lúgubre.\n";
     cout<<"Las voces giran gritando a tu alrededor.\n";
     cout<<Susurro: Debes decidir tus últimos pasos hacia tu destino. Dame un NOMBRE para poder ayudarte.\n";
     cout<<"\n\n\tIngresa el nombre:";
     cin>>"\n\n\tnombre";


     
     */ 
}

void finganar(){
    /*cout<<"\nSientes a hilo arrastrarte desde el pecho y la velocidad de su movimiento es tan rápida que no logras observar nada a tu alrededor.\n"; 
    cout<<"Sientes que el oxígeno regresa a tu cuerpo. Das un suspiro, sientes de poco a poco tus extremidades , abres los ojos lentamentente.\n"; 
    cout<<"Todo parece estar normal. ¿Fue un sueño? Sabes que no. Pero sonríes al saber que termino.";*/

}
void finperder(){
    /*cout<<"\nLa oscuridad es cada vez más etérea. Dejas de oír las voces, quieres correr pero no puedes.\n"; 
    cout<<"Sabes que ya no hay un camino de regreso. No sabes como llegaste ahí y empiezas a olvidar todo lo se pasaste en el camino.\n";
    cout<<"Observas como te vas tornando en unx de ellxs. Tu cuerpo va mutando hasta convertirse en silueta oscura y alargada.\n";
    cout<<"Quieres gritar pero solo percibes gritos y lamentos, la mente se te nubla. El último pensamiento que había de ti se desvanece.\n";
    cout<<"\n\n\n\tGAME OVER";
*/
}