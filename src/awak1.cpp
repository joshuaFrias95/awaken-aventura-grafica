
#include <cstdlib>
#include <iostream>
#include <string>
#include <ctime>
#include <thread>

using namespace std;

int main() {
    if (pvcombate >= 5)
            {
                system("clear");
                cout<<"Tienes más de 5 vidas"
            }
            else if (pvcombate < 5)
            {
                system("clear");
                cout<<"Tienes menos de 5 vidas"
            }
            
            if (pvcombate == 0)
            {
                gameover = true;
                ganar = false;
            }
            else if (pvcombate >0)
            {
                gameover = true;
                ganar = true;
            }
  
    
    return 0;
}

/*
string nombre;

    cout<<"Dame tu nombre\n";
    getline(cin, nombre);
    cout<<"Te llamas ";
    cout<<nombre;
*/