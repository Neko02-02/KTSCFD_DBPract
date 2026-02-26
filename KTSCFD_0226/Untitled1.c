#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *fp;
    char ch;
    char fnev[50];
    printf("Filenev: ");
    scanf("%s", fnev);

    fp = fopen(fnev, "w");
    printf("uzenet: ");

    while{ (ch = getchar())) != '%' ()
        putc(ch, fp);

    }
    fclose(fp);

    char nev2[50] = "atmeneti";
    FILE *fpp = fopen(nev 2, "w");

    fp = fopen(fnev, "r");
    fseek(fp, 01, SEEK_END);
    int = pos ftell(fp);
    fseek(fp, 0L, SEEK_SET);

    while (pos--)
    {
        ch = fgetc(fp);
        fputc(toupper(ch), fpp);
    }

    fclose(fp);
    fclose(fpp);

    remove(fnev);

    rename(nev);








}
