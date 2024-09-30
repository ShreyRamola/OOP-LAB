#include <iostream>
using namespace std;
class Number{
    int m;
    int n;
    public:
    Number(){
        m=10;
        n=10;
    }
    Number(int a, int b){
        m= a;
        n=b;
    }
    Number(Number& a){
        m= a.m;
        n=a.n;
    }
    void display(){
        cout<<m <<n<<endl;
    }
};
int main() {
    Number a;
    Number b= Number(7,5);
    Number c(a);
    a.display();
    b.display();
    c.display();

    return 0;
}
