# 算法
---
##什么是算法
算法为一个计算的具体步骤，常用于计算、数据处理和自动推理。精确而言，算法是一个表示为有限长列表的有效方法。算法应包含清晰定义的指令用于计算函数。算法中的指令描述的是一个计算，当其运行时能从一个初始状态和初始输入开始，经过一系列有限而清晰定义的状态最终产生输出，并停止于一个终态。一个状态到另一个状态的转移不一定是确定的。随机化算法在内的一些算法，包含了一些随机输入。形式化算法的概念部分源自尝试解决希尔伯特提出的判定问题，并在其后尝试定义有效计算性或者有效方法中成形。

##性能分析
+ 度量的方法
+ 时间、空间复杂度
+ 最好、最坏、平均情况
+ *渐进记号($O$,$\Omega$,$\Theta$)

##实例分析
+ 冒泡分析

```cpp
using namespace std;
template<typename T>
void sort(T arr[],int len)
{
	int i,j,found;
	for(i=0;i<len;i++){
		found = 0;
		for(j=i;j<len-1;j++)
			if(arr[j]>arr[j+1])
			{
				found = 1;
				swap(arr[j],arr[j+1]);
			}
		if(found==0)
			break;
	}
}
```
+ 插入排序
```cpp

template<typename T>
void sort(T arr[],int len)
{
	int i,j,i1,temp;
	for(i=1;i<len;i++)
	{
	for(i1=0;i1<len;i1++)
		temp = arr[i];
		for(j=i-1;j>=0 &&temp>arr[j];j--){
			arr[j+1] = arr[j];
		}
		arr[j+1] = temp;
	}
}
```
+ *归并排序
  

```cpp
template<typename T> 
void sort(T arr[],T arr2[],int first,int mid,int last){
	int i = first;
	int j = mid+1;
	int m = mid;
	int n = last;
	int k = 0;
	while(i<=m&&j<=n){
		if(arr[i]<=arr[j]){
			arr2[k++] = arr[i++];
		}
		else{
			arr2[k++] = arr[j++];
		}
	}
	while(i<=m){
		arr2[k++] = arr[i++];
	}
	while(j<=n){
		arr2[k++] = arr[j++];
	}
	for(i=0;i<k;i++)
		arr[first+i] = arr2[i];
}
template<typename T>
void sort(T arr[],T arr2[],int first,int last){
	if(first<last){
		int mid = (first+last)/2;
		sort(arr,arr2,first,mid);
		sort(arr,arr2,mid+1,last);
		sort(arr,arr2,first,mid,last);
	}
}
template<typename T>
void sort(T arr[],int len){
	int *p = new int[len];
	sort(arr,p,0,len-1);
	delete[] p;
}
```
