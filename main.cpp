#include <iostream>
using namespace std;

int main() {
    int input, a, b;

    cout<<"1. +"<<endl;
    cout<<"2. -"<<endl;
    cout<<"3. *"<<endl;
    cout<<"4. /"<<endl;

    cin>>input;
    cin>>a>>b;

    switch (input) {
      case 1:
         cout<<a+b;
         break;
       case 2:
         cout<<a-b;
         break;
       case 3:
         cout<<a*b;
         break;
       case 4:
         cout<<a/b;
         break;
       default:
         cout<<"invalid input suck my dick";
         break;
    }
    return 0;
}
