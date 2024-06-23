#include "date.h"

date::date(int d, int m, int y)
{
	day = (d >= 1 && d <= 31) ? d : 1;
	month = m >= 1 && m <= 12 ? d : 1;
	year = y >= 1 ? y : 2024;
}

int date::get_year() const
{
	return year;
}

int date::get_month() const
{
	return month;
}

int date::get_day() const
{
	return day;
}
