//
// Created by mbermejo on 17/10/2024.
//

#include "CPunto.h"


double CPunto::distancia(CPunto  p)
{
    return sqrt(pow((p.getX() - x),2) + pow( (p.getY() - y), 2));
}
