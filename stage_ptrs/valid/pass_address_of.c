int deref(int *p) {
    return *p;
}

int main() {
    int a = 10;
    return deref(&a);
}
