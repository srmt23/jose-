/***********************************************************************
 * Module:  boy.h
 * Author:  ZhuanZ�������룩
 * Modified: 2024��6��19�� 11:27:07
 * Purpose: Declaration of the class boy
 ***********************************************************************/
#include<iostream>
using namespace std;
#if !defined(__ObjectOrientedModel_1_boy_h)
#define __ObjectOrientedModel_1_boy_h
class boy
{
public:
   boy();
   ~boy();
   boy(int c, boy* d);
   void print(void);
   int code;
   boy* p;
protected:
private:


};

#endif