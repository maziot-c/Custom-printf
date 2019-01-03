#include <stdio.h>

#define log(fmt, arg...) printf("[Paul][%s][%d] "fmt"\n", __FUNCTION__, __LINE__, ##arg);

int main()
{
    log("custom printf");
    return 0;
}