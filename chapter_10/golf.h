class golf {
    public:
    // non-interactive version:
    // function sets golf structure to provided name, handicap
    // using values passed as arguments to the function
    golf(const char* name, int hc);

    // interactive version:
    // function solicits name and handicap from user
    // and sets the members of g to the values entered
    // returns 1 if name is entered, 0 if name is empty string
    golf();

    // function resets handicap to new value
    void sethandicap(int hc);

    // function displays contents of golf structure
    void showgolf();

    // Path: chapter_9\golf.cpp
    // Compare this snippet from chapter_8\7.cpp:
    private:
    static const int len = 40;
    char fullname[len];
    int handicap;
};