#include <iostream>

int main() {
  
  // Create a weight variable
  double weight;
  int num;

  // Get the user input for weight
  std::cout << "Please enter your Earth weight :\n";
  std::cin >> weight;
  
  // Get the user input for planet number
  std::cout << "Please enter the number of the planet that want to fight on :\n\n";
  std::cout << "1. Mercury  2. Venus  3. Mars  4.Jupiter\n";
  std::cout << "    5. Saturn  6. Uranus  7. Neptune   \n";
  std::cin >> num;
  
  // Create the conditionals
  switch (num) {
    case 1 :
      weight = weight * 0.38;
      std::cout << "Your weight on planet Mercury is " << weight << " kilograms.\n";
      break;
    case 2 :
      weight = weight * 0.91;
      std::cout << "Your weight on planet Venus is " << weight << " kilograms.\n";
      break;
    case 3 :
      weight = weight * 0.38;
      std::cout << "Your weight on planet Mars is " << weight << " kilograms.\n";
      break;
    case 4 :
      weight = weight * 2.34;
      std::cout << "Your weight on planet Jupiter is " << weight << " kilograms.\n";
      break;
    case 5 :
      weight = weight * 1.06;
      std::cout << "Your weight on planet Saturn is " << weight << " kilograms.\n";
      break;
    case 6 :
      weight = weight * 0.92;
      std::cout << "Your weight on planet Uranus is " << weight << " kilograms.\n";
      break;
    case 7 :
      weight = weight * 1.19;
      std::cout << "Your weight on planet Neptune is " << weight << " kilograms.\n";
      break;
  }

}