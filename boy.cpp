/***********************************************************************
 * Module:  boy.cpp
 * Author:  ZhuanZ（无密码）
 * Modified: 2024年6月19日 11:27:07
 * Purpose: Implementation of the class boy
 ***********************************************************************/

#include "jose.h"
extern ring man;
////////////////////////////////////////////////////////////////////////
// Name:       boy::boy(int code)
// Purpose:    Implementation of boy::boy()
// Parameters:
// - code
// Return:     
////////////////////////////////////////////////////////////////////////

boy::boy()
{
   // TODO : implement
}

////////////////////////////////////////////////////////////////////////
// Name:       boy::~boy()
// Purpose:    Implementation of boy::~boy()
// Return:     
////////////////////////////////////////////////////////////////////////

boy::~boy()
{
   // TODO : implement
}

////////////////////////////////////////////////////////////////////////
// Name:       boy::boy(int c, boy* d)
// Purpose:    Implementation of boy::boy()
// Parameters:
// - c
// - d
// Return:     
////////////////////////////////////////////////////////////////////////

boy::boy(int c, boy* d)
{
	this->code = c;
	this->p = d;// TODO : implement
}

////////////////////////////////////////////////////////////////////////
// Name:       boy::print()
// Purpose:    Implementation of boy::print()
// Return:     void
////////////////////////////////////////////////////////////////////////

void boy::print(void)
{
	cout << man.pnow->code;// TODO : implement
}