#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
  string sentence;

  cout<<"You enter a sentence: "<<endl;
  getline(cin, sentence);

  sentence.erase(std::remove(sentence.begin(), sentence.end(), ' '), sentence.end());
  
  cout<<"Your sentence without space: "<<endl<<sentence<<endl; 
  
  return 0;
}