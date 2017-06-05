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

    //operator overload
    friend ostream& operator<<(ostream& os, const Date& dt)
    {
        os << dt.getDay() << '.' << dt.getMonth() << '.' << dt.getYear();
        return os;
    }

    friend bool operator==(const Date& left, const Date& right)
    {
        return left.getDay() == right.getDay() &&
            left.getMonth() == right.getMonth() &&
            left.getYear() == left.getYear();
    }

    friend bool operator!=(const Date& left, const Date& right)
    {
        return !(left == right);
    }

    ~Date() {}
};
