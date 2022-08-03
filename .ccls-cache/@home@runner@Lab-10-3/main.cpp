#include <iostream>
#include <math.h>

using namespace std;

class number{
public:
int n;
virtual void print_it(int n)=0;
};

class hexv:public number{
public:
void print_it(int n){
  cout<<"Hex value : "<<hex<<n<<endl;
}
};

class octv:public number{
public:
void print_it(int n){
  cout<<"Oct value : "<<oct<<n<<endl;
}
};

class decv:public number{
public:
void print_it(int n){
  cout<<"Dec value : "<<dec<<n<<endl;
}
};


int main(){
  int n=20;
  cout<<"Number is : "<<n<<endl;

  number *po=new hexv();
  po->print_it(n);
  number *oc=new octv();
  oc->print_it(n);
  number *de=new decv();
  de->print_it(n);
}