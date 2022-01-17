#include <stdio.h>
int main() {
    int i;
    long c_num,say,temp2;
    char kontrol[100];
    git:
    printf("Kart numarasını giriniz:");
    scanf("%ld",&c_num);
    scanf("%c",&kontrol[100]);
    say=c_num;
    i=0;
    while(say!=0){
        say/=10;
        i++;
    }
    if(i>=13 && i<17){
        while(1) {
            if(c_num<0){
                goto git;
            }
            else if(kontrol>='a' && kontrol<='z'){
                goto git;
            }
            else{
                break;
            }
        }
    }
    else{
        goto git;
    }
    int temp,a=0,b,c,d=0,e,f;
    temp2=c_num;
    for (int i = 0; i < 8; ++i) {
        for (int j = 0; j < 2; ++j) {
            temp=temp2%10;
            temp2/=10;
        }
        c=temp*2;
        if(c>9){
            b=c%10;
            c/=10;
            d+=c+b;
        } else{
            a+=temp*2;
        }
    }
    e=a+d;
    //printf("%i\n",e);
    temp2=c_num;
    temp=temp2%10;
    temp2/=10;
    f=temp;
    for (int i = 0; i < 7; ++i) {
        for (int j = 0; j < 2; ++j) {
            temp=temp2%10;
            temp2/=10;
        }
        f+=temp;
    }
    //printf("%i\n",f);
    if((f+e)%10!=0){
        printf("INVALID\n");
        return 0;
    }
    int onay = 0;
    int mct = 51, visat = 4, amext = 34;
    //long c_num;
    //printf("Kart Numarasını Giriniz:");<<
    //scanf("%ld", &c_num);
    while (c_num > 100) {
        c_num /= 10;
    }
    if (c_num / 10 == visat) {
        printf("Visa\n");
        goto gel;
    }
    for (int i = 0; i < 5; i++) {
        if (c_num != mct && mct < 56) {
            mct++;
        } else if (c_num == mct) {
            onay = 1;
            break;
        }
        if (amext < 38 && c_num != amext) {
            amext += 3;
        } else if (c_num == amext) {
            onay = 2;
            break;
        }
    }
    if (onay == 1) {
        printf("Mastercard\n");
    } else if (onay == 2) {
        printf("Amex\n");
    }
    gel:
    return 0;
}
