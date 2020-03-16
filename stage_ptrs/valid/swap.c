void swap(int *p1, int *p2) {
    int tmp = *p1;
    *p1 = *p2;
    *p2 = tmp;
}

int main() {
    int a = 1;
    int b = 9;

    swap(&a, &b);

    return a;
}
