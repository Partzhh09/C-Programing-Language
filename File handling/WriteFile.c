#include<stdio.h>
int main()
{
    FILE *ptr;
    ptr = fopen("Wrtie.txt","w");
    fprintf(ptr,"relax I'm here\n");
    fprintf(ptr,"I'm a Video Editor");
    fclose(ptr);
    return 0;
}