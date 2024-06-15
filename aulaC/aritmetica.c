int main(int argc, char const *argv[])
{
    int *p, num = 1, num2;
    p = &num;
    num = *p + 1;
    num2 = *&num;

    printf("O valor de num: %d\n", num);
    printf("O  valor de num2: %d\n", num2);
    printf("O  valor do ponteiro : %d\n", p);

    if (num == num2) {
        printf("iguais");
    } else {
        printf("diferentes");
    }

    return 0;
}
