#include<stdio.h>
int main()
{
    int a,b = 0;
    a = 56;
    b = 87;
    float x,y = 0;
    x = 564.89;
    y = 78.88;
    printf("Operators\n");

    printf("------------------\n");

    // Arithmetic
    printf("Arithmetic\n");
    printf("a + b = %d\n", a+b);
    printf("b - a = %d\n", b-a);
    printf("a * b = %d\n", a*b);
    printf("x / y = %f\n", x/y);
    printf("a mor b = %d\n", a%b);

    printf("------------------\n");

    //Assignment
    printf("Assignment\n");
    int z = 89;
    printf("value of z is %d\n",z);

    printf("------------------\n");

    // Short-hand (Assignment)
    printf("Short-hand (Assignment)");
    int t = 34;
    t += 45;
    printf("%d\n",t);
    t -= 46;
    printf("%d\n",t);
    t *= 54;
    printf("%d\n",t);
    t /= 43;
    printf("%f\n",t);
    t %= 23;
    printf("%f\n",t);

    printf("------------------\n");

    // Relational
    printf("%d\n",a == b);
    printf("%d\n",a != b);
    printf("%d\n",a < b);
    printf("%d\n",a > b);
    printf("%d\n",a <= b);
    printf("%d\n",a >= b);

    printf("------------------\n");

    // Logical
    int bi = 0;
    int bi2 = 1;
    printf("%d\n",(bi == 1 && bi2 == 1));
    printf("%d\n",(bi == 1 || bi2 == 1));
    printf("%d\n",!(bi == 1));

    printf("------------------\n");

    // Increment & Decrement
    // printf("%d\n",a++); // postfix
    // printf("%d\n",a);
    printf("%d\n",++a); // prefix
    // printf("%d\n",a--);
    // // printf("%d\n",a);
    printf("%d\n",--a);

    printf("------------------\n");

    // Conditional (Ternary)
    a > b ? printf("a is bigger than b\n"): printf("b is bigger than a\n");

    printf("------------------\n");
    
    // Special - (,), (., ->), (&, *), sizeof() 
    printf("%d\n",sizeof(b));
    printf("%d\n",&a);

    printf("------------------\n");

    // Bitwise
    printf("%d\n",a&b);
    printf("%d\n",a|b);
    printf("%d\n",a<<2);
    printf("%d\n",b>>2);
    printf("%d\n",a^b);

    printf("------------------\n");
    return 0;
}
