#include <stdio.h>

// Khai báo c?u trúc SinhVien


int main() {
	struct SinhVien {
    char name[50];
    int age;
    char phoneNumber[15];
    };
	
    struct SinhVien sv[5];

    for (int i = 0; i < 5; i++) {
        printf("Nhap thong tin sinh vien %d:\n", i + 1);

        printf("Ten: ");
        scanf(" %[^\n]%*c", sv[i].name); 

        printf("Tuoi: ");
        scanf("%d", &sv[i].age);

        printf("Sdt: ");
        scanf("%s", sv[i].phoneNumber);

        printf("\n"); 
    }

    printf("\nThong tin sinh vien:\n");
    for (int i = 0; i < 5; i++) {
        printf("Sinh vien %d:\n", i + 1);
        printf("Ten: %s\n", sv[i].name);
        printf("Tuoi: %d\n", sv[i].age);
        printf("Sdt: %s\n", sv[i].phoneNumber);
        printf("\n");
    }

    return 0;
}
