#include <iostream>
#include <string>
using namespace std;

char isPunctuation(char input){
  string punctuationMarks = ".,;:?!\"/()[]_@";
  return punctuationMarks.find(input);
}

char isVowel(char input){
  string vowels = "aeiouAEIOU";
  return vowels.find(input);
}

int main(){
  char input;
  cout << "Enter a character: ";
  cin >> input;

  if (input >= 'a' && input <= 'z' || input >= 'A' && input <= 'Z'){
    string vowels = "aeiouAEIOU";
    if (isVowel(input) != string::npos)
	cout << input << " is a vowel.\n";
      else
	cout << input << " is a consonant.\n";
  }
  else if (input >= '0' && input <= '9')
    cout << input << " is a digit. \n";
  else if (isPunctuation(input) != string::npos)
    cout << input << " is a punctuation mark.\n";
}
