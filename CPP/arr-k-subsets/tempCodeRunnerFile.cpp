
    public:
    long long int minSum(int arr[], int n)
    {
        // if(n%2==1) arr[n]=0;
        sort(arr, arr+n, greater<int>());
        // for(int i=0; i<n; i++){
        
        //     cout << arr[i] << " ";
        // }
        // cout << endl;
        
        long long int ans = 0;