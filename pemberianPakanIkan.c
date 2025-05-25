#include <stdio.h>
#include <time.h>

void pemberianPakan(int jam) {
    // Fungsi untuk mengingatkan pemberian pakan ikan
    if (jam == 8) {
        printf("Saatnya memberi makan ikan yang pertama!\n");
    } else if (jam == 12) {
        printf("Saatnya memberi makan ikan yang kedua!\n");
    } else if (jam == 16) {
        printf("Saatnya memberi makan ikan yang ketiga!\n");
    }
    else {
        printf("Belum saatnya memberi makan ikan.\n");
    }
}

int main() {
    // Mendapatkan waktu lokal
    time_t waktuLokal;
    struct tm *infoWaktu;
    
    time(&waktuLokal);
    infoWaktu = localtime(&waktuLokal);

    // Mendapatkan jam saat ini
    int jamSaatIni = infoWaktu->tm_hour;

    // Ini kondisional. Pemberian pakan dilakukan 3 kali dalam sehari dengan rentang waktu 4 jam
    if (jamSaatIni == 8) {
        pemberianPakan(8);
    } else if (jamSaatIni == 12) {
        pemberianPakan(12);
    } else if (jamSaatIni == 16) {
        pemberianPakan(16);
    } else {
        printf("Belum saatnya memberi makan ikan.\n");
    }

    return 0;
}