class Date
{
private:
    int day;
    int month;
    int year;

public:
    Date() {}
    Date(int day, int month, int year) { this->day = day; this->month = month; this->year = year; }

    //getters
    int getDay() const { return this->day; }
    int getMonth() const { return this->month; }
    int getYear() const { return this->year; }

    ~Date() {}
};
