#include <iostream>
#include <cmath>
int main(){
 int num ;
 int guess;
 int tries = 0 ;
 srand(time(NULL));
 num = (rand() % 100) + 1;
 std::cout << "*********************************** Number Guessing game **************************************************\n";
 do
 {
  std::cout << "enter a number between (1-100) : " ;
  std::cin >> guess ;
  tries ++;
  if (guess > num){
    std::cout << "Too high  \n" ;
  }
  else if (guess < num)
  {
    std::cout << "Too low  \n" ;
  }else
  {
    std::cout << "Correct   " << "you've tried "  << tries << " until you foud the guessing number \n" ;
  }}while (num != guess);
 
 std::cout << "*********************************** Number Guessing game **************************************************";
  return 0;
}
