void twice(int *p) {
    *p *= 2;
}

int main() {
    int a = 3;
    twice(&a);

    return a;
}
