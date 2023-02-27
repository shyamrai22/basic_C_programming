#include <stdio.h>
int main(){
char a;
scanf("%c",&a);
if((a>='A'&& a<='Z')||(a>='a'&& a<='z')){
printf("ALPHABET");}
else {
printf("NOT ALPHABET");
}
return 0;
}
