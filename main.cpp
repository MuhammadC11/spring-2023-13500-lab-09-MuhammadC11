#include <iostream>
#include "funcs.h"
#include "coord3d.h"
#include <cmath>

int main()
{
  // Task A

  Coord3D taskA = {10, 20, 30};             // create a Coord3D object and initialize it to (10,20,30)
  std::cout << length(&taskA) << std::endl; // print the length of the vector

  // Task B

  Coord3D example1B = {1, 2, 3}; // create two Coord3D objects
  Coord3D example2B = {4, 5, 6};
  std::cout << "Address of example1B: " << &example1B << std::endl; // print the address of each object
  std::cout << "Address of example2B: " << &example2B << std::endl;
  Coord3D *ans = fartherFromOrigin(&example1B, &example2B); // pass the addresses of the objects to fartherFromOrigin
  std::cout << "ans = " << ans << std::endl;                // print the address that is returned

  // Task C

  // create a Coord3D object and initialize it to (1,2,3)
  Coord3D pos = {1, 2, 3};
  // create a Coord3D object and initialize it to (4,5,6)
  Coord3D vel = {4, 5, 6};

  // pass the address of pos, the address of vel, and 2.0 to move which will update pos to be the new position after 2 seconds have passed
  move(&pos, &vel, 2.0);

  std::cout << "pos = (" << pos.x << ", " << pos.y << ", " << pos.z << ")" << std::endl;
  // print the new position

  // Task D
  double x = 10;
  double y = 20;
  double z = 30;
  Coord3D *ppos = createCoord3D(x, y, z);
  double xVel = 5.5;
  double yVel = -1.4;
  double zVel = 7.77;
  Coord3D *pvel = createCoord3D(xVel, yVel, zVel);
  move(ppos, pvel, 10.0);
  std::cout << "Coordinates after 10 seconds: " << (*ppos).x << " " << (*ppos).y << " " << (*ppos).z << std::endl;

  deleteCoord3D(ppos);
  deleteCoord3D(pvel);
  return 0;
}
