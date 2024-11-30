import unittest
import functions_game_1

class Test_Player(unittest.TestCase, functions_game_1.Player):
    def test_list(self):
        person_a = functions_game_1.Player()
        self.assertEqual(person_a.hand, [])

    # def test_str__(self):
    #     person_a = functions_game_1.Player()
    #     self.assertEqual(person_a, f"{person_a.hand}")

if __name__ == "__main__":
    unittest.main()