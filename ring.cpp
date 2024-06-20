/***********************************************************************
 * Module:  ring.cpp
 * Author:  ZhuanZ（无密码）
 * Modified: 2024年6月19日 11:27:07
 * Purpose: Implementation of the class ring
 ***********************************************************************/

#include "ring.h"

////////////////////////////////////////////////////////////////////////
// Name:       ring::ring(int pnow, int plast)
// Purpose:    Implementation of ring::ring()
// Parameters:
// - pnow
// - plast
// Return:     
////////////////////////////////////////////////////////////////////////

ring::ring(boy* pnow,boy* plast)
{
	this->pnow = pnow;
	this->plast = plast;
   // TODO : implement
}

////////////////////////////////////////////////////////////////////////
// Name:       ring::~ring()
// Purpose:    Implementation of ring::~ring()
// Return:     
////////////////////////////////////////////////////////////////////////

ring::~ring()
{
   // TODO : implement
}

////////////////////////////////////////////////////////////////////////
// Name:       ring::getPnow()
// Purpose:    Implementation of ring::getPnow()
// Return:     boy*
////////////////////////////////////////////////////////////////////////

boy* ring::getPnow(void)
{
   return pnow;
}

////////////////////////////////////////////////////////////////////////
// Name:       ring::setPnow(boy* newPnow)
// Purpose:    Implementation of ring::setPnow()
// Parameters:
// - newPnow
// Return:     void
////////////////////////////////////////////////////////////////////////

void ring::setPnow(boy* newPnow)
{
   pnow = newPnow;
}