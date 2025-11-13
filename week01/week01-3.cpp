//week01-3.cpp
#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int ans = 0;
	for(int i=1; i<=n; i++)
	{
		ans += i*i;
	}
	cout << ans;
}

//week01-3c.cpp
#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	int ans = 0;
	for(int i=1; i<=n; i++)
	{
		ans += i*i;
	}
	printf("%d", ans);
}