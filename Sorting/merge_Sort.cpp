#include <iostream>
#include <vector>

using namespace std ; 


void merge(vector<int> &vect, int l, int mid, int h){
  vector<int> temp;

  // earlier i did with two vectors, now all the difference is playing with the indexes and figuring out the arrays based on the given index 
  //make a temporary array that will be returned as the sorted array 
//first --l=0, h= 7
  //int s1 = mid;//
  //int s2 = h;

int i =l; int j =mid+1; 
while((i<=mid) && (j<=h)){
  //when do you want the function to come out of the loop ? 
  //ans: when either of the the array's index finishes 
  if(vect[i]<=vect[j]){
    temp.push_back(vect[i]);
    //increase the iterator to next val in vec1
    i++;

  }
  else{
    temp.push_back(vect[j]);
    j++;
  }

}//end of the while loop 
//once either vec1 or vec2 is empty 
//fill the rest of the value in the resultant vector with the values from unempty vector 
if(i <= mid){
  temp.push_back(vect[i]);
  i++;

}
if(j<=h){
  temp.push_back(vect[j]);
  j++;
}
cout << "printing temp values"<<endl;
for(int t=0; t<temp.size();t++){
  cout << temp[t] << endl; 
}

for(int z=l;z<=h;z++){
  vect[z] = temp[z-l];

}
  
}//end of the merge function 

void divide(vector<int> &vec,int l, int h){
  //l = 0, h = 7 
  if(l<h){
    int mid = (h+l)/2;
    // vec = {9,3,7,5,6,4,8,2};
    // mid = 3
    //{9,3,7,5} and {6,4,8,2}
    //divide in left half and right half
    divide(vec,l,mid);
    divide(vec,mid+1,h);

    //merge with the given vector along the associated information about low index, high index and the middle index
    //why we need mid ? -- to separate 2 arrays 
    merge(vec,l,mid,h);

  }

}


//merge test function with vectors rather than indexes 
vector<int> merge_test(vector<int> vec1, vector<int> vec2){
vector<int> res;
int s1 = vec1.size(); //4 : [3,5,7,9]
int s2 = vec2.size(); //4 : [2,4,6,8]

int i =0; int j =0; 
while((i<s1) && (j<s2)){
  //when do you want the function to come out of the loop ? 
  //ans: when either of the the array's index finishes 
  if(vec1[i]<vec2[j]){
    cout <<"The value being pushed in i is"<<vec1[i]<<endl;
    res.push_back(vec1[i]);
    //increase the iterator to next val in vec1
    i++;

  }
  else{
    cout <<"The value being pushed in j is"<<vec2[j]<<endl;
    res.push_back(vec2[j]);
    j++;
  }

}//end of the while loop 
cout << "the value of i is "<<i<<endl;
cout << "the value of j is "<<j<<endl;
//once either vec1 or vec2 is empty 
//fill the rest of the value in the resultant vector with the values from unempty vector 
if(i < s1){
  cout<<"from i"<<"the value of i is"<<i<<endl;
  cout << "the value being inserted is"<<vec1[i]<<endl; 
  
  res.push_back(vec1[i]);
  cout << "printing values from inside merge fcn"<<endl;
  for(int k=0;k<res.size();k++){
    cout << res[k] <<endl; 
  }
  cout << "end of printing values from inside merge fcn"<<endl;
  i++;
  
  

}
if(j<s2){
  cout<<"from j";
  j++;
  res.push_back(vec1[j]);
  
}

return res; 
  
}

int main() {

  //define and initialize the vector 
  vector<int> vec = {9,3,7,5,6,4,8,2};
  vector<int> v1 = {3,5,7,9};
  vector<int> v2 = {2,4,6,8};

  /*vector<int> result = merge_test(v1, v2);
  cout << "printing values from inside main fcn"<<endl;
  for(int i=0; i<result.size();i++){
    cout << result[i]<<" " <<endl;; 
  }
   cout << "printing values from inside main fcn"<<endl;
  //divide into halves 
  // merge and sort 

  */
  divide(vec,0,7);
  cout <<"the size of the vector is"<<vec.size()<<endl;
  for(int k=0;k<vec.size();k++){
    cout << vec[k] <<endl; 
  }

  
}
