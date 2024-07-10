#include<stdio.h>
#include<windows.h>
//定义一个变量保存秒数，打印出xx小时xx分钟xx秒
int main()
{
    SetConsoleOutputCP(65001);
    int s;//定义总秒数m
    int hours=s/3600;//定义小时hours
    int min=s%3600/60;//定义分钟min
    int s_remain=s%3600%60;//定义不足一分钟的秒数s_remain
    printf("请输入待转换的秒数");
    scanf("%d", &s);
    printf("%d秒等于%d小时%d分钟%d秒",s,hours,min,s_remain);
    return 0;
}
/*
#include<stdio.h>
//定义一个变量保存秒数，打印出xxx小时xxx分钟xx秒
void main(){
    /*
     * 定义总秒数m
     * 定义小时hours
     * 定义分钟min
     * 定义不足一分钟的秒数se
     * /
    int m=10000;
    int hours=m/3600;
    int min=m%3600/60;
    int se=m%3600%60;
    printf("%d秒等于d小时%d分钟%d秒",m,hours,min,se);
}
*/