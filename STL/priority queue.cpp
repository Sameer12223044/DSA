#include<bits/stdc++.h>
using namespace std;


void explainPQ() {
	// max heap
    priority_queue<int> pq;  
    pq.push(2);
    pq.push(3);
    pq.push(4);
    pq.emplace(10);
    
    cout << pq.top() << endl;  
    pq.pop();
    cout << pq.top() << endl;  
    
    // Minimum Heap
    priority_queue<int, vector<int>, greater<int>> minHeap;
    minHeap.push(5);
    minHeap.push(2);
    minHeap.push(8);
    minHeap.emplace(10);
    
    cout << minHeap.top() << endl;  
}

int main() {
    explainPQ();
    return 0;
}
