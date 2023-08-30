#include<bits/stdc++.h>
using namespace std;

//10, 20, 30, 40
// 0,   1,  2,  3

class LinearSearch
{
public:
    vector<int>storage;
    int value;
    void SetInput()
    {
        int size;
        printf("Enter the array size:\n");
        scanf("%d", &size);
        printf("Please enter values: \n");
        for(int i = 0 ; i < size; i ++)
        {
            int value;
            scanf("%d", &value);
            storage.push_back(value);
        }
    }
    void GetSearchingValue()
    {
        printf("Please enter searching value: \n");
        scanf("%d", &value);
    }
    int GetIndex()
    {
        int index = -1;
        for(int i = 0 ; i < storage.size(); i ++)
        {
            if(storage[i] == value)
                index = (i + 1);
        }
        return index;
    }
    void PrintResult(int idx)
    {
        if(idx > -1){
            printf("Entered value has found at position = %d\n", idx);
        }else{
            printf("Entered value has not found\n");
        }
    }
};


int main()
{
    LinearSearch linear;
    linear.SetInput();
    linear.GetSearchingValue();
    int sajib = linear.GetIndex();
    linear.PrintResult(sajib);
}
