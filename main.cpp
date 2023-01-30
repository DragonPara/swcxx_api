#include "swcxx.h"
CPP_SLAVE_FUNC(test_slave);
int main(void)
{
    int statu;
    statu = CRTS_init();
    if (statu == CRTS_Success)
        printf("Init Success!\n");
    else
    {
        printf("Init Fail!\n");
        return 0;
    }
    int a[128];
    CRTS_athread_spawn((void *)SLAVE_FUN(test_slave), a);
    CRTS_athread_join();
    for (size_t i = 0; i < 64; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    for (size_t i = 0; i < 64; i++)
    {
        printf("%d ", a[i + 64]);
    }
    printf("\n");
    return 0;
}
