#import <stdio.h>
#import <time.h>
#import <unistd.h>
#import <stdlib.h>

int main(){
    int hour = 0;
    int min = 0;
    int sec = 0;

    while(1){
        printf("%02d : %02d : %02d ",hour,min,sec);
        sec++;
        if(sec == 60){
            min = min+1;
            sec = 0;
        }
        if(min == 60){
            hour = hour+1;
            min = 0;
        }
        if(hour == 24){
            hour = 0;
            min = 0;
            sec = 0;
        }
        sleep(1);
        system("cls"); 
    }
    return 0;
}