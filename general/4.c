#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
struct route
{
    unsigned int source;
    unsigned int destination;
    int distance;
};

int merge(struct route *arr, int l, int m, int r);
int mergeSort(struct route *arr, int l, int r);

int findparent(int source, int *parent);

int kruskal(struct route *input, long N, unsigned int M);

int main()
{
    //input begin
    long N;
    unsigned int M;
    scanf("%lu %u", &N, &M);
    struct route *input = malloc(N * sizeof(struct route));
    unsigned int ai;
    unsigned int bi;
    int si;
    

    for (unsigned int i = 0; i < M; i++)
    {
        scanf("%u %u %d", &ai, &bi, &si);
        input[i].source = ai;
        input[i].destination = bi;
        input[i].distance = si;
    }

    //input end

    kruskal(input, N, M);
}

int findparent(int v, int *parent)
{
    if (parent[v] == v)
    {
        return v;
    }

    return findparent(parent[v], parent);
}

int kruskal(struct route *input, long N, unsigned int M)
{
    //sort input array in ascending order of distance
    int fuck=0;
    mergeSort(input, 0, M-1);
    struct route *output = malloc(N * sizeof(struct route));
    int *parent = malloc((N) * sizeof(int));

    for (int i = 0; i < N; i++)
    {
        parent[i] = i;
    }

    int count = 0;
    int i = 0;

    while (count != N - 1)
    {
        struct route currentroute = input[i];
        
        //check if its safe to add in mst

        int sourceparent = findparent(currentroute.source, parent);
        int destinationparent = findparent(currentroute.destination, parent);

        if (sourceparent != destinationparent)
        {
            output[count] = currentroute;
            count++;
            
            parent[sourceparent] = destinationparent;
        }

        i++;
    }


    for (int i = 0; i < N - 1; i++)
    {

        fuck+=output[i].distance;
    }
    printf("%d\n",fuck);
}

int merge(struct route *arr, int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;
 
    /* create temp arrays */
    struct route * L, * R;

    L = malloc(n1 * sizeof ( struct route));
    R = malloc(n2 * sizeof ( struct route));
 
    /* Copy data to temp arrays L[] and R[] */
    for (i = 0; i < n1; i++)
        L[i].source = arr[l + i].source;
        L[i].destination = arr[l + i].destination;
        L[i].distance = arr[l + i].distance;
    for (j = 0; j < n2; j++)
        R[j].source= arr[m + 1 + j].source;
        R[j].destination= arr[m + 1 + j].destination;
        R[j].distance= arr[m + 1 + j].distance;
 
    /* Merge the temp arrays back into arr[l..r]*/
    i = 0; // Initial index of first subarray
    j = 0; // Initial index of second subarray
    k = l; // Initial index of merged subarray
    while (i < n1 && j < n2) {
        if (L[i].distance <= R[j].distance) {
            arr[k].source = L[i].source;
            arr[k].distance = L[i].distance;
            arr[k].destination = L[i].destination;
            i++;
        }
        else {
            arr[k].source = R[j].source;
            arr[k].distance = R[j].distance;
            arr[k].destination= R[j].destination;
            j++;
        }
        k++;
    }
 
    /* Copy the remaining elements of L[], if there
    are any */
    while (i < n1) {
        arr[k].source = L[i].source;
        arr[k].distance = L[i].distance;
        arr[k].destination = L[i].destination;
        i++;
        k++;
    }
    /* Copy the remaining elements of R[], if there
    are any */
    while (j < n2) {
        arr[k].source = R[j].source;
        arr[k].distance = R[j].distance;
        arr[k].destination = R[j].destination;
        j++;
        k++;
    }
    return 0;
}
 
/* l is for left index and r is right index of the
sub-array of arr to be sorted */
int mergeSort(struct route *arr, int l, int r)
{
    if (l < r) {
        // Same as (l+r)/2, but avoids overflow for
        // large l and h
        int m = l + (r - l) / 2;
 
        // Sort first and second halves
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
    }
}