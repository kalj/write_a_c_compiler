int foo(int arr[]) {

    arr[2] = 10;

    return 1;
}

int main() {
    int array[4] = { 1,2,3,4};

    array[0] = foo(array);

    return array[2];
}
