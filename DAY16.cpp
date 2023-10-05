#include<iostream>
#include<string>
using namespace std;
class train
{
    public:
    int train_no;
    string destination;
    string train_type;
    int arrival_time;
    int departure_time;
    int delayed_time;
    void arrival()
    {
        arrival_time+=delayed_time;
    }
    void departure()
    {
        departure_time+=delayed_time;
    }
    void display()
    {
        cout<<train_no<<endl<<destination<<endl<<train_type<<endl<<arrival_time<<endl<<departure_time<<endl;
    }
};
int main()
{
    train train_A;
    cout<<"enter train no:  ";
    cin>>train_A.train_no;
    cout<<"enter destination:  ";
    cin>>train_A.destination;
    cout<<"enter train type:  ";
    cin>>train_A.train_type;
    cout<<"enter arrival time in hours:  ";
    cin>>train_A.arrival_time;
    cout<<"enter departure time in hours:  ";
    cin>>train_A.departure_time;
    cout<<"enter delayed time in hours:  ";
    cin>>train_A.delayed_time;   
    train_A.arrival();
    train_A.departure();
    train_A.display(); 
    return 0;
}
