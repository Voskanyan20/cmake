#include <iostream>
#include "functions.h"
using namespace std;
int main() {
    float num1 , num2 , res;
    int choice;

    do{
        cout<<"1. Addition\n";
        cout<<"2. Subtraction\n";
        cout<<"3. Multiplication\n";
        cout<<"4. Division\n";
        cout<<"5. Exit\n\n";
        cout<<"Enter Your Choice(1-5): ";
        cin>>choice;
        if(choice>=1 && choice<=4)
        {
            cout<<"\nEnter any two Numbers: ";
            cin>>num1>>num2;
        }
        switch(choice){
            case 1:
                    res = addFunc(num1, num2);
                    cout<<"\nResult = "<<res;
                    break;
                case 2:
                    res = subFunc(num1, num2);
                    cout<<"\nResult = "<<res;
                    break;
                case 3:
                    res = mulFunc(num1, num2);
                    cout<<"\nResult = "<<res;
                    break;
                case 4:
                    res = divFunc(num1, num2);
                    cout<<"\nResult = "<<res;
                    break;
                case 5:
                    return 0;
                default:
                    cout<<"\nWrong Choice!";
                    break;
        }
        cout << "\n-------------\n";
}while(choice!=5);
cout<<endl;
    return 0;
}
