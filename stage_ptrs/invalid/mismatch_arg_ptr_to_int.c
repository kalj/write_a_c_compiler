int foo(int a) {
  return a+1;
}

int main() {
  int a = 10;
  int *p = &a;
  return foo(p);
}
