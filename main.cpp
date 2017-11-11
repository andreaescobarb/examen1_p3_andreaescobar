#include <iostream>
#include "general.h"
#include "marine.h"
#include "pieza.h"
#include <string>

using namespace std;

pieza*** CreateTab();
void deletetab(pieza***);
void printTab(pieza***);
pieza*** llenarTab(pieza***);

int main(int argc, char const *argv[]) {

  bool jugar = true;
  bool turnoP1 = true;
  bool turnoP2 = false;
  char continuar = 's';

  int px;
  int py;

  string p1;
  string p2;
  pieza*** tablero = CreateTab();
  printTab(llenarTab(tablero));

  while (continuar=='s'||continuar=='S') {
    while(jugar){
      cout<<"Ingrese nombre de player 1: "<<endl;
      cin>>p1;
      cout<<"Ingrese nombre de player 2: "<<endl;
      cin>>p2;
      while(turnoP1){ //turno de jugador 1
        cout<<"turno de player 1: "<<endl;
        cout<<"Piezas Blancas (B)"<<endl;
        cout<<"Ingrese posicion de pieza X";
        cin>>px;
        cout<<"Ingrese posicion de pieza Y";
        cin>>py;

        cout<<"--------------------------------------"<<endl;

        while ((px>0&&px<7)||(py>0&&py<7)) {
          cout<<"Posicion inexistente, intente de nuevo";
          cout<<"Ingrese posicion de pieza X";
          cin>>px;
          cout<<"Ingrese posicion de pieza Y";
          cin>>py;

        }


      }
      while(turnoP2){ //turno de jugador 2
        cout<<"turno de player 1: "<<endl;
        cout<<"Piezas Blancas (B)"<<endl;
        cout<<"Ingrese posicion de pieza X";
        cin>>px;
        cout<<"Ingrese posicion de pieza Y";
        cin>>py;

      }
    }
    cout<<"Desea continuar jugando [s/n]"<<endl;
    cin>>continuar;
  }

  return 0;
}

pieza*** CreateTab(){
  pieza*** tablero = new pieza**[8];
  for (int i = 0; i < 8; i++) {
    tablero[i] = new pieza*[8];
  }

  for (int i = 0; i < 8; i++) {
    for (int j = 0; j < 8; j++) {
      tablero[i][j]=NULL;
    }
  }
  return tablero;
}

void printTab(pieza*** tablero){
  for (int i = 0; i < 8; i++) {
    for (int j = 0; j < 8; j++) {
      if (tablero[i][j]) {
        if (dynamic_cast<marine*>(tablero[i][j])) {
          cout<<"[" <<dynamic_cast<marine*>(tablero[i][j])->getType() <<"]";
        }
        if (dynamic_cast<general*>(tablero[i][j])) {
          cout<<"[" <<dynamic_cast<general*>(tablero[i][j])->getType() <<"]";
        }
      }else{
        cout<<"[ ]";
      }
    }
    cout<<endl;
  }
}

pieza*** llenarTab(pieza*** tablero){
  tablero[0][0] = NULL;
  tablero[0][1] = new marine('N', 0, 1);
  tablero[0][2] = NULL;
  tablero[0][3] = new marine('N', 0, 3);
  tablero[0][4] = NULL;
  tablero[0][5] = new marine('N', 0, 5);
  tablero[0][6] = NULL;
  tablero[0][7] = new marine('N', 0, 7);

  tablero[1][0] = new marine('N', 1, 0);
  tablero[1][1] = NULL;
  tablero[1][2] = new marine('N', 1, 2);
  tablero[1][3] = NULL;
  tablero[1][4] = new marine('N', 1, 4);
  tablero[1][5] = NULL;
  tablero[1][6] = new marine('N', 1, 6);
  tablero[1][7] = NULL;

  tablero[2][0] = NULL;
  tablero[2][1] = new marine('N', 2, 1);
  tablero[2][2] = NULL;
  tablero[2][3] = new marine('N', 2, 3);
  tablero[2][4] = NULL;
  tablero[2][5] = new marine('N', 2, 5);
  tablero[2][6] = NULL;
  tablero[2][7] = new marine('N', 2, 7);

  tablero[3][0] = NULL;
  tablero[3][1] = NULL;
  tablero[3][2] = NULL;
  tablero[3][3] = NULL;
  tablero[3][4] = NULL;
  tablero[3][5] = NULL;
  tablero[3][6] = NULL;
  tablero[3][7] = NULL;

  tablero[4][0] = NULL;
  tablero[4][1] = NULL;
  tablero[4][2] = NULL;
  tablero[4][3] = NULL;
  tablero[4][4] = NULL;
  tablero[4][5] = NULL;
  tablero[4][6] = NULL;
  tablero[4][7] = NULL;

  tablero[5][0] = new marine('B', 4, 0);
  tablero[5][1] = NULL;
  tablero[5][2] = new marine('B', 4, 2);
  tablero[5][3] = NULL;
  tablero[5][4] = new marine('B', 4, 4);
  tablero[5][5] = NULL;
  tablero[5][6] = new marine('B', 4, 6);
  tablero[5][7] = NULL;

  tablero[6][0] = NULL;
  tablero[6][1] = new marine('B', 5, 1);
  tablero[6][2] = NULL;
  tablero[6][3] = new marine('B', 5, 3);
  tablero[6][4] = NULL;
  tablero[6][5] = new marine('B', 5, 5);
  tablero[6][6] = NULL;
  tablero[6][7] = new marine('B', 5, 7);

  tablero[7][0] = new marine('B', 7, 0);
  tablero[7][1] = NULL;
  tablero[7][2] = new marine('B', 7, 2);
  tablero[7][3] = NULL;
  tablero[7][4] = new marine('B', 7, 4);
  tablero[7][5] = NULL;
  tablero[7][6] = new marine('B', 7, 6);
  tablero[7][7] = NULL;
  return tablero;
}
