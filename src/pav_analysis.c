#include <math.h>
#include "pav_analysis.h"

float compute_power(const float *x, unsigned int N) {
    int i=0;
<<<<<<< HEAD
    float sum=0;
=======
    float sum=10e-8;
>>>>>>> e7d6765f36c8bab571ae2fdb4cb83e8f88c665ae

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

<<<<<<< HEAD
    for(i=0; i<N; i++){
=======
    for(i; i<N; i++){
>>>>>>> e7d6765f36c8bab571ae2fdb4cb83e8f88c665ae
        sum=+fabs(x[i]);
    }

    sum=sum/N;    
    return sum;
}

float compute_zcr(const float *x, unsigned int N, float fm) {
    int i=1;
    float zcr=0;
<<<<<<< HEAD
    for(i=0;i<N;i++){
=======
    for(i;i<N;i++){
>>>>>>> e7d6765f36c8bab571ae2fdb4cb83e8f88c665ae
        if(x[i]*x[i-1]<0){
            zcr++;
        }
    }
    zcr=zcr/(N-1);
    zcr=zcr*fm/2;
    return zcr;
<<<<<<< HEAD
}
=======
}

>>>>>>> e7d6765f36c8bab571ae2fdb4cb83e8f88c665ae
