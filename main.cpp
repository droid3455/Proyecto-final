#include <iostream>

using namespace std;

class GameObject
{
    string name;
    int object_number;
    int quantity;

public:
    GameObject(string name1, int object_number1, int quantity1 )
    {
        name = name1;
        object_number = object_number1;
        quantity = quantity1;
    }
    string getn(){return name;}

};
int main()
{
    GameObject g1("arbol", 1, 10);
}
