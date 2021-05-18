#include "fraktale.h"
#include <cmath>
#include <cstdlib>
#include <iostream>
void rysujFraktal(QPainter *painter)
{
 float A[2];
 float B[2];
 float C[2];
 float P[2];
 A[0]=400;
 A[1]=20;
 B[0]=100;
 B[1]=520;
 C[0]=700;
 C[1]=520;
 P[0]=0;
 P[1]=0;
 painter->setPen(Qt::black);
 painter->drawLine(A[0],A[1],B[0],B[1]);
 painter->drawLine(B[0],B[1],C[0],C[1]);
 painter->drawLine(C[0],C[1],A[0],A[1]);
for (int i=0;i<100000;i++)
 {
 int losuj=floor(rand()%3);
 QColor mojKolor(int(P[0])%255,(4*int(P[0]))%255,(2*int(P[0]))%255,(3*int(P[0]))%255);
 painter->setPen(mojKolor);
 switch(losuj)
 {
 case 0:
 P[0]=(P[0]+A[0])/2;
 P[1]=(P[1]+A[1])/2;
 break;
 case 1:
 P[0]=(P[0]+B[0])/2;
 P[1]=(P[1]+B[1])/2;
 break;
 case 2:
 P[0]=(P[0]+C[0])/2;
 P[1]=(P[1]+C[1])/2;
 break;
 }
 painter->drawPoint(P[0],P[1]);
 }
}
