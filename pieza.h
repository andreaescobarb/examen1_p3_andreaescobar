#ifndef pieza_h
#define pieza_h

class pieza{
  public:
    virtual bool move(int, int, pieza***, int, int);
    virtual bool eat(int, int, pieza***, int, int);
};

#endif
