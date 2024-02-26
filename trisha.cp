#include <iostream>

int main() {
  double temp;
  char unit;
  std::cout<<"F=Farenhiet\n";
  std::cout<<"C=celcius\n";
  
  std::cout<< "WHAT UNIT U WNAT TO CONVERT?:->";
  std::cin>>unit;

  if(unit=='F' || unit=='f'){
    std::cout<<"enter the temp in Celcius:";
    std::cin>>temp;
    temp= (1.8 *temp)+32.0;
    std::cout<<"temp is "<<" "<<temp;}
    
  else if(unit=='C' || unit=='c'){
    std::cout<<"enter the temp in Farenhite:";
    std::cin>>temp;
    temp= (temp-32)/1.8;
    std::cout<<"temp is "<<" "<<temp;
  }
  else{
    std::cout<<"U not enter C/F"<<'\n';
  }
  return 0;
  }
