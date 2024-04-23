import unittest
import work_three as program

class TestSqrtNthRoot(unittest.TestCase):
    def test_case1(self):
        result = program.sqrt_nth_root(21, 0.5, 3)
        self.assertAlmostEqual(result, 2.75892417638112, places=5)

    def test_case2(self):
        result = program.sqrt_nth_root(99, 0.7, 3)
        self.assertAlmostEqual(result, 4.641588833612778, places=5)

if __name__ == '__main__':
    unittest.main()