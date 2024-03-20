#include <stdio.h>

// Deklarasi fungsi
int countSwaps(int arr[], int n);
void swap(int *a, int *b);

int main() {
  // Input jumlah kartu
  int n;
  scanf("%d", &n);

  // Deklarasi array untuk menyimpan nilai kartu
  int arr[n];

  // Input nilai kartu
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  // Hitung jumlah minimal langkah pertukaran
  int swaps = countSwaps(arr, n);

  // Tampilkan hasil
  printf("%d\n", swaps);

  return 0;
}

// Fungsi untuk menghitung jumlah minimal langkah pertukaran
int countSwaps(int arr[], int n) {
  int swaps = 0;
  for (int i = 0; i < n - 1; i++) {
    for (int j = i + 1; j < n; j++) {
      if (arr[i] > arr[j]) {
        swaps++;
      }
    }
  }
  return swaps;
}

// Fungsi untuk menukar dua nilai
void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}
