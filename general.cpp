#include "pieza.h"
#include "general.h"

general::general(char tipo, int pposx, int pposy){
  type = tipo;
  posx = pposx;
  posy = pposy;
}
char general::getType(){
  return type;
}

int general::getPosx(){
  return posx;
}

int general::getPosy(){
  return posy;
}

void general::setPosx(int pposx){
  posx = pposx;
}

void general::setPosy(int pposy){
  posy = pposy;
}

void general::setType(char tipo){
  type = tipo;
}

bool general::move(int x, int y, pieza*** tablero, int moverx,int movery){
  return false;
}
bool general::eat(int x, int y, pieza*** tablero, int moverx, int movery){
  return false;
}

general::~general(){

}
