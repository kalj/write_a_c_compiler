int deref(int *p) {
    return *p;
}

int main() {
    int a = 10;
    int *p = &a;
    return deref(p);
}
