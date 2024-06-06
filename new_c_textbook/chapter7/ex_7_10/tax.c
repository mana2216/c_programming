extern double rate;

int tax(int price) {
  return price * rate / 100.0;
}