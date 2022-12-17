#include <bits/stdc++.h> 
using namespace std;

class MedianFinder {
public:
    priority_queue<int> mxHeap;
    priority_queue<int, vector<int>, greater<>> mnHeap;
    MedianFinder() {
    }
    
    void addNum(int num) {
        mxHeap.push(num);
        mnHeap.push(mxHeap.top());
        mxHeap.pop();

        if(mxHeap.size()+1 < mnHeap.size()){
            mxHeap.push(mnHeap.top());
            mnHeap.pop();
        }
    }
    
    double findMedian() {
        if (mxHeap.size()==mnHeap.size())
        {
            return (mxHeap.top()+mnHeap.size())/2.0;
        }
        return mnHeap.top();
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */