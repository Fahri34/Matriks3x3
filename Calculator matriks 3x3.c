#include <stdio.h>
#include <conio.h>
int main(){
clrscr();
int baris,kolom,matriks[3][3],det_a;
int A,B,C,D,E,F,G,H,I;
int b,d,f,h;
printf("inputkan nilai invers 3x3:\n");
for(baris=0;baris<3;baris++)
{
for(kolom=0;kolom<3;kolom++)
{
printf("matriks[%i][%i]=",baris,kolom);
fflush(stdin);
scanf("%i",&matriks[baris][kolom]);
}
printf("\n");
}
printf("isi array:\n");
for(baris=0;baris<3;baris++){
for(kolom=0;kolom<3;kolom++){
printf("%4i",matriks[baris][kolom]);
}
printf("\n");
}
det_a=(matriks[0][0]*matriks[1][1]*matriks[2][2]-matriks[0][1]*matriks[1][0]*matriks[2][2])+(matriks[0][1]*matriks[1][2]*matriks[2][0]-matriks[0][0]*matriks[1][2]*matriks[2][1])+(matriks[0][2]*matriks[1][0]*matriks[2][1]-matriks[0][2]*matriks[1][1]*matriks[2][0]);
printf("(%ix%ix%i-%ix%ix%i)+(%ix%ix%i-%ix%ix%i)+(%ix%ix%i-%ix%ix%i)\n",matriks[0][0],matriks[1][1],matriks[2][2],matriks[0][1],matriks[1][0],matriks[2][2],matriks[0][1],matriks[1][2],matriks[2][0],matriks[0][0],matriks[1][2],matriks[2][1],matriks[0][2],matriks[1][0],matriks[2][1],matriks[0][2],matriks[1][1],matriks[2][0]);
printf("determinannya adalah:%i\n",det_a);
A=matriks[1][1]*matriks[2][2]-matriks[1][2]*matriks[2][1];
B=matriks[1][0]*matriks[2][2]-matriks[1][2]*matriks[2][0];
C=matriks[1][0]*matriks[2][1]-matriks[1][1]*matriks[2][0];
D=matriks[0][1]*matriks[2][2]-matriks[0][2]*matriks[2][1];
E=matriks[0][0]*matriks[2][2]-matriks[0][2]*matriks[2][0];
F=matriks[0][0]*matriks[2][1]-matriks[0][1]*matriks[2][0];
G=matriks[0][1]*matriks[1][2]-matriks[0][2]*matriks[1][1];
H=matriks[0][0]*matriks[1][2]-matriks[0][2]*matriks[1][0];
I=matriks[0][0]*matriks[1][1]-matriks[0][2]*matriks[1][0];
b=B*-1;
d=D*-1;
f=F*-1;
h=H*-1;
printf("adjectivenya adalah=\n%4i%4i%4i\n%4i%4i%4i\n%4i%4i%4i\n",A,b,C,d,E,f,G,h,I);
printf("adjetivenya setelah di transposisikan=\n%4i%4i%4i\n%4i%4i%4i\n%4i%4i%4i\n",A,d,G,b,E,h,C,f,I);
printf("inversnya adalah=\n%4i/%i%4i/%i%4i/%i\n%4i/%i%4i/%i%4i/%i\n%4i/%i%4i/%i%4i/%i\n",A,det_a,d,det_a,G,det_a,b,det_a,E,det_a,h,det_a,C,det_a,f,det_a,I,det_a);
getch();
return 0;
}
