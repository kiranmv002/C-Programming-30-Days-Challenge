int main() {
    char str[100];
    int flag = 1;

    printf("Enter a string: ");
    scanf("%s", str);

    int length = strlen(str);

    for(int i = 0; i < length / 2; i++) {
        if(str[i] != str[length - i - 1]) {
            flag = 0;
            break;
        }
    }

    if(flag)
        printf("It is a Palindrome.\n");
    else
        printf("It is not a Palindrome.\n");

    return 0;
}
