#include <stdio.h>
#include "EasyBMP.h"

int main(void)
{
    BMP image;

    // 读取BMP文件
    image.ReadFromFile("image.bmp");

    // 显示BMP图像
    for (int y = 0; y < image.TellHeight(); y++)
    {
        for (int x = 0; x < image.TellWidth(); x++)
        {
            printf("%c", image(x, y)->Blue);
            printf("%c", image(x, y)->Green);
            printf("%c", image(x, y)->Red);
        }
        printf("\n");
    }

    return 0;
}