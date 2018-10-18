#include <iostream>
#include <cstdio>
#include <algorithm>
#define  MAX_SIZE 100
using namespace std;
struct  Activity{
    int id, start, finish;


}activities[MAX_SIZE];


bool comp(Activity a1, Activity a2){


    return  a1.finish < a2.finish;


}

int activitySelection(int m, int n, int last){
	
	if(m==n) return 0;
	
	if(activities[m].start >= last){
		
		last = activities[m].finish;
		
		printf("Activiti %d selected \n", m+1);
	
		return 1+ activitySelection(m+1, n, last);
	}
	
	else{
		
		return activitySelection(m+1, n, last);
		}
	
	}


int main() {
    freopen("input.txt","r",stdin);

    int  n;

    scanf("%d", &n);
    cout<<n<<endl;

    for (int i = 0; i <n ; i++) {

        scanf("%d%d%d", &activities[i].id, &activities[i].start, &activities[i].finish);

    }
    
    sort(activities,activities+n, comp);
    
    
    cout<<activitySelection(0,6,-1);
    

    for (int i = 0; i <n ; i++) {

        printf("%d %d %d\n", activities[i].id,activities[i].start,activities[i].finish);

    }




    return 0;
}
