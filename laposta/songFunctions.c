void _f0(){  }
int a = 10;
int _f1(){ return a;}
int _f2(){ return 20;}
int _f3(){ return _f1() <= _f2();}
int _f4(){ return 2;}
void _f5(){a +=_f4();}
void _f6(){ _f0(); _f5(); }
void _f7(){ printf("%d\n",a); }
void _f8(){ _f6(); _f7(); }
void _f9(){ while (  _f3() ) { _f8(); } }
