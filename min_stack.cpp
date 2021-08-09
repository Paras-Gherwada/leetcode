class MinStack {
public:
    /** initialize your data structure here. */
    MinStack() {

    }
    
    void push(int x) {
        size++;
        arr.push_back(x);
    }
    
    void pop() {
        arr.erase(arr.begin() + (size - 1));
        arr.resize(size - 1);
        size--;
    }
    
    int top() {
        return arr[size - 1];
    }
    
    int getMin() {
        return (*min_element(arr.begin(), arr.end()));
    }
private:
    int size = 0;
    vector<int> arr;
};
