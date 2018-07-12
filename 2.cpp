#include <iostream>
#include <vector>
#include<stdio.h>

using namespace std;

int64_t MaxPairwiseProduct(const vector<int64_t>& a) {
  int index1=0;
  int index2=0;
  int64_t result;
  int n = a.size();
  for (int i = index1+1; i < n; i++) {
   if(a[i]>a[index1])
   {
       index1=i;
   }


  }
  //cout<<"index1 \n"<<index1<<"\n";
  for(int i=0;i<n;i++)
  {
      if(index1==0)
      {
          i++;
          index2++;

      }
      if (a[i]>a[index2]&&(i!=index1))
      {
          index2=i;
      }
  }
  //cout<<"index2 \n"<<index2<<"\n";

  result=a[index1]*a[index2];
  return result;
}

int main() {
    int n;
    cin >> n;
    vector<int64_t> numbers(n);
    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }

    int64_t result;
     result=MaxPairwiseProduct(numbers);
    cout << result << "\n";
    return 0;
}
