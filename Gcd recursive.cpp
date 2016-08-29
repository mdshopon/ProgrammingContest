int gcd(int x, int y) {
    if (y == 0) {
        return x;
    } else if (x >= y && y > 0) {
        return gcd(y, (x % y));
    }
}
