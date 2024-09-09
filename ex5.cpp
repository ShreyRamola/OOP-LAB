#include <iostream>
using namespace std;
class sample{
    int m;
    void read(void){
        cout << "Write the number" << endl;
        cin >> m;
    }
    public:
    void update(void);
    void write (void);
};
void sample:: update(){
    read();
}
void sample:: write(){
    cout<< "Value is:"<< m << endl;
}
int main(){
    sample obj1;
    obj1.update();
    obj1.write();
    return 0;
}
