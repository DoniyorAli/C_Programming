#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

char ar[13] = "             ";
char arr[13] = "             ";
int a;
int b;


void map();

void arrow();

int main(){

    printf("\n\e[31mIltimos belgi kiritmela!!!\e[34m\n");
    printf("Soatni kiriting: ");
    scanf("%d", &a);
    while(a>23 || a<0){
        system("clear");
        printf("\e[31mIltimos belgi kiritmela!!!\e[34m\n");
        printf("Soat 0 dan 23 gachan adashmang: ");
        scanf("%d", &a);
    }
    printf("\e[31mIltimos belgi  kiritmela!!!\e[34m\n");
    printf("\nMinutni kiriting: ");
    scanf("%d", &b);
    while(b>59 || b<0){
        system("clear");
        printf("\e[31mIltimos belgi kiritmela!!!\e[34m\n");
        printf("\nMinut 0 dan 59 gachan adashmang ");
        scanf("%d", &b);
    }

    while(1){
        map();
        arrow();
        a=0;
    }

return 0;
}




void harita(){
    system("clear");
    system("color A"); 

    printf("\n");
    printf("-----------------------\n");
    printf("|    11    12    1    |\n");
    printf("|     \e[33m%c\e[32m    \e[33m%c\e[32m    \e[33m%c\e[32m     |\n",arr[12], arr[1], arr[2]);
    printf("| 10               2  |\n");
    printf("|    \e[33m%c\e[32m  \e[31m%c\e[32m  \e[31m%c\e[32m  \e[31m%c\e[32m  \e[33m%c\e[32m    |\n",arr[11], ar[11], ar[0], ar[1], arr[3]);
    printf("|      \e[31m%c\e[32m       \e[31m%c\e[32m      |\n",ar[10], ar[2]);
    printf("| 9 \e[33m%c\e[32m  \e[31m%c\e[32m   &   \e[31m%c\e[32m  \e[33m%c\e[32m 3 |\n",arr[10], ar[9], ar[3], arr[4]);
    printf("|      \e[31m%c\e[32m      \e[31m%c\e[32m       |\n", ar[8], ar[4]);
    printf("|    \e[33m%c\e[32m  \e[31m%c\e[32m  \e[31m%c\e[32m  \e[31m%c\e[32m  \e[33m%c\e[32m    |\n",arr[9], ar[7], ar[6], ar[5], arr[5]);
    printf("|  8               4  |\n");
    printf("|      \e[33m%c\e[32m   \e[33m%c\e[32m    \e[33m%c\e[32m     |\n",arr[8], arr[7], arr[6]);
    printf("|     7    6     5    |\n");
    printf("-----------------------\n");

}

void strelha(){

    for(int i=a; i<=23; i++){
        for(int j=b; j<60; j++){
            for(int h=0; h<60; h++){
                harita();
                if(1){
                    if(j<10 && j>=5){
                        arr[1]=' ';
                        arr[2]='#';
                    }
                    else if(j<15 && j>=10){
                        arr[2]=' ';
                        arr[3]='#';
                    }
                    else if(j<20 && j>=15){
                        arr[3]=' ';
                        arr[4]='#';
                    }
                    else if(j<25 && j>=20){
                        arr[4]=' ';
                        arr[5]='#';
                    }
                    else if(j<30 && j>=25){
                        arr[5]=' ';
                        arr[6]='#';
                    }
                    else if(j<35 && j>=30){
                        arr[6]=' ';
                        arr[7]='#';
                    }
                    else if(j<40 && j>=35){
                        arr[7]=' ';
                        arr[8]='#';
                    }
                    else if(j<45 && j>=40){
                        arr[8]=' ';
                        arr[9]='#';
                    }
                    else if(j<50 && j>=45){
                        arr[9]=' ';
                        arr[10]='#';
                    }
                    else if(j<55 && j>=50){
                        arr[10]=' ';
                        arr[11]='#';
                    }
                    else if(j<60 && j>=55){
                        arr[11]=' ';
                        arr[12]='#';
                    }
                    else{
                        arr[12]=' ';
                        arr[1]='#';
                    }
                }
                if(1){
                    if(i==0 || i==12){
                        ar[11]=' ';
                        ar[0]='*';
                    }
                    else if(i==1 || i==13){
                        ar[0]=' ';
                        ar[1]='*';
                    }
                    else if(i==2 || i==14){
                        ar[1]=' ';
                        ar[2]='*';
                    }
                    else if(i==3 || i==15){
                        ar[2]=' ';
                        ar[3]='*';
                    }
                    else if(i==4 || i==16){
                        ar[3]=' ';
                        ar[4]='*';
                    }
                    else if(i==5 || i==17){
                        ar[4]=' ';
                        ar[5]='*';
                    }
                    else if(i==6 || i==18){
                        ar[5]=' ';
                        ar[6]='*';
                    }
                    else if(i==7 || i==19){
                        ar[6]=' ';
                        ar[7]='*';
                    }
                    else if(i==8 || i==20){
                        ar[7]=' ';
                        ar[8]='*';
                    }
                    else if(i==9 || i==21){
                        ar[8]=' ';
                        ar[9]='*';
                    }
                    else if(i==10 || i==22){
                        ar[9]=' ';
                        ar[10]='*';
                    }
                    else if(i==11 || i==23){
                        ar[10]=' ';
                        ar[11]='*';
                    }
                }
                printf("%d:%d:%d",i, j, h);
                // printf("\n%d.%d.%d", 21, 02, 2022);
                // Sleep(990);
                sleep(1);
            }
            
        }
        b=0;
    }

}




















