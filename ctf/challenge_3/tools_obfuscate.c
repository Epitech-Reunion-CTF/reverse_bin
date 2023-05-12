#include <stdio.h>
#include <string.h>

void obfuscate(char *str, int len, const char *key)
{
    int key_len = strlen(key);
    for (int i = 0; i < len; i++) {
        str[i] ^= key[i % key_len];
    }
}

int
main(void)
{
    char str[] = "0011100100110110001100010011010100111001001100100110001100110011001101110011001100110001011001010011100000110101001100010011001101100101001110000011000101100011011000010110010100110111001100110011100101100001001100110011011001100001001101110110010000111001";
    obfuscate(str, strlen(str), "CTF_FLAG_HERE");
    printf("%s\n", str);
    return 0;
}