#include <iostream>
int main() {
  int n;
  std::cin>>n;
  for(int i=0;i<n;i++){
      std::string z;
      std::cin>>z;
      int l=z.length();
      if(l>10) std::cout<<z[0]<<l-2<<z[l-1]<<std::endl;
      else std::cout<<z<<std::endl;
      }
  return 0;
  }
