template<typename T>
class SharedPtr {
    T* ptr_;
    int* ref_count;
public:
    explicit SharedPtr(T* ptr = nullptr);
    SharedPtr(const SharedPtr& other) {
        
    }
private:
    void release();
};