#include <iostream>
int main(){
  std::cout.setf(std::ios::scientific);
  std::cout.precision(6);
  float x=1.0;
  float y= x+1.0e6;
  
  std:: cout<<"x="<<x<<"\n";
  std:: cout<<"y="<<y<<"\n";
  
  
  return 0;
}
