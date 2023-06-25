# young_tabs
CZ:
Youngovy tabulky vypadají tak, že máme n čtverečků, ze kterých sestavujeme tvar křížovky zvané roháček. Tato křížovka (sestávající z řádků a sloupců) je zvláštní tím, že pro každé dva po sobě jdoucí sloupce je ten následující nejvýše tak vysoký jako ten předchozí (tedy i. je aspoň tak vysoký jako i+1.) a totéž platí pro řádky. Nyní nás zajímá pro zadaný počet n čtverečků, kolik Youngových tabulek z nich můžeme sestavit.
 
 Napište (a vylaďte) program, který na vstupu přečte číslo n a na výstup vypíše počet Youngových tabulek o n čtverečcích. Počítejte s tím, že netroškaříme, tedy ač se výsledek vejde do 64bitového integeru, nepokoušejte se výsledku dobrat postupným přičítáním jedničky.

 EN:
 Young tableaux are constructed by arranging n squares to form a shape called a Ferrers diagram. This diagram (composed of rows and columns) is special in that for any two consecutive columns, the next column is no higher than the previous one (i.e., i-th column is at least as high as the i+1-th column), and the same applies to the rows. Now we are interested in determining the number of Young tableaux that can be formed using a given number n of squares.

Write and debug a program that reads the number n as input and outputs the number of Young tableaux with n squares. Assume that we won't be limited by computational resources, so even though the result fits into a 64-bit integer, there is no need to try incrementing the result incrementally.
