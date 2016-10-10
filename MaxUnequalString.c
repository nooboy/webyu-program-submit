#include <stdio.h>
#include <string.h>
int main(){
    // char str[]="abcabcbb";
    // char str[]="bbbbbb";
    // char str[]="abccba";
    // char str[]="aabbc";
    char str[]="aabcbcd";

    int max = 0, start = 0, total = strlen(str);
    for(int i=0; i<total; ++i)          //记录起点
        for(int j=1; j<total; ++j){     //记录终点 
            int flag = 0;               //标记是否出现重复字符
            for(int p=i; p<=j; ++p){
                for(int q=p+1; q<j; ++q) {
                    if(str[q] == str[p]) {
                        flag = 1;
                        break;
                    }
                }
            }
            if(flag==0 && j-i>max) {
                max = j-i;
                start = i;
            }
        }
    printf("max=%d\n",max);
    return max;
}
