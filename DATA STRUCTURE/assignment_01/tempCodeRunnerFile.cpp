  long long int n;
       cin>>n;
       vector<int> a(n);
       for(int i=0; i<n; i++)
       {
        cin>>a[i];
       }
 
   long long int pre[n];
    
    pre[0] = a[0];
    for(int i=1; i<n; i++)
    {
        pre[i] = a[i] + pre[i-1];
    }
   reverse(pre, pre + n);
    //reverse(a.end(),a.begin());
    for(int i=0; i<n; i++)
    {
        cout<<pre[i] << " ";
    }