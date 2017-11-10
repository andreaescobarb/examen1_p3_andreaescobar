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

bool marine::move(int x, int y, pieza*** tablero){
  bool moverse = false;

  for (int i = 0; i < 8; i++) {
    for (int j = 0; j < 8; j++) {
      if (true) {
        /* code */
      }
    }
  }
  return moverse;
}

marine::~marine(){

}
