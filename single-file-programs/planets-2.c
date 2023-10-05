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
  
  Planet mer;
  Planet *mer_p = &mer;
  mer_p->pos = 1;
  mer_p->moons = 0;
  mer_p->radius = 2440;
  mer_p->mass = 0.330;
  
  Planet ven;
  Planet *ven_p = &ven;
  ven_p->pos = 2;
  ven_p->moons = 0;
  ven_p->radius = 6052;
  ven_p->mass = 4.87;
  
  Planet ear;
  Planet *ear_p = &ear;
  ear_p->pos = 3;
  ear_p->moons = 1;
  ear_p->radius = 6378;
  ear_p->mass = 5.97;
  
  Planet mar;
  Planet *mar_p = &mar;
  mar_p->pos = 4;
  mar_p->moons = 2;
  mar_p->radius = 3391;
  mar_p->mass = .642;
  
  Planet jup;
  Planet *jup_p = &jup;
  jup_p->pos = 5;
  jup_p->moons = 79;
  jup_p->radius = 71472;
  jup_p->mass = 1898;
  
  Planet sat;
  Planet *sat_p = &sat;
  sat_p->pos = 6;
  sat_p->moons = 82;
  sat_p->radius = 6263;
  sat_p->mass = 568;
  
  Planet ura;
  Planet *ura_p = &ura;
  ura_p->pos = 7;
  ura_p->moons = 27;
  ura_p->radius = 25559;
  ura_p->mass = 86.8;
  
  Planet nep;
  Planet *nep_p = &nep;
  nep_p->pos = 8;
  nep_p->moons = 14;
  nep_p->radius = 24764;
  nep_p->mass = 102;
  
  Planet plu;
  Planet *plu_p = &plu;
  plu_p->pos = 9;
  plu_p->moons = 5;
  plu_p->radius = 1183;
  plu_p->mass = 0.0130;
  
  puts("Planets\n\nStatistics about the Milky Way.\n");
  puts("Name\t\tPos.\tMoons\tRadius\t\tMass");
  puts("-----------------------------------------------------------------");
  printf("Mercury\t\t%d\t%d\t%d km\t\t%f 10^24 kg\n", mer.pos, mer.moons, mer.radius, mer.mass);
  printf("Venus\t\t%d\t%d\t%d km\t\t%f 10^24 kg\n", ven.pos, ven.moons, ven.radius, ven.mass);
  printf("Earth\t\t%d\t%d\t%d km\t\t%f 10^24 kg\n", ear.pos, ear.moons, ear.radius, ear.mass);
  printf("Mars\t\t%d\t%d\t%d km\t\t%f 10^24 kg\n", mar.pos, mar.moons, mar.radius, mar.mass);
  printf("Jupiter\t\t%d\t%d\t%d km\t%f 10^24 kg\n", jup.pos, jup.moons, jup.radius, jup.mass);
  printf("Saturn\t\t%d\t%d\t%d km\t\t%f 10^24 kg\n", sat.pos, sat.moons, sat.radius, sat.mass);
  printf("Uranus\t\t%d\t%d\t%d km\t%f 10^24 kg\n", ura.pos, ura.moons, ura.radius, ura.mass);
  printf("Neptune\t\t%d\t%d\t%d km\t%f 10^24 kg\n", nep.pos, nep.moons, nep.radius, nep.mass);
  printf("Pluto\t\t%d\t%d\t%d km\t\t%f 10^24 kg\n", plu.pos, plu.moons, plu.radius, plu.mass);
  return EXIT_SUCCESS;
}