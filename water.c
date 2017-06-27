#include <stdio.h> 
#include <stdlib.h> 
#include <conio.h>
#include <locale.h>

int countLetter(int minute)
{
    return 12 * minute;
}

int main(){
int minute;
int litres;
printf("Enter minute \n");
scanf("%d", &minute);
litres = countLetter(minute);
printf("\n countre litres %d", litres, '\n');

return 0;
}