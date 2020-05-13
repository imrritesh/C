#include <stdio.h>
main()
{
    FILE *fp1, *fp2;
    char ch, source_file[20], target_file[20];
    printf("Enter source file name: ");
    gets(source_file);
    printf("Enter target file name: ");
    gets(target_file);
    fp1 = fopen(source_file, "r");
    fp2 = fopen(target_file, "w");
    while((ch = getc(fp1)) != EOF)
        putc(ch, fp2);
        printf("File copied successfully: ");

    fclose(fp1);
    fclose(fp2);
    getch();
}
