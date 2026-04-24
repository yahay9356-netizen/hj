#include <iostream>
using namespace std;
class first
{
private:
    int x;
public:
void print(){
    cout << x << endl;
}
};
class second : private first
{
private:
    int b;

// public:
//     void set()
//     {
//         cout << "Enter x" << endl;
//         cin >> x;
//     }
};
int main()
{
    first op1;
    op1.print();
    cout << "Hello teem" << endl;
}