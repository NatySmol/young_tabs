//
//  main.c
//  young_tabulky
//
/* Youngovy tabulky vypadají tak, že máme n čtverečků, ze kterých sestavujeme tvar křížovky zvané roháček. Tato křížovka (sestávající z řádků a sloupců) je zvláštní tím, že pro každé dva po sobě jdoucí sloupce je ten následující nejvýše tak vysoký jako ten předchozí (tedy i. je aspoň tak vysoký jako i+1.) a totéž platí pro řádky. Nyní nás zajímá pro zadaný počet n čtverečků, kolik Youngových tabulek z nich můžeme sestavit.
 
 Napište (a vylaďte) program, který na vstupu přečte číslo n a na výstup vypíše počet Youngových tabulek o n čtverečcích. Počítejte s tím, že netroškaříme, tedy ač se výsledek vejde do 64bitového integeru, nepokoušejte se výsledku dobrat postupným přičítáním jedničky.*/
//  Created by Natálie Smolíková on 06.12.2021.
//

#include <stdio.h>
#include <stdlib.h>

int main() {
    long int n;
    long int i,j,k;
    long int pocet;
    scanf("%ld", &n);
    if (n>=0)
    {
    int cache[n][n]; //nxn matice, číslo řádku reprezentuje jaké číslo rozkládám
                    // číslo sloupce reprezentuje jaké je největší číslo v daném rozkladu
   
    
    cache[0][0]=1;
     
    for(i=1;i<n;i++)
    {
                cache[i][i] = 1; //na diagonale 1
                cache[i][0] =1; //prvni sloupec 1
                cache[i][i-1] =1; //pod diagonalou 1
     }
    for (i=0;i<n-1;i++)
    {
        for (j=i+1;j<n;j++)
        {
            cache[i][j] = 0;
        }
    }
    
    for (i=3;i<n;i++)
    {
        for (j=1;j<=i-2;j++)
        {
            pocet = 0;
            for(k=0;k<=j;k++)
            {
                pocet = pocet + (cache[i-j-1][k]);
                
            }
            cache[i][j] = pocet;
        }
    }
    
    
    pocet = 0;
    for (int j=0;j<n;j++)
    {
        pocet += cache[n-1][j];
    }

    printf("%ld\n", pocet);
    }
else {
    printf("%d\n", 0);
}
    
    
    
    return 0;
}
