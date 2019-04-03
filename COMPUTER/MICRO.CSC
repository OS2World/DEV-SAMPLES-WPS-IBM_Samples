#include <somobj.sc>

class: Microcomputer,
       local,
       external stem = micro;

parent: SOMObject;

passthru: C.ih;
#include <stdio.h>
endpassthru;

data:
  double Registers[26];	// A-Z
  double Stack[20];	// general purpose stack
  int    SP;		// stack pointer

methods:
  group: MathFunctions;
-- all math functions operate on the stack
-- stack: LeftOp
--        RightOp
-- after: Result
    void Add();
    void Sub();
    void Mul();
    void Div();

  group: StackFunctions;
    double Pop();
    void   Push(double Item);

  group: RegisterFunctions;
-- register values are moved in and out of the stack
-- stack: Register
--        Value
    void Store(int Reg);
    void Fetch(int Reg);

  group: InputOutput;
    void Input();
    void Output();
  
  group: Miscellaneous;
    override somInit;
    override somUninit;
