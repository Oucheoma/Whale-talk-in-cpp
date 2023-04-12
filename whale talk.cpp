#include <iostream>
#include <vector>
#include <string>

int main(){

  std::string input = "Happy Birthday, Sammy";
  std::vector<char> vowels = { 'a', 'e', 'i','o','u', 'y'};

  std::vector<char> result;



// to compare two different inputs, we use two for loops to run through each.
  for (int i = 0; i < input.size(); i++){

    for(int j=0; j < vowels.size(); j++){

      if (input[i] == vowels[j] ){

        result.push_back(input[i]);


        if (input[i] == 'e' || input[i] == 'u' ){

          result.push_back(input[i]);
        }
      }
      
    }

  }
  //std::cout << result; //trying to output only results doesn't work
  for (int k = 0; k < result.size(); k++){
    std::cout << result[k];
  }

std::cout << "\n";

}



// std::vector<std::string> phrase = {"turpentine and turtles"};
  

//   for (int i = 0; i < phrase.size(); i++){
    
//     if (phrase[i] != "a"  || phrase[i] != "e" || phrase[i] != "i" || phrase[i] != "o" || phrase[i] != "u" || phrase[i] != "y"){

//       std::cout << ""<< "\n";

//     } else {
//       std::cout << phrase[i] << "\n";
//     }
// }
