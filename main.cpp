/*----------------------------------------------
 * Dato de entrada:  x1,y1, x2, y2 (double)
 * Dato de Salida:   distancia (double)
 -----------------------------------------------*/


#include "CPunto.h"

int main()
{
  CPunto  p1(89.9, 33.3);
  CPunto  p2( 11.22, 5.55);

  cout << "La distancia es: " << p1.distancia(p2) << "\n";

  CPunto * pP3 = new CPunto(2.1, 3.3);
  CPunto *pP4 = new CPunto( 9.9, 8.8);
  cout << "La distancia es: " << pP3->distancia(*pP4);
  delete pP3;
  pP3 = nullptr;
  delete pP4;
  pP4 = nullptr;
    return 0;
}
