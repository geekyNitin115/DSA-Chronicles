#include<iostream>
using namespace std;
class heap{
    public:
        int arr[100];
        int size;

        heap(){
            arr[0]=-1;
            size = 0;
        }

        void insert(int val){
            size = size+1;
            int index = size;
            arr[index]= val;
        
            while(index>1){
                int parent  = index/2;
                if(arr[parent]<arr[index]){
                    swap(arr[parent],arr[index]);
                    index = parent;
                }
                else{
                   return ;
                }
            }
          
        }   
        void print(){
            for(int i=1;i<=size;i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        } 
        
        void deleteFromHeap(){

            if(size==0){
                cout<<"nothing to delete"<<endl;
                return;
            }
            arr[1] = arr[size];
            size--;
            
             int i = 1;
            while(i<size){
                int leftIndex = 2*i;
                int rightIndex  = 2*i+1;

                if(leftIndex < size &&   arr[i]  < arr[leftIndex]){
                    swap( arr[i],arr[leftIndex]);
                    i = leftIndex;
                }
                else if(rightIndex < size &&  arr[i] < arr[rightIndex]){
                    swap( arr[i],arr[rightIndex]);
                    i = rightIndex;
                }
                else {
                    return;
                }
            }



        }
        void heapifyFunction(int arr[],int n,int i){
            int largest = i;
            int leftIndex = 2*i;
            int rightIndex = 2*i+1;

            if(leftIndex<=n && arr[largest]<arr[leftIndex]){    // in this question we start indexing from 1 ,so we need to use =
                largest=leftIndex;                              // i.e   leftIndex<=n
            }
             if(rightIndex<=n && arr[largest]<arr[rightIndex]){ // in this question we start indexing from 1 ,so we need to use =
                largest=rightIndex;                             //   i.e rightIndex<=n
            }
            if(largest!=i){
                swap(arr[largest],arr[i]);
                heapifyFunction(arr,n, largest);
                
            }

        }
        void heapSort(int arr[], int n){
            int size = n;
            while(size>1){
                swap(arr[size],arr[1]);
                size--;
                heapifyFunction(arr,size,1);
            }


        }
} ;     
int main(){
    heap h;
    h.insert(50);
    h.insert(55);
    h.insert(53);
    h.insert(52);
    h.insert(54);

     h.print();
    

    h.deleteFromHeap();
    h.print();
    

    int arr[6]={-1,54,53,55,52,50};
    int n = 5;
    for(int i=n/2;i>0;i--){
       h.heapifyFunction(arr,n,i);

    }
    cout<<"printing array is now"<<endl;

    for(int i=1;i<n;i++){
       cout<<arr[i]<<" ";
    }

    h.heapSort( arr, n );

    cout<<"printng array now" << endl;
    for(int i=1;i<=n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;


    cout<<"priorty queue is here " << endl;
    
    // max heap
    priority_queue<int> pq;
    pq.push(4);
    pq.push(2);
    pq.push(5);
    pq.push(3);

    cout<<"element at Top "<< pq.top() << endl;
    pq.pop();
    cout<<"element at Top "<< pq.top() << endl;
    cout<<"size is  "<< pq.size() << endl;



    // min heap
    priority_queue<int, vector<int>,greater<int> > minheap;
    minheap.push(4);
    minheap.push(2);
    minheap.push(5);
    minheap.push(3);

    cout<<"element at Top "<< minheap.top() << endl;
    minheap.pop();
    cout<<"element at Top "<< minheap.top() << endl;
    cout<<"size is  "<< minheap.size() << endl;
 
    return 0;
}