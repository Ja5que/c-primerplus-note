class SALES{   
    public:
    // copies the lesser of 4 or n items from the array ar
    // to the sales member of s and computes and stores the
    // average, maximum, and minimum values of the entered items;
    // remaining elements of sales, if any, set to 0
    SALES(const double ar[], int n);
    // gathers sales for 4 quarters interactively, stores them
    // in the sales member of s and computes and stores the
    // average, maximum, and minimum values
    SALES();
    // display all information in structure s
    void showSales();
    private:
    static const int QUARTERS = 4;
    double sales[QUARTERS];
    double average;
    double max;
    double min;
};