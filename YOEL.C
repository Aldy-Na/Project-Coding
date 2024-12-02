#include <stdio.h>
#include <string.h>
#include <math.h>

void analisis_string(char *str) {
    int panjang = strlen(str);
    int vokal_count = 0;

    for (int i = 0; i < panjang; i++) {
        char c = str[i];
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            vokal_count++;
        }
    }

    printf("Panjang string: %d\n", panjang);
    printf("Jumlah huruf vokal: %d\n", vokal_count);
}

void operasi_matematika() {
    int pilihan;
    double num1, num2;

    printf("Pilih operasi matematika:\n");
    printf("1. Penjumlahan\n");
    printf("2. Akar Kuadrat\n");
    printf("3. Pangkat\n");
    printf("Pilihan (1-3): ");
    scanf("%d", &pilihan);

    switch (pilihan) {
        case 1:
            printf("Masukkan dua bilangan (misal: 5 3): ");
            scanf("%lf %lf", &num1, &num2);
            printf("Hasil penjumlahan: %.2lf\n", num1 + num2);
            break;
        case 2:
            printf("Masukkan bilangan: ");
            scanf("%lf", &num1);
            printf("Akar kuadrat dari %.2lf: %.2lf\n", num1, sqrt(num1));
            break;
        case 3:
            printf("Masukkan dua bilangan (basis eksponen): ");
            scanf("%lf %lf", &num1, &num2);
            printf("Hasil %.2lf pangkat %.2lf: %.2lf\n", num1, num2, pow(num1, num2));
            break;
        default:
            printf("Aksi invalid. Coba lagi.\n");
            break;
    }
}

int main() {
    int pilihan;
    char str[100];

    while (1) {
        printf("\n ~ Analisis String & Operasi Matematika ~ \n");
        printf("Menu:\n");
        printf("1. Analisis String (panjang & vokal)\n");
        printf("2. Operasi Matematika (Penjumlahan, akar kuadrat, perpangkatan)\n");
        printf("3. Keluar\n");
        printf("Pilih menu (1-3): ");
        scanf("%d", &pilihan);

        switch (pilihan) {
            case 1:
                printf("Masukkan string: ");
                getchar(); 
                fgets(str, sizeof(str), stdin);
                str[strcspn(str, "\n")] = 0;  
                analisis_string(str);
                break;
            case 2:
                operasi_matematika();
                break;
            case 3:
                printf("Thank you for using this program  :)\n");
                return 0;
            default:1;
                printf("Aksi invalid. Coba lagi.\n");
        }
    }
}
