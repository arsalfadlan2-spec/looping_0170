#include <iostream>
#include <ctime>
#include <cstdlib> // Untuk rand() dan srand()

using namespace std;

int main() {
    int x;

    // --- Perulangan dengan FOR ---
    cout << "PERULANGAN FOR" << endl;
    // Mencetak tulisan sebanyak 5 kali
    for (int i = 0; i <= 4; i++) {
        cout << "Teknologi Informasi UMY" << endl;
    }
    cout << endl;

    // Untuk mendapatkan urutan angka acak yang berbeda
    srand(time(0));

    // --- Perulangan dengan WHILE ---
    cout << "PERULANGAN WHILE" << endl;
    x = 1 + rand() % 10;
    while (x <= 5) {
        cout << "Bilangan acak = " << x << endl;
        x = 1 + rand() % 10;
    }
    cout << "Bilangan acak while yang terakhir = " << x << endl;
    cout << endl;

    // --- Perulangan dengan DO...WHILE ---
    cout << "PERULANGAN DO...WHILE" << endl;
    x = 1 + rand() % 10;
    do {
        cout << "Bilangan acak = " << x << endl;
        x = 1 + rand() % 10;
    } while (x <= 5);

    cout << "Bilangan acak do-while yang terakhir = " << x << endl;
    cout << endl;

    return 0;
}

#include <iostream>
#include <string>

using namespace std;

int main() {
    float nilB, nilM, rerata;
    string status;

    cout << "Masukkan nilai Matematika = ";
    cin >> nilM;
    cout << "Masukkan nilai Bahasa Inggris = ";
    cin >> nilB;

    rerata = (nilB + nilM) / 2;

    // Logika NOT
    if (!(rerata < 60)) {
        status = "Lulus";
    } else {
        status = "Tidak lulus";
    }

    cout << "Status kelulusan = " << status << ", dengan nilai rata-rata = " << rerata << endl;

    return 0;
}

#include <iostream>
#include <string>

using namespace std;

int main() {
    float nilB, nilM, rerata;
    string status;

    cout << "Masukkan nilai Matematika = ";
    cin >> nilM;
    cout << "Masukkan nilai Bahasa Inggris = ";
    cin >> nilB;

    rerata = (nilB + nilM) / 2;

    // Logika OR
    if ((rerata >= 60) || (nilM >= 70)) {
        status = "Lulus";
    } else {
        status = "Tidak lulus";
    }

    cout << "Status kelulusan = " << status << ", dengan nilai rata-rata = " << rerata << endl;

    return 0;
}

#include <iostream>
#include <string>

using namespace std;

int main() {
    float nilB, nilM, rerata;
    string status;

    cout << "Masukkan nilai Matematika = ";
    cin >> nilM;
    cout << "Masukkan nilai Bahasa Inggris = ";
    cin >> nilB;

    rerata = (nilB + nilM) / 2;

    // Logika AND
    if ((rerata >= 60) && (nilM >= 70)) {
        status = "Lulus";
    } else {
        status = "Tidak lulus";
    }

    cout << "Status kelulusan = " << status << ", dengan nilai rata-rata = " << rerata << endl;

    return 0;
}

