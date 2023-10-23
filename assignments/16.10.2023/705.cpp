class MyHashSet {
private:
    std::vector<bool> data;

public:
    MyHashSet() {
        data.resize(1000001, false); 

    void add(int key) {
        if (key >= 0 && key < data.size()) {
            data[key] = true;
        }
    }

    void remove(int key) {
        if (key >= 0 && key < data.size()) {
            data[key] = false;
        }
    }

    bool contains(int key) {
        if (key >= 0 && key < data.size()) {
            return data[key];
        }
        return false;
    }
};