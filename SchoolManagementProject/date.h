#pragma once

class date
{
private:
	int day;
	int year;
	int month;

public:
	date(int = 1, int = 1, int = 2024);
	int get_year() const;
	int get_month() const;
	int get_day() const;

};