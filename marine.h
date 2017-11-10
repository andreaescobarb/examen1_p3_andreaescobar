#ifndef marine_h
#define marine_h
#include "pieza.h"
 class marine: public pieza{
   private:
      char type;
      int posy;
      int posx;
    public:
      //constructores
      marine(char, int, int);

      //getters and setters
      char getType();
      int getPosx();
      int getPosy();

      void setType(char);
      void setPosx(int);
      void setPosy(int);

      bool move(int, int, pieza***);
      ~marine();
 };

 #endif
