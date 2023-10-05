/* Planets | (C) 2023 Antonios J. Bokas
Purpose: Store data about the planets in the Milky Way galaxy. */

#include <stdio.h>
#include <stdlib.h>

typedef struct galaxy {
  int pos;
  int moons;
  int radius; // km
  float mass; // 10^24 kg
} Galaxy;

int main(void) {

  char planet[10][10] = {
    "Mercury",
    "Venus",
    "Earth",
    "Mars",
    "Jupiter",
    "Saturn",
    "Uranus",
    "Neptune",
    "Pluto"
  };

  Galaxy milky_way[9];
  
  milky_way[0].pos = 1;
  milky_way[0].moons = 0;
  milky_way[0].radius = 2440;
  milky_way[0].mass = 0.330;

  milky_way[1].pos = 2;
  milky_way[1].moons = 0;
  milky_way[1].radius = 6052;
  milky_way[1].mass = 4.87;

  milky_way[2].pos = 3;
  milky_way[2].moons = 1;
  milky_way[2].radius = 6378;
  milky_way[2].mass = 5.97;

  milky_way[3].pos = 4;
  milky_way[3].moons = 2;
  milky_way[3].radius = 3391;
  milky_way[3].mass = .642;

  milky_way[4].pos = 5;
  milky_way[4].moons = 79;
  milky_way[4].radius = 71472;
  milky_way[4].mass = 1898;

  milky_way[5].pos = 6;
  milky_way[5].moons = 82;
  milky_way[5].radius = 6263;
  milky_way[5].mass = 568;

  milky_way[6].pos = 7;
  milky_way[6].moons = 27;
  milky_way[6].radius = 25559;
  milky_way[6].mass = 86.8;

  milky_way[7].pos = 8;
  milky_way[7].moons = 14;
  milky_way[7].radius = 24764;
  milky_way[7].mass = 102;

  milky_way[8].pos = 9;
  milky_way[8].moons = 5;
  milky_way[8].radius = 1183;
  milky_way[8].mass = 0.0130;

  puts("Milky Way Galaxy Statistics\n");
  puts("Planet\t\tPos.\tMoons\tRadius km\tMass 10^24 kg");
  puts("-----------------------------------------------------------------");
  for (int i = 0; i < 9; i++) {
    printf("%s\t\t%d\t%d\t%d\t\t%.2f\n",
      planet[i], milky_way[i].pos, milky_way[i].moons, milky_way[i].radius, milky_way[i].mass
    );
  }
}