#include "stdio.h"
#define WIDE 50
#define HEIGHE 50
int main()
{
  char map1[WIDE+2][HEIGHE+2];
  char map2[WIDE+2][HEIGHE+2];
  char  sum=0;
  //随机初始换map
  //更新地图

  while(1)
  {
     int i=0;
     int j=0;
     char sum=0;

              for(i=1;i<=HEIGHE;i++)
                  {
                         for(j=1;j<=WIDE;j++)
                             {
                                 sum=map1[i-1][j-1]+map1[i+1][j+1]+map1[i-1][j+1]+map1[i+1][j-1]+map1[i-1][j]+map1[i+1][j]+map1[i][j-1]+map1[i][j+1];
                                 if(map1[i][j]==1)
                                     {
                                         if(sum<2)
                                             {
                                                 map2[i][j]=0;
                                             }
                                         else if(sum>3)
                                             {
                                                 map2[i][j]=0;
                                             }
                                         else
                                             {
                                                 map2[i][j]=map1[i][j];
                                             }
                                    }

                                 else
                                    {
                                        if(sum==3)
                                        {
                                            map2[i][j]=1;
                                        }

                                    }
                                if(map2[i][j]==1)
                                   printf("■");
                                else
                                   printf(" ");
                                }

                        printf("\r\n");
                    }

                //clrscr();
                system("cls") ;//清屏函数

                for(i=1;i<=HEIGHE;i++)
                  {
                         for(j=1;j<=WIDE;j++)
                             {
                                 sum=map2[i-1][j-1]+map2[i+1][j+1]+map2[i-1][j+1]+map2[i+1][j-1]+map2[i-1][j]+map2[i+1][j]+map2[i][j-1]+map2[i][j+1];
                                 if(map2[i][j]==1)
                                     {
                                         if(sum<2)
                                             {
                                                 map1[i][j]=0;
                                             }
                                         else if(sum>3)
                                             {
                                                 map1[i][j]=0;
                                             }
                                         else
                                             {
                                                 map1[i][j]=map2[i][j];
                                             }
                                    }

                                 else
                                    {
                                        if(sum==3)
                                        {
                                            map1[i][j]=1;
                                        }

                                    }
                                if(map1[i][j]==1)
                                   printf("■");
                                else
                                   printf(" ");
                                }

                          printf("\r\n");
                    }


  }


}