#include <stdio.h> // Diperlukan untuk fungsi input/output seperti scanf dan printf
#include <limits.h> // Diperlukan untuk INT_MAX dan INT_MIN, nilai batas integer

int main() {
    int n;
    // Membaca bilangan bulat positif n yang merepresentasikan jumlah baris masukan berikutnya
    scanf("%d", &n);

    // Memastikan n adalah bilangan positif seperti yang dijelaskan dalam prompt
    // Jika n tidak positif, program bisa keluar atau memberikan pesan error,
    // namun berdasarkan prompt, kita asumsikan n akan selalu positif.
    if (n <= 0) {
        printf("Jumlah masukan (n) harus bilangan bulat positif.\n");
        return 1; // Keluar dengan kode error
    }

    int current_value;
    // Inisialisasi min_val dengan nilai integer maksimum yang mungkin
    // dan max_val dengan nilai integer minimum yang mungkin.
    // Ini memastikan bahwa nilai pertama yang dibaca akan selalu lebih kecil dari INT_MAX
    // dan lebih besar dari INT_MIN, sehingga inisialisasi min/max akan benar.
    int min_val = INT_MAX;
    int max_val = INT_MIN;

    // Melakukan loop sebanyak n kali untuk membaca n baris bilangan bulat
    for (int i = 0; i < n; i++) {
        scanf("%d", &current_value); // Membaca setiap bilangan bulat

        // Membandingkan nilai saat ini dengan nilai minimum yang ditemukan sejauh ini
        if (current_value < min_val) {
            min_val = current_value; // Jika lebih kecil, update min_val
        }

        // Membandingkan nilai saat ini dengan nilai maksimum yang ditemukan sejauh ini
        if (current_value > max_val) {
            max_val = current_value; // Jika lebih besar, update max_val
        }
    }

    // Menampilkan nilai terkecil dan terbesar sesuai format yang diminta
    printf("%d\n", min_val);
    printf("%d\n", max_val);

    return 0; // Mengembalikan 0 menandakan program berakhir dengan sukses
}