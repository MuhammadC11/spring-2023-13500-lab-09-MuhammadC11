#include <iostream>
#include "funcs.h"
#include "coord3d.h"
#include <cmath>

int main()
{
  // Task A
  Coord3D taskA = {10, 20, 30};
  std::cout << length(&taskA) << std::endl;

  // Task B
  Coord3D example1B = {1, 2, 3};
  Coord3D example2B = {4, 5, 6};
  std::cout << "Address of example1B: " << &example1B << std::endl;
  std::cout << "Address of example2B: " << &example2B << std::endl;
  Coord3D *ans = fartherFromOrigin(&example1B, &example2B);
  std::cout << "ans = " << ans << std::endl;

  // Task C
  Coord3D pos = {1, 2, 3};
  Coord3D vel = {4, 5, 6};
  move(&pos, &vel, 2.0);
  std::cout << "pos = (" << pos.x << ", " << pos.y << ", " << pos.z << ")" << std::endl;

  return 0;
}
