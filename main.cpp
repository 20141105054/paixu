//
//  main.cpp
//  paixu
//
//  Created by 20141105054 on 15/11/11.
//  Copyright © 2015年 宋志远. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[])
{
    int i,j;
    int t;
    int a[10];
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++)
    {
        for(j=0;j<10-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
    for(i=0;i<10;i++)
    {
        printf("%d\n",a[i]);
    }
    
    
    
    
    
    return 0;
}
