/***********************************************************************
 * Module:  ring.h
 * Author:  ZhuanZ（无密码）
 * Modified: 2024年6月19日 11:27:07
 * Purpose: Declaration of the class ring
 ***********************************************************************/

#if !defined(__ObjectOrientedModel_1_ring_h)
#define __ObjectOrientedModel_1_ring_h

#include "boy.h"

class ring
{
public:
   ring(boy* pnow,boy* plast);
   ~ring();
   boy* getPnow(void);
   void setPnow(boy* newPnow);
   boy* pnow;
   boy* plast;
protected:
private:


};

#endif