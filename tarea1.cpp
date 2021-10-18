# include<iostream>
# include<cmath>

double mysin(double x, int N){
  double s=0;
    for(int k=1;k<=N;k++){
      double term=1;
      for(int t=1;t<=2*k-1;t++){
	term=term*x/t;
      }
      s=s+((pow(-1,k-1))*term);
    }
  return s;
}
  
int main()
{
  std::cout.setf(std::ios::scientific);
  std::cout.precision(6);

  const double x= M_PI/3;
  const double exact = std::sin(x);

  for(int NMAX= 1; NMAX <= 1000; NMAX++){
    double diff =std::fabs(mysin(x, NMAX)- exact)/exact;
    std::cout << NMAX << "\t"<<diff<< "\n";
  } 
  return 0;
}
