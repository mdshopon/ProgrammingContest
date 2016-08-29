bool palindromeRearranging(std::string inputString) {

  std::vector<int> count(26, 0);
  for (int i = 0; i < (int)inputString.size(); i++) {
    count[inputString[i] - 'a']++;
  }

  int odds = 0;
  for (int i = 0; i < 26; i++) {
    if (count[i] % 2 == 1) {
      odds++;
    }
  }
  return odds % 2 == (int)inputString.size() % 2;
}
