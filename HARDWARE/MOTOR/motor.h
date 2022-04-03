#ifndef  _MOTOR_H
#define  _MOTOR_H

#include "sys.h" 

#define Ain1  PDout(1)
#define Ain2  PAout(15)

#define Bin1  PDout(6)
#define Bin2  PGout(9)

#define STBY  PDout(4)

void Motor_Init(void);
void Limit(int *motoA,int *motoB);
int GFP_abs(int p);
void Load(int moto1,int moto2);

#endif

