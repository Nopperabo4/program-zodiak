#include <iostream>
#include <string>
using namespace std;

struct Zodiak{
    string nama;
    int mulai_bulan;
    int mulai_hari;
    int akhir_bulan;
    int akhir_hari;
};

string zzodiak(int tanggal, int bulan){
    Zodiak zodiaks[] = {
        {"CAPRICORN", 12, 22, 1, 19},
        {"AQUARIUS", 1, 20, 2, 18},
        {"PISCES", 2, 19, 3, 20},
        {"ARIES", 3, 21, 4, 19},
        {"TAURUS", 4, 20, 5, 20},
        {"GEMINI", 5, 21, 6, 20},
        {"CANCER", 6, 21, 7, 22},
        {"LEO", 7, 23, 8, 22},
        {"VIRGO", 8, 23, 9, 22},
        {"LIBRA", 9, 23, 10, 22},
        {"SCORPIO", 10, 23, 11, 21},
        {"SAGITTARIUS", 11, 22, 12, 21},
    };

    for(const auto& zodiak : zodiaks){
        if ((bulan == zodiak.mulai_bulan && tanggal >= zodiak.mulai_hari)||
            (bulan == zodiak.akhir_bulan && tanggal <= zodiak.akhir_hari)) {
            return zodiak.nama;
        }
    }
    return "Tidak Diketahui";
}

int main() {
    int tanggal, bulan, tahun;
    
    cout << "Tanggal Lahir Anda [tgl-bln-tahun]: ";
    char separator;
    cin >> tanggal >> separator >> bulan >> separator >> tahun;
    
    string zodiak = zzodiak(tanggal, bulan);
    
    cout << "Zodiak Anda adalah: " << zodiak << endl;
    
    return 0;
}
