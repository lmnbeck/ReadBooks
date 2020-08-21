/*
 * SimpleSection.c
 * 
 * Linux:
 *  gcc -c SimpleSection.c
 * 
 * Windows:
 *  c1 SimpleSection.c /c /Za
*/

int printf( const char* format, ... );

int global_init_var = 84;
int global_uninit_var;

__attribute__((section("FOO"))) int global = 42;
__attribute__((section("BAR"))) void foo();

void foo()
{
    return;
}

void func1( int i )
{
    printf( "%d\n", i );
}

int main(void)
{
    static int static_var = 85;
    static int static_var2;

    int a = 1;
    int b;

    func1(static_var + static_var2 + a + 1);

    return a;
}