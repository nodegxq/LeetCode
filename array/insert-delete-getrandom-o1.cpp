class RandomizedSet {

private:
    std::vector<int> nums; // to store the elements
    std::unordered_map<int, int> valToIndex; // maps value to its index in nums

public:
    RandomizedSet() {}

    bool insert(int val) {

        // Already exists, don't insert
        if (valToIndex.count(val)){
            return false;
        }

        nums.push_back(val);   // Add to vector
        valToIndex[val] = nums.size() - 1;   // Map value to its index

        return true;
    }

    bool remove(int val) {
        if (!valToIndex.count(val)){
            return false;
        }

        int index = valToIndex[val];   // index of the element to remove
        int lastElement = nums.back();   // get the last element in the vector

        // Move last element to the position of the element to remove
        nums[index] = lastElement;
        valToIndex[lastElement] = index;

        // Remove last element from vector and erase from map
        nums.pop_back();
        valToIndex.erase(val);

        return true;
    }

    int getRandom() {
        int randIndex = rand() % nums.size();   // get random index
        return nums[randIndex];   // return the value at that index
    }
};


/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */