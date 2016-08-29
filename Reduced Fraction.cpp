std::vector<int> fractionSum(std::vector<int> A, std::vector<int> B) {

  struct Helper {
    int gcdEuclid(int a, int b) {
      if (a == 0) {
        return b;
      }
      return gcdEuclid(b % a, a);
    }
  };
  Helper h;

  std::vector<int> C(2);
  C[0] = A[0] * B[1] + A[1] * B[0], C[1] = A[0] * B[0];
  int gcd = h.gcdEuclid(C[0], C[1]);

  C[0] /= gcd;
  C[1] /= gcd;

  return C;
}
