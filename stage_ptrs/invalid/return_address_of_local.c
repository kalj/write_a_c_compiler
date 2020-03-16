int *foo(int a) {
  return &a;
}

int main() {
  int a = 10;
  int *p = foo(10);
  return foo(p);
}
