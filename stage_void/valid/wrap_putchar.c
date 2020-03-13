int putchar(int c);

void print_char_newline(int c) {
    putchar(c);
    putchar(10);
}

int main() {

    print_char_newline(65);

    return 0;
}
