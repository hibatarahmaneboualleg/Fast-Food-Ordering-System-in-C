#include<stdio.h>
#include<string.h>
int main()
{
int r,y,x,k,f,i,l,e,q,n,v,b;
float p,t,a,g,c,u;
char h[5];
p = 0;
a = 0;
g = 0;
t = 0;
v = 0;
n = 0;
b = 0;
printf("Welcome! We're delighted to have you with us today\n");
printf("\n press 1 to show menu \n");
scanf(" %d",&r);
switch(r){
case 1:{
printf("\n type 1 to order \n type 2 to show the bill \n");
scanf("%d",&x);
while(x != 1 && x != 2){
printf("\n please enter a valid number : ");
scanf("%d",&x);
}
while(x < 2){
printf("\n menu: \n 1-Pizza \n 2-Tacos \n 3-Salad \n");
if(x<2){{
a = 0;
v = 0;
n = 0;
g = 0;
p = 0;
b = 0;
scanf("%d",&y);
switch(y){
case 1:
printf("choose a size :\n 1-M. 250 DA \n 2-L. 350 DA \n 3-XL. 400 DA \n");
scanf("%d",&f);
if(f == 1){
p = 250;}
else if(f == 2){
p = 350;}
else if(f == 3){
p = 400;}
else {
while(f != 1 && f != 2 && f != 3){
printf("this is not a valid choice try again ");
scanf("%d",&f);
if(f == 1){
p = 250;}
else if(f == 2){
p = 350;}
else if(f == 3){
p = 400;}
}
}
printf("\n let us know the quantity you want please  :");
scanf("%d",&n);
while(n <= 0){
printf("\n try again sorry:");
scanf("%d",&n);
}
switch(f){
case 1:
printf("you've ordered a %d Pizza size M \n",n);
break;
case 2:
printf("you've ordered a %d Pizza size L \n",n);
break;
case 3:
printf("you've ordered a %d Pizza size XL \n",n);
break;
}
printf("\n which ingredients you want in : \n 1-cheese \n 2-tuna \n 3-beef \n 4-chiken \n");
scanf("%d",&e);
while(e != 1 && e != 2 && e != 3 && e != 4){
printf("\n enter a valid choice : ");
scanf("%d",&e);
}
break; 
case 2:
printf("choose a size :\n 1-M. 200 DA \n 2-L. 300 DA \n 3-XL. 350 DA \n");
scanf("%d",&i);
if(i == 1){
a = 200;}
else if(i == 2){
a = 300;}
else if(i == 3){
a = 350;}
else {
while(i != 1 && i != 2 && i != 3){
printf("this is not a valid choice try again ");
scanf("%d",&i);
if(i == 1){
a = 200;}
else if(i == 2){
a = 300;}
else if(i == 3){
a = 350;}
}
}
printf("\n let us know the quantity you want please  :");
scanf("%d",&v);
while(v <= 0){
printf("\n try again sorry:");
scanf("%d",&v);
}
switch(i){
case 1:
printf("you've ordered a %d Tacos size M \n",v);
break;
case 2:
printf("you've ordered a %d Tacos size L \n",v);
break;
case 3:
printf("you've ordered a %d Tacos size XL \n",v);
break;
}
printf("\n which ingredients you want in : \n 1-cheese \n 2-tuna \n 3-beef \n 4-chiken \n");
scanf("%d",&q);
while(q != 1 && q != 2 && q != 3 && q != 4){
printf("\n enter a valid choice : ");
scanf("%d",&q);
}
break;
case 3:
printf("choose a size :\n 1-M. 100 DA \n 2-L. 200 DA \n 3-XL. 250 DA \n");
scanf("%d",&k);
if(k == 1){
g = 100;}
else if(k == 2){
g = 200;}
else if(k == 3){
g = 250;}
else {
while(k != 1 && k != 2 && k != 3){
printf("this is not a valid choice try again ");
scanf("%d",&k);
if(k == 1){
g = 100;}
else if(k == 2){
g = 200;}
else if(k == 3){
g = 250;}
}
}
printf("\n let us know the quantity you want please  :");
scanf("%d",&b);
while(b <= 0){
printf("\n try again sorry:");
scanf("%d",&b);
}
switch(k){
case 1:
printf("you've ordered a %d Salad size M \n",b);
break;
case 2:
printf("you've ordered a %d Salad size L \n",b);
break;
case 3:
printf("you've ordered a %d Salad size XL \n",b);
break;
}
break;
default:
printf("sorry this is not available");
break;
}
t += (a*v)+(g*b)+(p*n);
}
}
else{
printf("invalid choice");
}
printf("\n type 1 to order \n type 2 to show the bill \n");
scanf("%d",&x);
}
}
printf("\n your total without tax : %f DA \n",t);
printf("\n the tax is : 19%  \n");
c=t+t*0.19;
printf("\n your total with tax : %f DA \n",c);
printf("\n if you are senior type 1 if you are student type 2 if not press any other number \n");
scanf("%d",&l);
printf("\n if you have discount code press 1 or press any other number to continue \n");
scanf("%d",&x);
while(x == 1){
printf("\n you have a discount code enter it here :\n");
scanf("%s",&h);
if(strcmp(h,"free")){
printf("code is invalid want to try again? if yes press 1 or press any other number to continue ");
scanf("%d",&x);
}
else{
printf("the code is valid you have 10% ,discount");
c=c-c*0.1;
x = 2;
}
}
if(l == 2){
u=c-c*0.3;
printf("\n your total to pay is : %f DA \n",u);
}
else if(l == 1){
u=c-c*0.25;
printf("\n your total to pay is : %f DA \n",u);
}
else {
printf("\n your total with tax : %f DA \n",c);  
}
break;
default:
printf("invalid choice");
break;
}
}
