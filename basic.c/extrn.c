void test()
{
    extern int x;
    printf("%d",x);

}
int x=200;
void main()
{
    test();
    printf("%d",x);
    }