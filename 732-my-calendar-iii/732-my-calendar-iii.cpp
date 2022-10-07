class MyCalendarThree {
public:
    map<int, int> time;
    int k, ongoing;
    
	MyCalendarThree() {}
    int book(int start, int end) 
    {
        time[start]++;                       
        time[end]--;
        
        k = 0, ongoing = 0;                   
        for(auto i: time)
            k = max(k, ongoing += i.second);  
        
        return k;
    }
};

/**
 * Your MyCalendarThree object will be instantiated and called as such:
 * MyCalendarThree* obj = new MyCalendarThree();
 * int param_1 = obj->book(start,end);
 */