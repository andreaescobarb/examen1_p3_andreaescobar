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

void general::setPosx(){
  posx = pposx;
}

void general::setPosy(){
  posy = pposy;
}

void general::setType(char tipo){
  type = tipo;
}

bool general::move(int x, int y){

}

general::~general(){

}
