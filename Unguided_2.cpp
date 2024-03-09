/// JAWABANN SOAL NOMOOR 2

/// CONTOH PROGRAM 

#include <stdio.h>

//Struct

struct Mahasiswa

{
const char *name;
const char *address;
int age;
};

int main()
{
// menggunakan struct

struct Mahasiswa mhs1, mhs2;

// mengisi nilai ke struct

mhs1.name = "elon";

mhs1.address = "teluk";

mhs1.age = 19;

mhs2.name = "mia";

mhs2.address = "padang";

mhs2.age = 19;

// mencetak isi struct

printf("## Mahasiswa 1 ##\n");

printf("Nama: %s\n", mhs1.name);

printf("Alamat: %s\n", mhs1.address);

printf("Umur: %d\n", mhs1.age);

printf("## Mahasiswa 2 ##\n");

printf("Nama: %s\n", mhs2.name);

printf("Alamat: %s\n", mhs2.address);

printf("Umur: %d\n", mhs2.age);

return 0;
}