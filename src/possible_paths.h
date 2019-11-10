long possiblePathsRecursive(int M, int N) {
    if (M==0 || N==0) {
        return 0;
    }

    if (M+N==2) {
        return 1;
    }

    return possiblePathsRecursive(M-1, N) + possiblePathsRecursive(M, N-1);
}

long possiblePathsIterative(int M, int N) {
    // homework
    long arr[M][N];
    //arr[M][N]=0;
    if(M==0||N==0){//catchall
        return 0;
    }

    for(int i=0;i<M;i++){//width, columns
        for(int j=0;j<N;j++){//height, rows
            if(i==0||j==0) {//fills row or column with 1 path
                arr[i][j] = 1;
            }else{
                arr[i][j]=arr[i-1][j]+arr[i][j-1];//summation of the left and top squares
            }

        }
    }

    return arr[M-1][N-1];
}