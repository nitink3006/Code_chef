int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,c=0;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	        if(arr[i]>=c){
	            c=arr[i];
	        }
	    }
	    cout<<c<<endl;
	}
	return 0;
}




#Question
https://www.codechef.com/submit/DISTINCTCOL?tab=statement
