/* File     : RTG.c
* Author    : PeakNoise
* Date      : 12.02.2014
* Porpuse   : function for RTG generating
* Compilator: GCC
*/

#include <stdio.h>
#include <stdlib.h>
#include "RTG.h"
#include <time.h>
#include <math.h>

void InitializeTime(TIME* timeG)
{
  srand(time(NULL)); // Initialize of random
  timeG->hour = 0;
  timeG->minute = 0;
  timeG->second = 0;
}

void TimeGenerating(TIME* timeG, const int rushHour, const double sigma)
{
  double rand1, rand2;

  rand1 = rand()/(double)RAND_MAX; //generate a random number between 0-1
  rand2 = rand()/(double)RAND_MAX; //generate a random number between 0-1

  if(rand1 == 0)
  {
    rand1= 1.;
  }
  
  timeG->hour = (int)(sqrt(-2*log(rand1))*cos(2*3.14159*rand2)*sigma+rushHour)%24;
  timeG->minute = rand()%60;
  timeG->second = rand()%60;
  
  
}
