class MapSum {
public:
    /** Initialize your data structure here. */    
    void insert(string key, int val) {
        mp[key] = val;
    }
    
    int sum(string prefix) {
        int sum = 0, n = prefix.size();
        for (auto it = mp.lower_bound(prefix); it != mp.end() && it->first.substr(0, n) == prefix; it++) 
            sum += it->second;
        return sum;
    }
private:
    map<string, int> mp;
};


/**
 * Your MapSum object will be instantiated and called as such:
 * MapSum obj = new MapSum();
 * obj.insert(key,val);
 * int param_2 = obj.sum(prefix);
 */