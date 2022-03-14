#include <math.h>
#include "pav_analysis.h"

float compute_power(const float *x, unsigned int N) {
    int i=0;
    float sum=0;

    for(i=0; i<N; i++){
        sum+=pow(x[i], 2);
    }

    sum=sum/N;
    sum=10*log10(sum);
    return sum;
}

float compute_am(const float *x, unsigned int N) {
    int i=0;
    float sum=0;

    for(i=0; i<N; i++){
        sum=+fabs(x[i]);
    }

    sum=sum/N;    
    return sum;
}

float compute_zcr(const float *x, unsigned int N, float fm) {
    int i=1;
    float zcr=0;
    for(i=0;i<N;i++){
        if(x[i]*x[i-1]<0){
            zcr++;
        }
    }
    zcr=zcr/(N-1);
    zcr=zcr*fm/2;
    return zcr;
}