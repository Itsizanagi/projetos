/* int main(int argc, char const *argv[])
{
    int *p, local = 35;
    p = local;
    printf("%d", p);
    return 0;
}
*/

int main(int argc, char const *argv[])
{
    int *p, q, variavel = 35;
    p = &variavel;
    q = *p;
    printf("%d\n", variavel);
    printf("%d\n", q);
    printf("%d\n", p);
    return 0;
}

int main() {
  char* fodase = 0;
  *fodase = 'b';
}
