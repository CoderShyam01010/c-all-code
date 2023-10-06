while (i != (rear + 1) % N) {
        printf("%d ", deque[i]);
        i = (i + 1) % N;
    }