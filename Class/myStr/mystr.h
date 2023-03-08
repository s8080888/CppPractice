class str
{
    public:
        str();
        ~str();
        void append(char c);
        void append(char c[]);
        
        const char* cstr() const;
        int len() const; 

    private:
        unsigned int m_len;
        unsigned int m_capacity;
        char* m_str;
};
