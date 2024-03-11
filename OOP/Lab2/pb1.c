#include <stdio.h>
#include <stdlib.h>


long long maxTriplet(int ar[], int sz, int *t1, int *t2, int *t3) {
    long long max1 = -1000000000, max2 = -1000000000, max3 = -1000000000, min1=1000000000, min2=1000000000;
        for (int i = 0; i < sz; i++) {
            if(min1>ar[i]){
                min2=min1;
                min1=ar[i];
            }
            else if(min2>ar[i]){
                min2=ar[i];
            }
            if (ar[i] > max1) {
                max3 = max2;
                max2 = max1;
                max1 = ar[i];
            } else if (ar[i] > max2) {
                max3 = max2;
                max2 = ar[i];
            } else if (ar[i] > max3) {
                max3 = ar[i];
            }
        }
        if(min1*min2*max1>max1*max2*max3){
            *t1 = min1;
            *t2 = min2;
            *t3 = max1;
            return min1 * min2 * max1;
        }
        *t1 = max1;
        *t2 = max2;
        *t3 = max3;
        return max1 * max2 * max3;
}

int main(){
    int ar[20]={3,-1000,-100,9,10};
    int sz=5;
    int t1,t2,t3;
    long long prod=maxTriplet(ar,sz,&t1,&t2,&t3);
    printf("%lld\n",prod);
}