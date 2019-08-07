#include<stdio.h>
struct test
{
    int m1;
    char m2;
    float m3;
    // union uu
    // {
    //     char u1[5];int u2[2];
    // } ua;
} myaa;

int main(int argc, char const *argv[])
{
    /* code */
    printf("%d",sizeof(struct test));
    int a;
    scanf("%d",&a);
    return 0;
}
