class Plorg{
    private:
        char name[20];
        int CI;
    public:
        Plorg(const char * n = "Plorga", int ci = 50);
        void setCI(int ci);
        void show() const;
};
