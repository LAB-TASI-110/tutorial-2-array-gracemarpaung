#include <stdio.h>
#include <limits.h> // Untuk INT_MAX dan INT_MIN
#include <float.h>  // Untuk FLT_MAX

int main() {
    // Input data angka yang di-hardcode
    // Anda bisa mengganti angka-angka ini sesuai kebutuhan
    int numbers[] = {10, -7, 20, 5, 77, 30, -5, 12, 18, 4};
    int n = sizeof(numbers) / sizeof(numbers[0]);

    // Inisialisasi variabel untuk rata-rata terendah
    float lowest_avg = FLT_MAX; // Menggunakan nilai float maksimum sebagai awal

    // Inisialisasi variabel untuk nilai min dan max keseluruhan
    int overall_min = INT_MAX;
    int overall_max = INT_MIN;

    // Periksa apakah array memiliki setidaknya dua elemen
    if (n < 2) {
        printf("Array harus memiliki setidaknya dua elemen untuk menghitung rata-rata berurutan.\n");
        return 1; // Keluar dengan kode error
    }

    // Loop untuk menemukan rata-rata terendah dari dua nilai berurutan
    for (int i = 0; i < n - 1; i++) {
        float current_avg = (float)(numbers[i] + numbers[i+1]) / 2.0;
        if (current_avg < lowest_avg) {
            lowest_avg = current_avg;
        }
    }

    // Loop untuk menemukan nilai minimum dan maksimum keseluruhan
    for (int i = 0; i < n; i++) {
        if (numbers[i] < overall_min) {
            overall_min = numbers[i];
        }
        if (numbers[i] > overall_max) {
            overall_max = numbers[i];
        }
    }

    // Menampilkan hasil
    printf("Rata-rata terendah dari dua nilai berurutan: %.2f\n", lowest_avg);
    printf("Nilai minimum keseluruhan: %d\n", overall_min);
    printf("Nilai maksimum keseluruhan: %d\n", overall_max);

    return 0; // Program berhasil
}