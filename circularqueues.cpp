#include <iostream>
using namespace std;

class Queues 
{
private :
    static const int max = 3;
    int FRONT, REAR;
    int queue_array[max];

public :
    Queues() 
    {
        FRONT = -1;
        REAR = -1;
    }

    void insert()
    {
        int num;
        cout << "enter a number: ";
        cin >> num;
        cout << endl;
    }

    //Cek apakah antrian penuh
    if ((FRONT == 0 && REAR == max - 1) || (FRONT == REAR + 1))
    {
        cout << "\nQueue overflow\n";
        return;
    }

    //Cek apakah antrian kosong
    if (FRONT == -1)
    {
        FRONT = 0;
        
    }

};