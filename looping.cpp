#include <iostream>
#include <ctime>
#include <string>
using namespace std;

int main(){
    int x;

    //Perulangan dengan FOR
    cout<<"PERULANGAN FOR"<<endl;
    for(int i=0; i<4; i++){
        cout<<"Teknologi Informasi UMY"<<endl;
    }
    cout<<endl;

    //acak angka
    srand(time(0));

    //Perulangan WHILE
    cout<<"PERULANGAN WHILE"<<endl;
    x = 1 + rand()%10;

    while(x<=5){
        cout<<"Bilangan acak = "<<x<<endl;
        x = rand()%10;
    }

    cout<<"Bilangan acak while terakhir = "<<x<<endl;
    cout<<endl;

    //Perulangan DO WHILE
    cout<<"PERULANGAN DO WHILE"<<endl;
    x = 1 + rand()%10;

    do{
        cout<<"Bilangan acak = "<<x<<endl;
        x = rand()%10;
    }while(x<=5);

    cout<<"Bilangan acak do-while terakhir = "<<x<<endl;
    cout<<endl;


    // ======================
    // LOGIKA NOT
    // ======================
    float nilB, nilM, rerata;
    string status;

    cout<<"\nLOGIKA NOT"<<endl;
    cout<<"Masukkan nilai Matematika = ";
    cin>>nilM;
    cout<<"Masukkan nilai Bahasa Inggris = ";
    cin>>nilB;

    rerata = (nilB + nilM)/2;

    if (!(rerata < 60))
        status = "Lulus";
    else
        status = "Tidak lulus";

    cout<<"Status = "<<status<<", Rata-rata = "<<rerata<<endl;


    // ======================
    // LOGIKA OR
    // ======================
    cout<<"\nLOGIKA OR"<<endl;
    cout<<"Masukkan nilai Matematika = ";
    cin>>nilM;
    cout<<"Masukkan nilai Bahasa Inggris = ";
    cin>>nilB;

    rerata = (nilB + nilM)/2;

    if ((rerata >= 60) || (nilM >= 70))
        status = "Lulus";
    else
        status = "Tidak lulus";

    cout<<"Status = "<<status<<", Rata-rata = "<<rerata<<endl;


    // ======================
    // LOGIKA AND
    // ======================
    cout<<"\nLOGIKA AND"<<endl;
    cout<<"Masukkan nilai Matematika = ";
    cin>>nilM;
    cout<<"Masukkan nilai Bahasa Inggris = ";
    cin>>nilB;

    rerata = (nilB + nilM)/2;

    if ((rerata >= 60) && (nilM >= 70))
        status = "Lulus";
    else
        status = "Tidak lulus";

    cout<<"Status = "<<status<<", Rata-rata = "<<rerata<<endl;

    return 0;
}
// Commit terakhir: penambahan Dokumentasi code