/***********************************************************************
 * Module:  jose.cpp
 * Author:  ZhuanZ（无密码）
 * Modified: 2024年6月19日 11:25:19
 * Purpose: Implementation of the class jose
 ***********************************************************************/
#include "jose.h"
extern boy* a;
extern ring man;
////////////////////////////////////////////////////////////////////////
// Name:       jose::jose(int n, int j)
// Purpose:    Implementation of jose::jose()
// Parameters:
// - n
// - j
// Return:     
////////////////////////////////////////////////////////////////////////

jose::jose(int n, int j)
{
	a = new boy[n];
	for (int k = 0; k < n; k++) {
		a[k] = boy(k + 1, &a[k + 1]);
	}
    a[n - 1].p=&a[0];
	run(n, j);
	// TODO : implement
}

////////////////////////////////////////////////////////////////////////
// Name:       jose::~jose()
// Purpose:    Implementation of jose::~jose()
// Return:     
////////////////////////////////////////////////////////////////////////

jose::~jose()
{
   // TODO : implement
}

////////////////////////////////////////////////////////////////////////
// Name:       jose::run()
// Purpose:    Implementation of jose::run()
// Return:     void
////////////////////////////////////////////////////////////////////////

void jose::run(int n,int j)
{
	man = ring(&a[n-1], a[n-2].p);
	for (int c = 0; c < n; c++) {
		for (int l = 0; l < j-1; l++) {
		 man=ring(man.pnow->p,man.pnow->p->p);
		}
		cout <<man.plast->code<< "出局" << endl;
		man.pnow->p = man.pnow->p->p;
	}
   // TODO : implement
}