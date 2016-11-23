#include <stdio.h>

/*单词长度
你的程序要读入一行文本，其中以空格分隔为若干个单词，以‘.’结束。你要输出这行文本中每个单词的长度。
这里的单词与语言无关，可以包括各种符号，比如“it's”算一个单词，长度为4。注意，行中可能出现连续的
空格。*/



void myPrint(int length, int *first_output){
    if(*first_output){
        printf("%d", length);
        *first_output = 0;
    }
    else
        printf(" %d", length);
}

int main(){
    char word[100];
    int first_output = 1;
    while(1){
        scanf("%s", word);
        int length = 0;
        for(int i = 0; i < 100; i++){
            if (word[i] =='.'){
                if (length == 0)//测试案例要求“没有有效内容的句子不应该有任何的输出”
                    return 0;
                myPrint(length, &first_output);
                return 0;
            }
            else if(word[i]){
                length++;
            }
            else{
                myPrint(length, &first_output);
                break;
            }
        }
    }
}
