class TimeMap {
public:
    unordered_map<string, map<int,string>>mapa;

    TimeMap() {

    }
    
    void set(string key, string value, int timestamp) {
        mapa[key].insert({timestamp,value});
    }
    
    string get(string key, int timestamp) {
        auto it = mapa[key].upper_bound(timestamp);

        return it==mapa[key].begin() ? "" : prev(it)->second;
    }
};
