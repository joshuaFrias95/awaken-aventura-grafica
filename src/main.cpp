//Torrejón Torres Carla
//Torrejón Torres Nadia
//Frías Hernández Joshua

#include <iostream>
using namespace std;

int main() {

	bool gameover = false; //Booleano de fin del juego
	bool boolMenu = false; //El booleano del menú principal
	int start; //Primer variable de inicio
	int play; //Variable usada para el menú general del juego
	int pv = 100; //Puntos de vida
	
	do {
		
		cout<<"Presiona 1 para continuar:";
		cin>>start;
	} while (start != 1);
	
	do {
		system("clear");
		cout<< R"(
    .                    .      ',',. .              .                               .,'  
                                KMNMo                                                .WX  
    .   . .   .    .   . .  .   KMdl' .   . .        .    ..OKOK:   .  . .   .     ;K0MX. 
    .                    .    clXM;   'l;        ;l' .   .clNM0K;                  :MN0k. 
      ...                     XWNM;   cMk..      xMl    ..WWWM,              ..    :MK    
    . xMo .   .    .   . .  ..XW;'.   lMNMX..    kMl . ,MNWN,'.     .  . .   OMc   :MK .  
    . xMKkc        lk,   .   .XW.     lMNMX.     xMl ;kOMNdo. lkxkxkc      dkXMc   :MK    
      kMNMx        OMc .;'   .XW.   .;dWNMX.     kMx,dMWWK.   OMNWNWd     .XMWMd,. :MK    
      xMNMx        OMc :Mk    XW.   oMd ;MX.     xMNMNMO      OMc         .XMNMNMo :MK    
    kNNMNMNNk      OMc :MNNO .XW.   oMd ;MNXK.   xMNMWMNN0.   OMNNKNKNO   .XMo:OMo :MK    
    0MKOk0KMO      OMkokMWMK .XW.   oM0oxMWWN.   kMKOO00MX.   OMKOOOk0d   .XM; dMOokMK    
    0M: . :M0...   OMWMNMWMK..XW. ..dMWMNMNWN.   kMl . ,MX'.. OMc   .  . ..XM; dMWMWMK .  
    0M:   :MNMN.   OMNMx.lMWMWNW. kMWMx...'WN.   xMl . ,MNWN. OMc         .XM; ..oMWMK    
    0MKOkO0MNMN.   OMWMx 'odMWNW. kM0o;   .WN. dOXMl . .ooWWOOXMKOkOkOd .OONM;   oMWMK    
    0MXX0XKXKMWc:. OMWMx . .XKNW. kMo .   .WNc:KMXXc .   .KKWMKXKXKX0Xk..WWKX,   cXKXk .  
    0M:     'MWWM' OMNMd      XW. kMo     .WWWWNM:         .NM,         .WW.              
    ,;.     .;:WM' ';,;.      ,,. ';. .   .;;;;,;.   .     .,;.         .;;. .            
    .   . .   .xk. .   . .            .   . .        .    .   .     .    .   .     .   .  
		)"<<endl;
		cout<< R"(			                                                                                                                                                                                                                                                                                                                                                                                                          
                                          ..                                    
                              ......,;cc:;,,'..''....                           
                        ..,;;,'';::lollooollllolccc:c:,'..                      
                     .,:c:;,coxodoooc;,'''..',,:loddllc:;:;,.                   
                 ..,:ccoxxodoc;,::;'.';;;,,'..,lloc;;lxkocc:,;,..               
              ...':ldkolc,;,,';cxk00KXXXNNXXXXKOkxddxxo:;;oddc:;'...            
             .,;:dxdl;',;ldxkKXWNNWNWWWWMMMWWWWMMMMN0kxkxo;,coxdc,,,..          
         ..,cdxlc,.;coxxoccOXKNXXNXNNNNNNWNNNWNXXNNMMMNxkkkkxxc:lkdl;.          
        .cooc,',;ckkdl,...0KKNXXXXXKNWMMMMWKKXXNKXKKWWMNllooxokxl,,lxxo;.       
       .';;,;okOd:,......:N00NWNXX0WMMMMMMd';WXXXKXXKNMMkolcllcddxxc..';::'.    
    .'',cllocoKd;.    .. cNK0KXNNNOWMMMMMMMMMMXXXKNN0KMMOl;'....cdxko:..  ...   
   .l'lOxoc:',c:l..   .  .XOKXXKXXN0XNMMMMMMNNKXKXK0KXMM:... ...,cOKd;..        
    .':;oooxdxxocxc;..... .0KKKKXNXNXXXXXXXXXXNXNKKKNWN;  ...;;c;lc:'...        
          ..'.,::loddl:;,...c0KKK0XKXNXXNXXXXKKXKXKWNd....;clccoloc;;'.         
              .....,ccllllc;;.;d0KNKXKKXKXKXKKXKWKx:..;;lllllllc'..             
                    .,clcloocoll;:loddkkOkOkxdoc;;;clllclcll;..                 
                       ..,cllc:c:::c:ccccc:lllldlcooollol,'.'.                  
                            ..',:c:::::cccccccc:;:,'......                      
                                  .......','.'''''''...                         
		)"<<endl;

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
			boolMenu=true;
			break;

			case 3:
			system("clear");
			cout<<"El siguiente proyecto ha sido elaborado para la materia de Informática General - Cátedra Tirigall"<<endl;
			cout<<"de la carrera de Artes Multimediales de la Universidad Nacional de las Artes (Buenos Aires, Argentina)"<<endl<<endl;
			cout<<"Realizadores:"<<endl<<endl<<endl;
			cout<<"Carla Torrejón"<<endl;
			cout<<"Nadia Torrejón"<<endl;
			cout<<"Joshua Frías\n\n"<<endl;
			cout<<R"(
				                                                            
                                                            
 .                   ...       .          .              .. 
 .                   xWM:      .        ...            ..0x 
                    'kK. .,.    .'.   .,WNK            ,MNd 
    ,'              NXk  ;Mc'   .M:  ,dWKc         .;  ,M,  
 .  00c.    .c.     Nc   ;MWx  ..M:.cXXO.'ccc;    :kN. ,M,  
    0WW.    'M;.o.  Nc  :dkNx   .MkxMOc  oWkxl    NWNo',M,  
  .xXWMx;   'M;,Mk; Nc  kO KKd. .MWWMk:  oWxddx.  N0dW:,M,  
  'MxloNo   'MOOMWd Nc  kXkNWN. .MxloXx  oNollo.  No.W0OM,  
  'M,  XKO. 'MWKcNXOWc.0NKccxN. .M:  KXO.oN       No.c0WM,  
 .'MXKXWWW. 'MWO ,xWWc.Md'  cN.lXM:  ,oWKXWXKKX';XWo  kWM,  
  'Mc'''dWNc'MWO  .'Nc.M:   cWNNX'.   .,Wd'''''.:W,.  .''.  
  ...   ..Wc ...    .....   .....       ..      ..          
          ..                                                
 .                             .                            
                                                            

			)"<<endl;
			boolMenu=true;
			break;

			case 4:
			system("clear");
			cout<<R"(                      .,:cc:cccloooc''.                                        
                                       .llc;'  ......',;cok0d;                                      
                                      'lOl.. .........'.,coxOxc.                                    
                                      l00l.....;.....,:',cclOKK:                                    
                                      l00l.':odx,....lxxddll0KKkl                                   
                                      l00l.:dddd,....cdxkOol0KKKOl;                                 
                                      l00l...',;.....;:ccc:c0KKKK0x                                 
                                      l00l....':.....;c,;:x0KKKKK0Ox'                               
                                      l0Oxo,...,'..',;:;:ckXKKKKK00O;                               
                                    .;okOO0d;.'ok0000OkxOKKKKKK00OOxxo                              
                                      ,ldk000ko,lddddoo0XXKKKKK000Okxl                              
                                       .ok00000KKKKKXXKKKKKKKKK000Okxl                              
                                        'lOO0000KKKKKKKKKKKKK000000Okxdc                            
                                         ,OO0000KKKKKKKKKKKKKKKK000Okxxc                            
                                         'dk0000KKKKKKKKKKKKKKK0000kkxxoc.                          
                                         'dk00000000KKKKKKKKKKK0000kxxdxx'                          
                                         'dk0000000KKKKKKKKKKK000000Oxxxxl:                         
                                         'dxO0OkO00KKKKKKKKKKKK00000kdodx.                          
                                         'dddOOxO00000KKKKKKKK000000kd:lk.                          
                                        .;ddxOOkO000000KKKKKKK000000kxxk0'                          
                                        ':ddxO000000000O0KKKKK0000Okkkkkx.                          
                                       .looxk0000000O00OO0000O00O0Oxxxxxd.                          
                                       .cook000000OO0KKOOO00OO0Ok000kl .d.                          
                                       .cook000000OOk00OO000000Ok0Oxdl,;o:,                         
                                       .cook0000OO0OOO0O0K00000OO0Oddc .oc;                         
                                        cllx0000, d0000Oxlk0OO0OO0Oddo,,,co.                        
                                        ,:lol:cxxxO0000x:.o0xk0000Odc;.. .;                         
                                         .llc;:ok00kdO0dookOxxxO00Oo' ..                            
                                      .':cloodolk0kdoO0dx0o:dkOO00Oo;.   .'                         
                                      .. 'oolllloodxkkOOx:ccld0000Oo;':cc.                          
                                         .c::lccccld0xoOc 'lxxok0xdllllll.                          
                                          . .:cccccldllOc 'lOl :Odl .,ccc.                          
                                   .    .. .;'..,,clllllc:coxdl'.lol..:,                            
                                      .,..;::.,l'...c..:;'coolc;;ll;. :,                            
                                      ':::c:::cclc..:'':, ,lc,   :;  .:,                            
                                      '::,..  .ccc. .  ;c:::c, .'::clc:'                            
                                 ..   ';,.   .. ,::cc,'::::,..::::::c;                              
                                      ';.. .'..'..;cc. .,::;  ',;...''                              
                                      ., .;;;;;:. ,;...,;;;;...,;...                                
                                      .,    .;::. ,'   ,;;;:;,,;;'',.                               
                                      .,     ::;'':'   ,:;'.,;;;,  ,'.                              
                                     .';,.   :;.,;:'   ,,...;;;;'  ,..  .                           
                                    .:. ...   .'..,,,,,,'.';:;,,'..,.                               
                                    .,'...'.    ';,,'....:;;,,,....;.                               
                                .  '...'.   . .;;;.  ..  ...',,,'',;;,                              
                                   .. ..     ,,;.   ...    .'''''..;.                               
                        .        ...     .'..'.    .,'.   .'.. .'                                   
                                 ..   .. .'.     .  .    ..   ..'   ..                              
                                   .   .'.     ....    ...   .,.                                    
                                      ..                      ....   .    .                         
                                 ..   ..              ..                   ..                       
                           ..............................................                     ..    
                                        .... .................                       ......,,. ..   
                                                                                           .        

			)"<<endl<<endl;
			cout<<"¡Gracias por jugar!\n";
			boolMenu=true;
			break;

			default: 
			cout<<"Opción incorrecta\n";
			boolMenu=true;
			break;
		}
	} while (!boolMenu);

	if (play == 1) {
		do {
		system("clear");
		cout<<"Sientes tu cuerpo adormecido.\n";
		cout<<"La habitación está oscura\n";
		cout<<"De repente escuchas un sonidi\n\n";
		cout<<"Pasos..\n";
		} while (pv >= 1);
	}

	return 0;
}