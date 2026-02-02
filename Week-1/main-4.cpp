#include <iostream>
using namespace std;
int main()
{
    cout<<"welcome to fruit shop! we have four type fruit here!"<<endl;
    string fruit[4]={ "apple", "orange", "strawberry", "blueberry"};
    double price[4]={2.00,4.00,6.00,3.00};
    for(int f = 0; f < 4;f++){
        cout<<f+1<<"."<<fruit[f]<<"--"<<price[f]<<endl;
    }
        cout<<"Choose a fruit number to buy: "<<endl;
        int choice;
        cin>>choice;
        if(choice >= 1 && choice <=4)
        {
            cout<<"you choose "<<fruit[choice-1]<<endl;
            double sum =+ price[choice-1];
            cout<<"your total will be "<<sum;
        }

    return 0;
}