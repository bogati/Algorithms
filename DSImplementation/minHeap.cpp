#include <iostream>
#include <vector>
#include <iterator>
using namespace std;


class MinHeap{
  
  public:
  vector<int> storage;
  
  public:
  MinHeap(vector<int> vec){
    this->storage = vec; 
    
  } 
  //write all the functions for the class here 
  
  
  void swap (int i, int j){
    int temp = this->storage[i];
    this->storage[i]=this->storage[j];
    this->storage[j]=temp;
    //cout << storage[i]<<endl;
    //cout << storage[j]<<endl;

    
  }
  //returns the root node/ oth index of the array 
  
  int  peak(){
    return this->storage[0];
  }
  
  int size(){
    return this->storage.size();
  }

  int getParent(int child){
    if(child%2 == 0){
      return (child-2)/2; 
    }else{
      return (child-1)/2;
    }
  }

  int getChild(int parent){
    int child1 = 2*parent+1;
    int child2 = 2*parent+2;

    //child1 is off the end of the array 
    if(child1 >= this->size()){
      return child1;
    }
    //child2 is off the end of the array 
    else if(child2 >= this->size()){
      return child1;
    }
    //now check for valid indexes 
    else if(this->storage[child1]< this->storage[child2]){
      return child1;

    }else{
      return child2; 
    }
    
  } //end of the getChild 


  void bubbleDown(int parent){
    //for this parent which is root at the beginning there are potentially two children with which the parent can be swapped 

    int child = getChild(parent);

    //two valid conditions 
    while(child<this->size() && this->storage[parent] > this->storage[child]){
      this->swap(child, parent);
      parent = child; 
      //create a new child
      child = this->getChild(parent);
    }


  }

//deleting the element always takes place at the peak in Heap mostly
  void removePeak(){
    //swap the 0th index and the last index 
    this->swap(0, this->size()-1);
    this->storage.erase(this->storage.begin() + 0);

    this->bubbleDown(0);
    
    

  }
  void bubbleUp(int child){
    int parent = this->getParent(child);

    //two logic cases to be considered while child>0 means it is not root and hence will have parent
    //second , loop through until heap condition is not maintained that is until the parent is bigger than child (MaxHeap)

    while(child>0 && (this->storage[child] < this->storage[parent])){
      this->swap(child, parent);
      //after swap index of child becomes the index of parent 
      child = parent; 
      //call the parent of this new child 
      parent = this->getParent(child);

    }//while loop will continue until the element bubbles up to its correct postion 


  } //end of the the bubbleUp function 

  void insert(int val){
    //also can be thought of as bubble up 
    //insert the value at the first breadth first position which is basically the last postion in the array 
    storage.push_back(val);
    //bubble up to maintain the valid heap 
    this->bubbleUp(this->size()-1 );
    
    
    
  }
  //removing any other element besides peak time complexity = O(N)
  void  remove (int val){
    //find the index of the value to be removed 
    int removeIndex =-1; 
    for(int i=0; i<this->size();i++){
      if (this->storage[i] == val){
        removeIndex = i; 
      }
    }
    if(removeIndex == -1){
      return ;
    }
    //when removing an element we swap it with the last elem in array or also the first BFS position 
    this->swap(removeIndex, this->size()-1);
    this->storage.erase(this->storage.begin() + removeIndex);
    this->bubbleUp(removeIndex);
    this->bubbleDown(removeIndex);
    

  }
  
};


int main() {
 
  
  vector<int> vec;
  
  MinHeap obj(vec); 
  obj.insert(20);
  obj.insert(11);
  obj.insert(15);
  obj.insert(10);
  obj.insert(8);
  obj.insert(12);
  obj.insert(1);
  obj.insert(2);
  obj.insert(13);




  
  cout << "The peak value is "<<obj.peak()<<endl;
  
  //testing the size function 
  cout << "The size of the heap is "<<obj.size()<<endl;

  //insert a new value 
    //obj.insert(21);
    //cout << "The peak value is "<<obj.peak()<<endl;

    //delete the peak 
    obj.removePeak();
    cout << "The peak value after peak removal is "<<obj.peak()<<endl;

    //delete the random value 
    obj.removePeak();
    cout << "The peak value after another peak removal is "<<obj.peak()<<endl;
    obj.removePeak();
    cout << "The peak value after another + peak removal is "<<obj.peak()<<endl;
    obj.remove(10);
    cout << "The peak value after peak-- removal is "<<obj.peak()<<endl;

    obj.removePeak();
    cout << "The peak value after peak-- removal is "<<obj.peak()<<endl;



  

   
	return 0;
}

