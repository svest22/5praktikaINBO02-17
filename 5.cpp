#include <iostream>

using namespace std;


void sort(int arr[],int n)
{
    for(int i=0;i<n;i)
        for(int j;j<n-1;j)
        {
            int arrc = arr[j];
            arr[j]=arr[j1];
            arr[j1] = arrc;
        }
    for (int k=0;k<n;k)
        cout<<arr[k]<<endl;
}


void sort(float arr[],int n)
{
    for(int i=0;i<n;i)
    for(int j;j<n-1;j)
        {
            float arrc = arr[j];
        arr[j]=arr[j1];
        arr[j1] = arrc;
        }
    for (int k=0;k<n;k)
    cout<<arr[k]<<endl;
    }


void sort(double arr[],int n)
    {
    for(int i=0;i<n;i)
    for(int j;j<n-1;j){
    double arrc = arr[j];
    arr[j]=arr[j1];
    arr[j1] = arrc;
  }

  for (int k=0;k<n;k)

    cout<<arr[k]<<endl;
  }


int main()
{
    int n, intik;
    float floatik;
    double doublik;

    cout<<"Enter n:" << endl;
    cin>>n;

    int *arr1 = new int [n];
    float *arr2= new float[n];
    double *arr3= new double[n];

    cout<<"Inpiut int" << endl;
   for(int i=0;i<n;i)
    {
        cin>>intik;
        arr1[i]=intik;
   }

   cout<<"Input float" << endl;
   for(int i=0;i<n;i)
    {
        cin>>floatik;
        arr2[i]=floatik;
        }

   cout<<"Input double"<<endl;
   for(int i=0;i<n;i)
   {
        cin>>doublik;
        arr3[i]=doublik;
   }

   sort (arr1,n);
   cout << endl;
   sort (arr2,n);
   cout << endl;
   sort (arr3,n);
   cout << endl;
   return 0;
}