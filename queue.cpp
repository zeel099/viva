#include<iostream>
using namespace std;

struct Queue{
    int size;
    int f;
    int r;
    int *arr;
};

int main()
{
    struct Queue q;
    q.size = 10;
    q.f = q.r = -1;
    q.arr = (int *)malloc(q.size * sizeof(int));
}