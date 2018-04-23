public class MinHeap{
    //storing array elements
    int Heap [];
    int size,maxsize;
    static final int FRONT=1;
    MinHeap(int maxsize){
      this.maxsize=maxsize;
      this.size=0;
      Heap=new int[this.maxsize+1];
      Heap[0]=Integer.MIN_VALUE;
    }
    int parent(int pos){
      return pos/2; 
    }
    int leftChild(int pos){
      return 2*pos;
    }
    int rightChild(int pos){
      return 2*pos+1;
    }
    boolean isLeaf(int pos){
      if(pos>=(size)/2 && pos<=size)
        return true;
      return false;
    }
    void swap(int fpos,int spos){
      int tmp;
      tmp=Heap[fpos];
      Heap[fpos]=Heap[spos];
      Heap[spos]=tmp;
    }
    void minHeapify(int pos){
      int lr=leftChild(pos);
      int rr=rightChild(pos),minpos;
      if(lr<=size && Heap[lr]<Heap[pos])
        minpos=lr;
      else
        minpos=pos;
      if(rr<=size && Heap[rr]<Heap[minpos])
        minpos=rr;
      if(minpos!=pos){
         swap(minpos,pos);
         minHeapify(minpos);
      }
    }
    void insert(int element){
      Heap[++size]=element;
      int current=size;
      while(Heap[current]<Heap[parent(current)]){
        swap(current,parent(current));
        current=parent(current);
      }
    }
    void print(){
      for(int i=1;i<=size/2;i++){
        System.out.println("Parent :"+Heap[i]+"  left child is "+Heap[2*i]+"  right child is "+Heap[2*i+1]);
        System.out.println();
      }
    }
    void minHeap(){
      for(int pos=(size/2);pos>=1;pos--){
        minHeapify(pos);
      }
    }
    int remove(){
      int popped=Heap[FRONT];
      Heap[FRONT]=Heap[size--];
      minHeapify(FRONT);
      return popped;
    }
    public static void main(String args[]){
      System.out.println("MIN_HEAP");
      MinHeap mheap=new MinHeap(49);//cause I love the number
      /*
      
      */
      mheap.insert(25);
      mheap.insert(41);
      mheap.insert(51);
      mheap.insert(57);
      mheap.insert(29);
      mheap.insert(5);
      mheap.insert(48);
      mheap.minHeap();
      mheap.print();
    }


}