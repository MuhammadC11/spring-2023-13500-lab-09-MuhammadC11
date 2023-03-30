#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

TEST_CASE("Task A")
{
    Coord3D taskA = {10, 20, 30};                // create a Coord3D object and initialize it to (10,20,30)
    CHECK(length(&taskA) == 37.416573867739416); // print the length of the vector
}

TEST_CASE("Task B")
{
    Coord3D p = {1, 2, 3}; // create two Coord3D objects
    Coord3D q = {4, 5, 6};
    CHECK(fartherFromOrigin(&p, &q) == &q); // pass the addresses of the objects to fartherFromOrigin
}

TEST_CASE("Task C")
{
    Coord3D pos = {1, 2, 3};
    Coord3D vel = {4, 5, 6};
    move(&pos, &vel, 2.0);
    CHECK(pos.x == 9);
    CHECK(pos.y == 12);
    CHECK(pos.z == 15);
}
