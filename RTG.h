/* File     : RTG.h
* Author    : PeakNoise
* Date      : 12.02.2014
* Porpuse   : library of RTG.c
* Compilator: GCC
*/

#if !defined _RTG_
#define _RTG_

typedef struct time
{
  int hour;
  int minute;
  int second;
}TIME;


void InitializeTime(TIME* timeG);

void TimeGenerating(TIME* timeG, const int rushHour, const double sigma);

#endif
