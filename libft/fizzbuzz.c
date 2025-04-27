#include <unistd.h>
#include <stdio.h>

// int main(void)
// {
//     int nb;
//     nb = 1;
//     char *dest;
//     char c1;
//     char c2;

//     while(nb <= 100)
//     {
//         if(nb % 15 == 0)
//         {
//             write(1, "fizzbuzz", 8);
//             write(1, "\n", 1);
//         }
//         else if(nb % 5 == 0)
//         {
//             write(1, "buzz", 4);
//             write(1, "\n", 1);
//         }
//         else if(nb % 3 == 0)
//         {
//             write(1, "fizz", 4);
//             write(1, "\n", 1);
//         }
//         else
//         {
//             c1 = nb / 10 + '0';
//             c2 = nb % 10 + '0';
//             if (nb > 9)
//             {
//                 write(1, &c1, 1);
//             }
//             write(1, &c2, 1);
//             write(1, "\n", 1);
//         }
//         nb--;
//     }
//     return (0);
// }

int main(void) {
    int nb;
    char output[12]; // "fizzbuzz" + '\0' を格納できるサイズ

    nb = 1;
    while (nb <= 100) {
        if (nb % 15 == 0) {
            write(1, "fizzbuzz\n", 9); // 文字列 + 改行
        } else if (nb % 5 == 0) {
            write(1, "buzz\n", 5);     // 文字列 + 改行
        } else if (nb % 3 == 0) {
            write(1, "fizz\n", 5);     // 文字列 + 改行
        } else {
            int len = 0;
            if (nb >= 100) {
              output[len++] = nb / 100 + '0';
              output[len++] = (nb % 100) / 10 + '0';
            } else if (nb > 9) {
                output[len++] = nb / 10 + '0';
            }
            output[len++] = nb % 10 + '0';
            output[len++] = '\n';     // 改行文字
            write(1, output, len); // バイト数を正しく指定
        }
        nb++;
    }
    return (0);
}
