#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &a, vector<int> &b, vector<int>& res)
{
    int i = 0;
    int j = 0;
    int k = 0;
    while (i < a.size() && j < b.size())
    {

        if (a[i] <= b[j])
        {
        res[k] = a[i];
            k++;
            i++;
        }
        else if (a[i] > b[j])
        {
        res[k] = b[j];
            k++;
            j++;
        }
    }
    if (i == a.size())
    { // a is at end
        while (j < b.size())
        {
        res[k] = b[j];
            j++;
            k++;
        }
    }

    else{
         while (i < a.size())
        {
        res[k] = a[i];
            i++;
            k++;
        }
    }
}

void mergesort(vector<int>& v ){
    int n=v.size();
if(n==1) return;

    int n1=n/2;
     int n2=n-n/2;//to solve odd number problem 
     
     vector<int> a(n1),b(n2);

     for(int i=0;i<n1;i++){//copy first half
        a[i]=v[i];
     }
     for(int i=0;i<n2;i++){//copy second half
        b[i]=v[i+n1];
     }
     mergesort(a);
     mergesort(b);

     merge(a,b,v);
     a.clear();
     b.clear();//used to delete the vector to minimize spave cmplxty.
     }

int main()
{

int arr[]={5,1,6,2,9,8,3};
int n=sizeof(arr)/sizeof(arr[0]);


vector<int> v(arr,arr+n);


    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";

    }
    cout<<endl;
    mergesort(v);


      for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }  
    return 0;
}
