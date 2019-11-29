#include <iostream>
#include<vector>
using namespace std;

int partition(vector<int> &a, int lb, int ub){
  //we happen to choose pivot as the lb value 
  int pivot = a[lb];
  int start = lb;
  int end = ub; 
  cout << "The pivot is "<<pivot<<endl;
  
  while(start<end){
    while(a[start]<=pivot){
      //when element is smaller than pivot then it is fine
      //with staying at the location where it is currently 
      start++;
    }
    while(a[end]>pivot){
      //when element is bigger than pivot then it is fine
      //with staying at the location where it is currently 
      end--;
    }
    //swap here. at this point both pointers stop
    //before swaping write a logic to make sure that start
    //has not surpassed end otherwise we will be swapping wrong
    if(start<end){
      int temp = a[end];
      a[end] = a[start];
      a[start] = temp;
    }
    
  } //end of outermost while 
    
    //when start has surpassed end and the final step
    int temp = a[lb];
    a[lb] = a[end]; 
    a[end] = temp; 
    cout << "The swapped values are "<< temp <<"and"<<a[end]<<endl;
    
    //finally return the appropriate index value from where
    //we will start the partitioning 
    
    cout << "The returned position is "<< end << endl;
    cout << "The returned position value is "<< a[end] << endl; 
    return end;

  }
  
  
  
  void quick_Sort(vector<int>& a,int lb,int ub){
    if(lb<ub){
      int part = partition(a,lb,ub);
      quick_Sort(a,lb,part-1);
      quick_Sort(a,part+1,ub);  
    }
    
  } //end of the quick sort 
  
  


int main() {
	vector<int> a = {7,6,10,5,9,2,1,15,7};
  quick_Sort(a,0,a.size()-1);
  
  for(int i=0; i<a.size(); i++){
    cout << a[i] << " " <<endl; 
  }
	return 0;
}

