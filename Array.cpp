#include <iostream>
using namespace std;

string matkul[] = {"pemograman dasar" , "Algoritma"};

float nilaiakhir[2] = {1 , 2.5};

char grade [5];

int main()
{
    cout << "Nama matakuliah : " << matkul[1] << endl;
    matkul[0] = "Logika Teknik Pemograman";
    cout << "Nama matakuliah : " << matkul[0] << endl;

    for( int i = 0; i < 2; i++) 
    {
        cout << "Nilai akhir ke-" << i+i << "=" << nilaiakhir[i] << endl;
    }


    cout << "Input Grade" << endl;
    for(int i = 0; i < 5; i++)
    {
        cout << "Masukkan Grade ";
        cin >> grade [i];
    }
    cout << endl;
    cout << "Tampilkan Grade" << endl;
    cout << endl;

    for  (int i= 0; i < 5; i++)
    {
        cout << "Grade = " << grade [i] <<endl;

    }



}