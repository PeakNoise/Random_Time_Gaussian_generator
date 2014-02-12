/* File     : main.c
* Author    : PeakNoise
* Date      : 12.02.2014
* Porpuse   : test RTG generator
* Compilator: GCC
*/

#include <stdio.h>
#include <stdlib.h>
#include "RTG.h"

int main(int argc, char ** argv)
{
  int rushHour = 18; // rush hour at 6 pm
  double sigma = 4.5; // variance at 20.25

	TIME timeG;

  InitializeTime(&timeG);

  TimeGenerating(&timeG,rushHour, sigma);
  printf("%d:%d:%d \n",timeG.hour,timeG.minute,timeG.second);

  TimeGenerating(&timeG,rushHour, sigma);
  printf("%d:%d:%d \n",timeG.hour,timeG.minute,timeG.second);

  TimeGenerating(&timeG,rushHour, sigma);
  printf("%d:%d:%d \n",timeG.hour,timeG.minute,timeG.second);

  TimeGenerating(&timeG,rushHour, sigma);
  printf("%d:%d:%d \n",timeG.hour,timeG.minute,timeG.second);

  TimeGenerating(&timeG,rushHour, sigma);
  printf("%d:%d:%d \n",timeG.hour,timeG.minute,timeG.second);
	return EXIT_SUCCESS;
}
