#include <iostream>
#include <string>
using namespace std;
int main(){
char card_number[17];
int nums[16]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
int keepfor[2];
int sumc=0;
int sumt=0;
int keep=0;
string keep_s;
int keep_sum=0;
cout<<"Numarayi giriniz:";
cin>>card_number;
for(int i=0;i<16;i++)
{   nums[i] = card_number[i] - '0';
}

for(int j=0;j<16;j++){
    if (j%2!=0){
        sumt=sumt+nums[j];
        }
    else{
        keep=nums[j]*2;
        if (keep>=10){
            keep_s=to_string(keep);
            for(int k=0;k<2;k++){
                    keepfor[k]=keep_s[k]-'0';
                    keep_sum=keep_sum+keepfor[k];
                }
            sumc=sumc+keep_sum;
            keep_sum=0;
            }
        else{
            sumc=sumc+keep;
        }

    }

}
int last_sum=sumc+sumt;
if (last_sum%10==0){
    cout<<"Luhn algoritmasına uyuyor.";
}
else
    cout<<"Luhn algoritmasına uymuyor";
return 0;
}
