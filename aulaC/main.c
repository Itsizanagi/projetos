int main(int argc, char const *argv[])
{
    int x = 8, *p1, *p2;
    p1 = &x;
    p2 = p1;
    printf("%d\n", p2);
    printf("%d", *p2);
    
    return 0;
}
