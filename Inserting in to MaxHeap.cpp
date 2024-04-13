#include<iostream>
#include<vector>
using namespace std;

class MaxHeap
{
	private:
		vector<int>heap;		//Use a Dynamic array to store the element
		int parent(int i)
		{
			return (i-1)/2;		//Compute the index parent of a given node
		}
		public:
			void insert(int value)
			{
				//Step 1: Add the new value to the end of the hesp
				heap.push_back(value);
				int index=heap.size()-1;		//get the index of the inserted element
				//Step 2: Fix the max heap property if it's violeted
				//if the inserted element is greater that it's parent, we swap them
				while(index!=0&&heap[parent(index)]<heap[index])
				{
					swap(heap[parent(index)],heap[index]);
					index=parent(index); //Move to the parent index
				}
			}
			void printHeap()
			{
				for(int i=0;i<heap.size();i++)
				{
					cout<<heap[i]<<" ";
				}
				cout<<endl;
			}
};

int main()
{
	MaxHeap h;
	h.insert(3);
	h.insert(5);
	h.insert(1);
	h.insert(8);
	cout<<"Max Heap: ";
	h.printHeap(); //Should print 8513
	return 0;
}