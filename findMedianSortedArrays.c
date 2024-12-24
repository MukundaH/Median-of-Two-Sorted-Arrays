double findMedianSortedArrays(int* n1, int n1s, int* n2, int n2s){
    int n = n1s + n2s;
    int stop = n/2, i=0, j=0, k=0, max=2147483647, c;
    if(n%2==0){stop--;}
    while(k!=stop+1){
        int v1=max, v2=max;
        if(i<n1s){v1=n1[i];}
        if(j<n2s){v2=n2[j];}
        if(v1<=v2){
            i++;
            c=v1;
        }
        else{
            j++;
            c=v2;
        }
        k++;
    }
    double ret = c;
    if(n%2==0){
        printf("triggered");
        int v1=max, v2=max;
        if(i<n1s){v1=n1[i];}
        if(j<n2s){v2=n2[j];}
        if(v1<=v2){
            ret+=v1;
        }
        else{
            ret+=v2;
        }
        ret/=2;
    }
    return ret;
}
