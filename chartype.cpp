#include <iostream>
#include <string>
using namespace std;

// returns index of char if found
int isPunctuation(char input){
  string punctuationMarks = ".,;:?!\"/()[]_@";
  return punctuationMarks.find(input);
}

// returns index of char if found
int isVowel(char input){
  string vowels = "aeiouAEIOU";
  return vowels.find(input);
}

int main(){
  // initialise a variable to store user input
  char input;
  // prompt user
  cout << "Enter a character: ";
  // read input
  cin >> input;

  // first check if it is a letter
  if (input >= 'a' && input <= 'z' || input >= 'A' && input <= 'Z'){
    // if a letter entered call the function isVowel to see if the input is a vowel
    if (isVowel(input) != string::npos)
	cout << input << " is a vowel.\n";
    // if not, then is nothing else than a consonant
      else
	cout << input << " is a consonant.\n";
  }
  // check if it is a digit 
  else if (input >= '0' && input <= '9')
    cout << input << " is a digit. \n";
  // call function isPunctuation to see if it is a punctuation mark
  else if (isPunctuation(input) != string::npos)
    cout << input << " is a punctuation mark.\n";
  // case where input character is unknown
  else
    cout << input << " is unknown.\n";

  return 0;
}
