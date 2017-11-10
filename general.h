#ifndef general_h
#define general_h

#include "pieza.h"

class general: public pieza{
  private:
     char type;
     int posy;
     int posx;
  public:
     //constructores
     general(char, int, int);

     //getters and setters
     char getType();
     int getPosx();
     int getPosy();

     void setType(char);
     void setPosx(int);
     void setPosy(int);

     bool move(int, int, pieza***);
     //destructor

     ~general();
};

#endif
