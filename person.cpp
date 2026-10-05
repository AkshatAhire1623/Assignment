#include <iostream>
using namespace std;
class person {
    public:
    person () {
cout << "This is person \n" ;
    }
};

class student : public person
{
    public:
    student ()
    {
cout << "This is student";
    }
};
int main ()
{
    student obj;
    return 0;
}
