Node **fibo(int n) {
    Node *sequence[n+1];
    Node *zero = (*makeFunc(MUL))(5, 0);
    Node *one = (*makeFunc(ADD))(1, 0);
    sequence[0] = zero;
    sequence[1] = one;
    for (int i = 2; i <= n; i++) {
        Node *add = (*makeFunc(ADD, sequence[i-1], sequence[i-2]));
        sequence[i] = add;
    }
    return sequence;
}

