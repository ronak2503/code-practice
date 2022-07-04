/*
 *
 * *
 * * *
 * * * *
 */
// #include <stdio.h>
// int main()
// {
//     int i, j;
//     for (i = 1; i <= 4 ; i++)
//     {
//         for (j = 1; j <= 4; j++)
//         {
//             if (j<=i)
//             {
//                 printf("  %d",i);
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }
/*
 *
 ***
 *****
 *******
 *********
 */
// #include <stdio.h>

// int main()
// {
//     int i, j ;
//     for (i = 1; i <= 5; i++)
//     {
//         for (j = 1; j <= 9; j++)
//         {
//             if (j >= 6 - i && j <= 4 + i)
//             {
//                 printf("*");
//             }
//             else
//             {
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }
/*
          1
         121
        12321
       1234321
      123454321
*/
// #include <stdio.h>

// int main()
// {
//     int i, j, lines, k;
//     printf("enter the number\n");
//     scanf("%d", &lines);
//     for (i = 1; i <= lines; i++)
//     {
//         int k = 1;
//         for (j = 1; j <= 2 * lines - 1; j++)
//         {
//             if (j >= lines + 1 - i && j <= lines - 1 + i)
//             {
//                 printf("%3d", k);
//                 if (j < lines)
//                 {
//                     k++;
//                 }
//                 else
//                 {
//                     k--;
//                 }
//             }
//             else
//             {
//                 printf("   ");
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }
/*
    ABCDCBA
    ABC CBA
    AB   BA
    A     A
*/
// #include <stdio.h>
// int main()
// {
//     int i, j, n;
//     printf("enter the number::");
//     scanf("%d", &n);
//     for (i = 1; i <= n; i++)
//     {
//         int k = 1;
//         for (j = 1; j <= 2 * n - 1; j++)
//         {
//             if (j <= n + 1 - i || j >= n - 1 + i)
//             {
//                 printf("%d", k);
//                 j < n ? k++ : k--;
//             }
//             else
//             {
//                 printf(" ");
//                 if (j == n)
//                 k--;
//             }
//         }
//         printf("\n");
//     }

//     return 0;
// }
/*
    2 2 2
    2 1 2
    2 2 2
*/

// #include <stdio.h>

// int main()
// {
//     int n, i, j, k, r;
//     scanf("%d", &n);

//     for (i = 1, r = 0; i <= 2 * n - 1; i++)
//     {
//         i <= n ? r++ : r--;
//         k = n;
//         for (j = 1; j <= 2 * n - 1; j++)
//         {
//                 if (j >= r && j <= 2 * n - r)
//             {
//                 printf("%d ", k);
//             }
//             else
//             {
//                 if (j < n)
//                 {
//                     printf("%d ", k);
//                     k--;
//                 }
//                 else
//                 {
//                     k++;
//                     printf("%d ", k);
//                 }
//             }
//         }
//         printf("\n");
//     }

//     return 0;
// }
/*
 *
 *
 *
 *
 *
 */
// #include <stdio.h>
// #include <dos.h>
// int main()
// {
//   int n;

//   printf("enter the number\n");
//   scanf("%d", &n);
//   for (int i = 1; i <= n; i++)
//   {
//     for (int j = 1; j <= n; j++)
//     {
//       if (i == j)
//       {
//         printf("* ");
//       }
//       else
//       {
//         printf("  ");
//       }
//     }
//     printf("\n");
//   }
//   return 0;
// }

/*
         1
        2 3
       4 5 6
      7 8 9 10
    11 12 13 14 15
*/

// #include <stdio.h>
// int main()
// {
//   int i,j,a=0,n;
//   printf("enter the number");
//   scanf("%d",&n);
//   for ( i = 0; i < n; i++)
//   {
//     for ( j = 0; j < n; j++)
//     {
//       if (j<=i)
//       {
//         printf(" %d ",a);
//         a++;
//       }

//     }
//     printf("\n");
//   }
//   return 0;
// }
/*
 *********
  *******
   *****
    ***
     *
 */
// #include <stdio.h>

// int main()
// {
//   int i, j;
//   for (i = 1; i <= 5; i++)
//   {
//     for (j = 1; j <= 9; j++)
//     {
//       if (j >= i && j <= 10 - i)
//       {
//         printf("*");
//       }
//       else
//       {
//         printf(" ");
//       }
//     }
//     printf("\n");
//   }
//   return 0;
// }

/*
 *
 * *
 * * *
 * * * *
 * * * * *
 * * * *
 * * *
 * *
 *
 */

// #include <stdio.h>

// int main()
// {
//   int n;
//   printf("enter the number :: ");
//   scanf("%d", &n);
//   for (int i = 1; i <= 2 * n - 1; i++)
//   {
//     for (int j = 1; j <= 2 * n - 1; j++)
//     {
//       if (j >= i && j <= 2 * i - 1)
//       {
//         printf("* ");
//       }
//     }
//     printf("\n");
//   }
//   return 0;
// } 