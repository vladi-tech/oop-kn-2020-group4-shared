class String {
    char* str;
    size_t cap;

    size_t length_of(const char*) const;
    void copy(const char*);
    friend std::istream& operator >> (std::istream& , String&);
    friend std::ostream& operator << (std::ostream& , const String&);

    public:

    String();
    String(const String&);
    String(const char*);
    String& operator = (const String&);
    ~String();
    void resize(size_t);
    void push(const char&);
    size_t size() const;
    size_t capacity() const;
    bool empty() const;
    char& at(size_t);
    const char& at(size_t) const;
    char& front();
    const char& front() const;
    char& back();
    const char& back() const;
    String& append(const String&);
    char* c_str();
    void shrink_to_fit();
    void resize(size_t, const char&);
    String operator + (const String&);
    String& operator += (const String&);
    char& operator[] (size_t);
    const char& operator[] (size_t) const;
    operator bool () const;
};