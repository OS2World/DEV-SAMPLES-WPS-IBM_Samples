#include <stdio.h>
#include <ctype.h>
#include "micro.ph"

void main(int argc, char **argv)
{
   Microcomputer *Micro;
   char ch;
   int Reg;

   Micro = MicrocomputerNew();
   SOM_TraceLevel = 2;

   while ((ch = getchar()) != 'x')
   {
      if (isalpha(ch))
        _Push(Micro, (double) (toupper(ch) - 'A'));
      else
       switch (ch)
       {
         case '?':	_Input(Micro);	break;
         case '!':	_Output(Micro);	break;
         case '+':	_Add(Micro);	break;
         case '-':	_Sub(Micro);	break;
         case '*':	_Mul(Micro);	break;
         case '/':	_Div(Micro);	break;
         case '&':	Reg = (int) _Pop(Micro);
			_Store(Micro, Reg);	
			break;
         case '@':	Reg = (int) _Pop(Micro);
			_Fetch(Micro, Reg);	
			break;
       }
   }
}