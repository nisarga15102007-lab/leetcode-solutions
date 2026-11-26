
#include <stdio.h>

char* longestCommonPrefix(char** strs, int strsSize) {
    if (strsSize == 0) {
        return "";
    }

    int i = 0;

    while (strs[0][i] != '\0') {
        char current = strs[0][i];

        for (int j = 1; j < strsSize; j++) {
            if (strs[j][i] != current) {
                strs[0][i] = '\0';
                return strs[0];
            }
        }

        i++;
    }

    return strs[0];
}

int main() {
    char a[] = "flower";
    char b[] = "flow";
    char c[] = "flight";
    char* strs1[] = {a, b, c};

    printf("Test 1: %s\n", longestCommonPrefix(strs1, 3));

    char d[] = "dog";
    char e[] = "racecar";
    char f[] = "car";
    char* strs2[] = {d, e, f};

    printf("Test 2: \"%s\"\n", longestCommonPrefix(strs2, 3));

    return 0;
}
