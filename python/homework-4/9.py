class Date:
    def __init__(self, day, month, year):
        self.day = day
        self.month = month
        self.year = year

    def is_leap_year(self):
        if self.year % 4 != 0:
            return False
        elif self.year % 100 != 0:
            return True
        elif self.year % 400 != 0:
            return False
        else:
            return True

    def increase_date(self):
        days_in_month = [31, 29 if self.is_leap_year() else 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]
        self.day += 3
        if self.day > days_in_month[self.month - 1]:
            self.day -= days_in_month[self.month - 1]
            self.month += 1
            if self.month > 12:
                self.month = 1
                self.year += 1

    def __str__(self):
        return f"Date: {self.day}/{self.month}/{self.year}"

    def __del__(self):
        print("Date object has been deleted")

# test
import unittest

class TestDate(unittest.TestCase):
    def setUp(self):
        self.date = Date(28, 2, 2020)

    def test_is_leap_year(self):
        self.assertTrue(self.date.is_leap_year())

    def test_increase_date(self):
        self.date.increase_date()
        self.assertEqual(self.date.day, 2)
        self.assertEqual(self.date.month, 3)

    def test_str(self):
        self.assertEqual(str(self.date), "Date: 28/2/2020")

if __name__ == "__main__":
    unittest.main()