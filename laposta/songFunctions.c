void _f0(){  }
int a = 10;
int b = 30;
int _f1(){ return a;}
int _f2(){ return 15;}
int _f3(){ return _f1() < _f2();}
int _f4(){ return b;}
int _f5(){ return 9;}
int _f6(){ return _f4() > _f5();}
int _f7(){ return _f3() && _f6();}
void _f8(){ printf("Entro");printf("\n");}
void _f9(){ _f0(); _f8(); }
void _f10(){ if (  _f7() ) { _f9(); } }
