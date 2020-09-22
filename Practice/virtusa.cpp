
Arrays.sort(input2);
int count=0;
for(int i=0;i<input1-1;i++){
	count+=Maths.abs(input2[i]-input2[i+1]);
}
return count;

int count=0;
for(int i=0;i<input1.length()-2;){
	if(input1.charAt(i)=='1'&&input.charAt(i+1)=='2'&&input.charAt(i+1)=='3'){
		count++,i+=3;
	}
	else{
		i++;
	}
}
return count;

int t=0,m=11
for(int i=1;i<=k;i++){
	ncr()
}


//aryan
int [] c=new int[100000];
for(int i=0;i<100000;i++){
	 c[i]=0;
}
for(int i=0;i<input1;i++){
	int count=0;
	while(input2[i]>0){
		if(input2[i]&1) count++;
		input2[i]=input2[i]>>1;
	}
	c[count]++;
}
int ans=0;
for(int i=0;i<100000;i++){
	ans+=(c[i]/2);
}
return ans;


//aryan 2
int [] c=new int[input1+1];
for(int i=0;i<=input1;i++){
	 c[i]=0;
}
for(int i=0;i<input1;i++){
	if(input2[i]<=input1){
		c[input2[i]]=1;
	}
}
int count=0;
for(int i=1;i<=input1;i++){
	if(c[i]==0) count++;
}
return count;


//piyush
int right=-1,count=0;
for(int i=0;i<input1;i++){
	if(right<input2[0][i]) count++;
	right=Math.max(right,input2[1][i]);
}
return count;


Map m=new HashMap();
for(int i=0;i<input1;i++){
	m.put(s[0][i],s[1][i]);
}
m.put(100000,1);
Set set=m.entrySet(); 
Iterator itr=set.iterator(),itr2=set.iterator();
while(itr.hasNext()){
    Map.Entry entry=(Map.Entry)itr.next();  
    System.out.println(entry.getKey()+" "+entry.getValue());  
} 












