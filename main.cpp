#include <iostream>
#include "general.h"
#include "marine.h"
#include "pieza.h"

pieza*** CreateTab();
void deletetab(pieza***);
void printTab(pieza***);

int main(int argc, char const *argv[]) {
  bool jugar = true;
  bool turnoP1 = true;
  bool turnoP2 = false;
  while(jugar){
    while(turnoP1){ //turno de jugador 1
      
    }
    while(turnop2){ //turno de jugador 2

    }
  }
  return 0;
}

pieza*** CreateTab(){
  pieza*** tablero = new pieza**[8];
  for (int i = 0; i < 8; i++) {
    tablero[i] = new pieza[8];
  }

  for (int i = 0; i < 8; i++) {
    for (int j = 0; j < 8; j++) {
      tablerop[i][j]=NULL;
    }
  }
  return tablero;
}
