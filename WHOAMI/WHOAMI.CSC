#include <wpabs.sc>

class: Whoami,
       external stem   = WAI,
       local,
       major version = 1,
       minor version = 1;

parent: WPAbstract;

passthru: C.ih;
#define INCL_WINWORKPLACE
#include <os2.h>
endpassthru;

methods:
  override wpDrop;
