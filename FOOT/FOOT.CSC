#include <wpabs.sc>

class: OneFoot, 
       external stem   = Foot,
       local,
       external prefix = Foot_,
       major version = 1,     
       minor version = 1;

parent: WPAbstract;

passthru: C.ih;
#define INCL_WINWORKPLACE
#include <os2.h>
endpassthru;

data:
  int LeftOrRight;

methods:
  override wpDrop;
  override wpOpen;

