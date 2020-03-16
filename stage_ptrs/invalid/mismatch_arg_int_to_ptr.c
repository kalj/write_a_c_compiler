void foo(int *p) {
  *p = 1;
}

int main() {
  int a = 10;
  foo(a);
  return 21;
}
