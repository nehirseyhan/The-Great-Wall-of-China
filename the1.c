#include <stdio.h>
#include <math.h>
#define W_INDEX 0
#define H_INDEX 1
#define T_INDEX 2
#define P_INDEX 3
#define S_INDEX 4
#define A_INDEX 5
#define N_INDEX 6

int main() { 

int i,x,wall[100000],r,k,w,h,t,p,s,a,n;
scanf("%d %d", &r, &k);
for(i=0;i<=r ;i++)
{
    wall[i] = 1;
}
for(i=0;i<k;i++)
{
    scanf("%d %d %d %d %d %d %d", &w, &h, &t, &p, &s, &a, &n);
    
    for(;n>0;n--)
    {
   
    for(x=p; (x-p)<w; x++)
    {
    	if(x<0) continue;
       if(wall[x] < h) wall[x] =h;
       if((p>r)&&(s>0)) break;
      
       if((p+w)<0) break;
    }  
    p += (s*a); 
    if(p>r&&(s>0)) break; 
    if((p+w)<0) break; 
    
    }
}

for(i=0;i<r;i++)
{
printf("%d ",wall[i]);    
}

printf("%d\n", wall[r]);
return 0;
}