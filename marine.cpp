#include "pieza.h"
#include "marine.h"

marine::marine(char tipo, int pposx, int pposy){
  type = tipo;
  posx = pposx;
  posy = pposy;
}
char marine::getType(){
  return type;
}

int marine::getPosx(){
  return posx;
}

int marine::getPosy(){
  return posy;
}

void marine::setPosx(int pposx){
  posx = pposx;
}

void marine::setPosy(int pposy){
  posy = pposy;
}

void marine::setType(char tipo){
  type = tipo;
}

bool marine::move(int x, int y, pieza*** tablero, int moverx, int movery){
bool moverse = true;
  if (x==moverx) {
    if (y<movery) {
      for (int i = y; i <= movery; i++) {
          if (dynamic_cast<marine*>(tablero[x][i])) {
            moverse = false;
          }
        }
      }else{
        for (int i = movery; i >= y; i++) {
            if (dynamic_cast<marine*>(tablero[x][i])) {
              return false;
            }
          }
      }

    }
    return moverse;
  }

}

bool marine::eat(int x, int y, pieza*** tablero, int moverx, int movery){
 return false;
}
marine::~marine(){

}
