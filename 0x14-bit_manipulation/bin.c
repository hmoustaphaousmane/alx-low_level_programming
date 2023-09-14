#include <stdio.h>

int main() {
    FILE *fp_in, *fp_out;
    char ch;

    fp_in = fopen("101", "r");
    fp_out = fopen("101-password", "wb");

    while((ch = fgetc(fp_in)) != EOF) {
        fwrite(&ch, sizeof(char), 1, fp_out);
    }

    fclose(fp_in);
    fclose(fp_out);

    return 0;
}
