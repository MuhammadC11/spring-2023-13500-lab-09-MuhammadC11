#include <iostream>
#include "funcs.h"
#include "coord3d.h"
#include <cmath>

double length(Coord3D *p)
{
    double xvalue = p->x; // -> is the same as (*p).x but we use the arrow operator because it is better practice when dealing with pointers.
    double yvalue = p->y;
    double zvalue = p->z;
    double sqrSum = sqrt(pow(xvalue, 2) + pow(yvalue, 2) + pow(zvalue, 2));
    return sqrSum;
}

Coord3D *fartherFromOrigin(Coord3D *p1, Coord3D *p2)
{
    double p1Length = length(p1);
    double p2Length = length(p2);
    if (p1Length > p2Length)
    {
        return p1;
    }
    else
    {
        return p2;
    }
}

void move(Coord3D *ppos, Coord3D *pvel, double dt)
{
    ppos->x = ppos->x + pvel->x * dt; // update ppos to be the new position after dt seconds have passed. multiply pvel by dt to get the distance traveled in that time. add that distance to the current position to get the new position.
    ppos->y = ppos->y + pvel->y * dt;
    ppos->z = ppos->z + pvel->z * dt;
}

Coord3D *createCoord3D(double x, double y, double z)
{
    Coord3D *result = new Coord3D;
    Coord3D value = {x, y, z};
    *result = value;
    return result;
}

void deleteCoord3D(Coord3D *p)
{
    delete p;
}