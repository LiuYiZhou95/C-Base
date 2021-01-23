[toc]

### range-based for statement

```c++
/**
* 基于范围的for循环语句
**/
for(decl:coll)
{
	statement  
}

for (int i:{1,2,3,4,5})
{
  cout<<i<<endl;
}
```

​		需要注意的是，在这里有一个小的技巧点，由于遍历的是容器，所以取出来的值可以是引用，也可以是值。

​		尽量是使用引用auto&（除了关联式容器之外set/map等），取值的话每取出一次都要进行赋值操作。

```C++
vector<double>vec;
...
//取值
for(auto elem:vec)
{
  cout<<elem<<endl;
}
//引用
for(auto& elem:vec)
{
  elem*=3;
}
```

