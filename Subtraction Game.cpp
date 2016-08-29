bool subtractionGame(int n)
{

  struct Helper {
    bool checkFirstWins(int n, int move) {
      if (n <= 0) {
        return true;
      }
      for (int i = 0; i <= move; i++) {
        if (!checkFirstWins(n - i, move + 1)) {
          return true;
        }
      }
      return false;
    }
  };

  Helper h;
  return h.checkFirstWins(n, 1);
}
