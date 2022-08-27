#include <iostream>

int main()
{
  string phrase = "Blih Blih"
  std::cout << "Blah Blah\n" << endl; // \n = new line character, basically used for strings not to print in one line. it makes the next string print in new line
  
  std::cout << phrase.length(); // shows how much characters are in the strings "phrase"
  
  std::cout << phrase.[0]; // the number in the brackets means the character you wanna print. 0 is equal to 1, 1 is equal to 2, 2 is equal to 3 etc.
  
  std::count << phrase.find("Blih", 0); // the output will give us the index position inside the string in which Blih occurs
  
  std::count << phrase.substr(2, 3); // allows to grab the set ammount of characters from index position. it will grab "ih " in this case
  
  phrase[0] = 'H'; // replaces the first letter of "phrase" to H. it now will print "Hlih Blih"
  std::cout << phrase; 
  
  return 0;
}
