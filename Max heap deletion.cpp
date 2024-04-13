#include <iostream>
#include <vector>

class MinHeap {
private:
    std::vector<int> heap;

    int left(int i) { return 2*i + 1; }
    int right(int i) { return 2*i + 2; }

    // This function ensures that the heap property is maintained after deletion.
    void heapify(int i) {
        int smallest = i;
        int l = left(i);
        int r = right(i);

        if (l < heap.size() && heap[l] < heap[smallest]) {
            smallest = l;
        }

        if (r < heap.size() && heap[r] < heap[smallest]) {
            smallest = r;
        }
 if (smallest != i) {
            std::swap(heap[i], heap[smallest]);
            heapify(smallest);
        }
    }

public:
    void insert(int value) {
        heap.push_back(value);
        int index = heap.size() - 1;

        while (index != 0 && heap[(index-1)/2] > heap[index]) {
            std::swap(heap[(index-1)/2], heap[index]);
            index = (index-1)/2;
        }
    }

    int deleteMin() {
        if (heap.size() == 0) {
            std::cerr << "Heap is empty!" << std::endl;
            return -1;  // Return an error value or consider throwing an exception.
        }

        int minElement = heap[0];  // The root contains the minimum value.

        // Replace the root with the last element.
        heap[0] = heap.back();
        heap.pop_back();

        // Heapify the root to restore the heap properties.
        heapify(0);

        return minElement;  // Return the deleted minimum element.
    }

 void printHeap() {
        for (int val : heap) {
            std::cout << val << " ";
        }
        std::cout << std::endl;
    }
};

int main() {
    MinHeap h;
    h.insert(8);
    h.insert(5);
    h.insert(3);
    h.insert(10);
    h.insert(9);

    std::cout << "Initial Heap: ";
    h.printHeap();

    int minElem = h.deleteMin();
    std::cout << "Deleted Min: " << minElem << std::endl;

    std::cout << "Heap after deletion: ";
    h.printHeap();

    return 0;
}
