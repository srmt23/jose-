/***********************************************************************
 * Module:  jose.h
 * Author:  ZhuanZ�������룩
 * Modified: 2024��6��19�� 11:25:19
 * Purpose: Declaration of the class jose
 ***********************************************************************/
#include"ring.h"
#if !defined(__ObjectOrientedModel_1_jose_h)
#define __ObjectOrientedModel_1_jose_h
class boy;
class ring;

class jose
{
public:
   jose(int n, int j);
   ~jose();
   void run(int n,int j);

  // boy** boy;
  // ring** ring;

protected:
private:
   int num;
   int jump;


};

#endif