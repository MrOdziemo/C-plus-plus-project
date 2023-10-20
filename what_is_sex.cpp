#include <iostream> //directives
#include <string>
using namespace std;

int main() //start chief function
{
  int start_loop = 0;
  while (start_loop < 1) {

    string name; //create string wherein will name
    int answer;

    cout<<"Write name: "; //ask for name
    cin>>name; //save name to variable string name

    int name_size = name.size(); //to count size string and find last characters
    char end_name = name.at(name_size-1);

    if (end_name=='a') //condictional instruction whether is the woman
    {
      cout<<endl<<"This woman"<<endl<<endl; //if is woman
      cout<<"This is name reverse: ";
      for(int i = name.size()-1; i>=0; --i) //reverse string name
        cout<<name.at(i);
      cout<<endl<<endl<<"You want again use program? (1-yes, other number-no)"<<endl; //condictional instruction to replayprogram
      cin>>answer;
      if (answer==1)
      {
        cout<<"Again use program"<<endl<<endl; //if yes
        continue;
      } else {
        cout<<"Exit program. Goodbye"<<endl; //if no
        break;
      }
    } else { //if not is woman
      cout<<endl<<"This is men"<<endl<<endl;
      //condictional instruction to replayprogram
      cout<<"You want again use program? (1-yes, other number-no)"<<endl;
      cin>>answer;
      if (answer==1)
      {
        cout<<"Again use program"<<endl<<endl; //if yes
        continue;
      } else {
        cout<<"Exit program. Goodbye"<<endl; //if no
        break;
      }
    }
    }
    return 0;
}
