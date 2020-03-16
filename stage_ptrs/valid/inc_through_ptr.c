int main() {
    int a = 13;
    int *p = &a;
    (*p)++;
    return a;
}
