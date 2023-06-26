#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int angka[]={2,5,9,16,17,40,49,68,70,75,86,95,110,250,300,345}, sizearr, key, lompat, index,jump_back;

    cout << " PROGRAM JUMP SEARCH" << endl;
    cout << "=====================" << endl;

    sizearr = sizeof(angka)/sizeof(angka[0]);

    key = 86;

    lompat = sqrt(sizearr);

    index = 0;


    while (angka[index]<=key)
    {
        if (angka[index]== key)
        {
            cout << " Angka "<<key<< " ada pada index ke-"<<index;
            break;
        }else
        {
            index = index + lompat;

        }
    }

    jump_back=index-4;

    for (int i=jump_back+1; i<index; i++  )
    {
        if (angka[i] == key)
        {
            cout << " Angka "<<key<< " ada pada index ke-"<<i;
            break;
        }
    }

    return 0;
}
