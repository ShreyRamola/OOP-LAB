#include <iostream>
using namespace std;
class person{
    char name[50];
    public:
    void read(){
        cout<< "enter name:";
        cin>>name;
    }
    void display(){
        cout<<name<<endl;
    }     
};
class sports {
    int m = 50;
    public:
    void display(){
        cout<<m;
    }
};
class student: public person, public sports
{
    public:
    void display(){
        person::display();
        sports::display();
    }
};
int main(){
    student s1;
    s1.read;
    s1.display();
    return 0;
}

