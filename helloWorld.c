#include <stdio.h>
#include <windows.h>
int main()
{
    SetConsoleOutputCP(65001);
    printf("Hello World我是中文\n");
    system("pause");
    return 0;
}

