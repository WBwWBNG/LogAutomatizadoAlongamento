#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
#include <string.h>

int main()
{
    FILE *fp = NULL;

    fp = fopen("Reg exercícios", "a");
    setlocale(LC_TIME, "pt_BR.UTF-8");
    time_t current_time;
    time(&current_time);
    char dateInChar[30];
    char Along[20];
    strncpy(Along, " / 1+1 (30s)\n", 20);

    struct tm *date = localtime(&current_time);

    strftime(dateInChar,30,"%d %b %Y", date);
    fputs(dateInChar,fp);
    fputs(Along,fp);

    fclose(fp);
    fp = NULL;


/*  %d    // dia do mes (01-31).
    %b    // nome do mês abreviado.
    %Y    // ano com seculo.
*/
    return 0;
}
