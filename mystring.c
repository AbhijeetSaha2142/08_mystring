int mystrlen(char *s) {
    int i = 0;
    while (s[i] != '\0') {
        i++;
    }
    return i;
}

char *mystrcpy(char *s1, char *s2) {
    char *p = s2;
    int i = 0;
    while (*p != '\0') {
        s1[i] = *p;
        p++;
        i++;
    }
    return s1;
}

char *mystrncpy(char *s1, char *s2, int n) {
    int i = 0;
    char *p = s2;
    while (i < n) {
        s1[i] = *p;
        p++;
        i++;
    }
    return s1;
}

char *mystrcat(char *s1, char *s2) {
    char *p = s1;
    while (*p != '\0') {
        p++;
    }
    char *s = s2;

    while (*s != '\0') {
        *p = *s;
        p++;
        s++;
    }
    return s1;
}

char *mystrncat(char *s1, char *s2, int n) {
    char *p = s1;
    while (*p != '\0') {
        p++;
    }
    int i = 0;
    while (i < n) {
        *p = s2[i];
        i++;
    }
    return s1;
}

int mystrcmp(char *s1, char *s2) {
    int i = 0;
    int j = 0;
    while (s1[i] != '\0') {
        i++;
    }
    while (s2[j] != '\0') {
        j++;
    }

    int max;
    if (i > j) {
        max = i;
    }
    else {
        max = j;
    }
    int k = 0;
    while (k < max) {
        if (s1[k] < s2[k]) {
            return -1;
        }
        else if (s1[k] > s2[k]) {
            return 1;
        }
        k++;
    }
    return 0;
}

char *mystrchr(char *s, char c) {
    char *p = s;
    while (*p != '\0') {
        if (*p == c) {
            return p;
        }
        p++;
    }
    if (*p == c) {
        return p;
    }
    return 0;
}

char *mystrstr(char *s1, char *s2) {

    char *s = s1;
    char *p = s2;

    while (*s) {
        if (*s == *p) {
            char *z = p;
            char *y = s;
            char found = 1;
            while (*z) {
                if (*y != *z) {
                    found = 0;
                    break;
                }
                y++;
                z++;
            }
            if (found){
                return s;
            }
        }
        s++;
    }
    return 0;
}