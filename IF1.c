/* File         : IF1.c */
/* Penulis      : Fauzyah Hadirahma, email faubelajar@gmail.com */
/* Deskripsi    : contoh pemakaian IF satu kasus, yaitu membaca
                  nilai integer dan menuliskan nilainya jika positif */
                  
#include <stdio.h>
int main ()
{
    /* KAMUS */
    int a;
    
    /* PROGRAM */
    printf ("Contoh IF satu kasus \n");
    printf ("Ketikkan suatu nilai integer ");
    scanf ("%d", &a);
    
    if (a >= 0) 
        {
            printf ("Nilai a positif %d \n", a);
        }
    /* Jika nilai a tidak positif maka program tidak melakukan apa-apa */
    
    return 0;
}
