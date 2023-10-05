/* Planets | (C) 2023 Antonios J. Bokas 
Purpose: Store data about the planets in the Milky Way galaxy. */

#include <stdio.h>
#include <stdlib.h>

typedef struct planet {
  int pos;
  int moons;
  int radius;
  float mass; // 10^24 kg
} Planet;

int main(void) {
  
  Planet mercury;
  mercury.pos = 1;
  mercury.moons = 0;
  mercury.radius = 2440;
  mercury.mass = 0.330;
  
  Planet venus;
  venus.pos = 2;
  venus.moons = 0;
  venus.radius = 6052;
  venus.mass = 4.87;
  
  Planet earth;
  earth.pos = 3;
  earth.moons = 1;
  earth.radius = 6378;
  earth.mass = 5.97;
  
  Planet mars;
  mars.pos = 4;
  mars.moons = 2;
  mars.radius = 3391;
  mars.mass = .642;
  
  Planet jupiter;
  jupiter.pos = 5;
  jupiter.moons = 79;
  jupiter.radius = 71472;
  jupiter.mass = 1898;
  
  Planet saturn;
  saturn.pos = 6;
  saturn.moons = 82;
  saturn.radius = 6263;
  saturn.mass = 568;
  
  Planet uranus;
  uranus.pos = 7;
  uranus.moons = 27;
  uranus.radius = 25559;
  uranus.mass = 86.8;
  
  Planet neptune;
  neptune.pos = 8;
  neptune.moons = 14;
  neptune.radius = 24764;
  neptune.mass = 102;
  
  Planet pluto;
  pluto.pos = 9;
  pluto.moons = 5;
  pluto.radius = 1183;
  pluto.mass = 0.0130;
  
  puts("Planets\n\nStatistics about the Milky Way.\n");
  puts("Name\t\tPos.\tMoons\tRadius\t\tMass");
  puts("-----------------------------------------------------------------");
  printf("Mercury\t\t%d\t%d\t%d km\t\t%f 10^24 kg\n", mercury.pos, mercury.moons, mercury.radius, mercury.mass);
  printf("Venus\t\t%d\t%d\t%d km\t\t%f 10^24 kg\n", venus.pos, venus.moons, venus.radius, venus.mass);
  printf("Earth\t\t%d\t%d\t%d km\t\t%f 10^24 kg\n", earth.pos, earth.moons, earth.radius, earth.mass);
  printf("Mars\t\t%d\t%d\t%d km\t\t%f 10^24 kg\n", mars.pos, mars.moons, mars.radius, mars.mass);
  printf("Jupiter\t\t%d\t%d\t%d km\t%f 10^24 kg\n", jupiter.pos, jupiter.moons, jupiter.radius, jupiter.mass);
  printf("Saturn\t\t%d\t%d\t%d km\t\t%f 10^24 kg\n", saturn.pos, saturn.moons, saturn.radius, saturn.mass);
  printf("Uranus\t\t%d\t%d\t%d km\t%f 10^24 kg\n", uranus.pos, uranus.moons, uranus.radius, uranus.mass);
  printf("Neptune\t\t%d\t%d\t%d km\t%f 10^24 kg\n", neptune.pos, neptune.moons, neptune.radius, neptune.mass);
  printf("Pluto\t\t%d\t%d\t%d km\t\t%f 10^24 kg\n", pluto.pos, pluto.moons, pluto.radius, pluto.mass);
  return EXIT_SUCCESS;
}