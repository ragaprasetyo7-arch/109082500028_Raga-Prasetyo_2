#include "soal 2_pelajaran.h"

pelajaran create_pelajaran(string namapel, string kodepel) {
    pelajaran pel;

    pel.namaMapel = namapel;
    pel.kodeMapel = kodepel;

    return pel;
}

void tampil_pelajaran(pelajaran input_pel) {
    cout << "nama pelajaran : " << input_pel.namaMapel << endl;
    cout << "nilai : " << input_pel.kodeMapel << endl;
}
