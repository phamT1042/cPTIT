#include <stdio.h>
#include <stdlib.h>

struct Pokemon {
	char tenLoai[50];
	int soVienDaCan, soVienDaCo;
	int soCondaTienHoa;
};
int main() {
	int T;
	scanf("%d", &T);
	getchar();
	struct Pokemon cacPokemon[T];
	thongTinPokemon(T, cacPokemon);
	tienHoa(T, cacPokemon);
	soLuongTHvaloaiDuocTHnhieunhat(T, cacPokemon);
	return 0;
}
void thongTinPokemon(int T, struct Pokemon ds[]) {
	int i;
	for (i = 0; i < T; i++) {
		gets(ds[i].tenLoai);
		scanf("%d%d", &ds[i].soVienDaCan, &ds[i].soVienDaCo);
		getchar();
		ds[i].soCondaTienHoa = 0;
	}

}
void tienHoa(int T, struct Pokemon ds[]) {
	int i = 0;
	for (i = 0; i < T; i++) {
		while (ds[i].soVienDaCan <= ds[i].soVienDaCo) {
			ds[i].soVienDaCo -= ds[i].soVienDaCan;
			ds[i].soVienDaCo += 2;
			ds[i].soCondaTienHoa++;
		}
	}
}
void soLuongTHvaloaiDuocTHnhieunhat(int T, struct Pokemon ds[]) {
	int i, tongSoluongTH = 0, maxTH = 0;
	for (i = 0; i < T; i++) {
		tongSoluongTH += ds[i].soCondaTienHoa;
		if (ds[i].soCondaTienHoa > maxTH) {
			maxTH = ds[i].soCondaTienHoa;
		}
	}
	printf("%d\n", tongSoluongTH);
	for (i = 0; i < T; i++) {
		if (ds[i].soCondaTienHoa == maxTH) {
			printf("%s", ds[i].tenLoai);
			break;
		}
	}
}