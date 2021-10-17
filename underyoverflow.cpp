# include <iostream>

int main(){
  float xo= 1.23e40;
  float xu= 1.23e-50;

  std::cout<< "over= "<<xo<<"\n";
  std::cout<< "under= "<<xu<<"\n";

  int m =25000000000;
  int n =2000000000;
  std::cout<< "m= "<<m<<"\n";
  std::cout<< "n= "<<n<<"\n";

  return 0;
  
}
