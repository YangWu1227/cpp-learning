# Short-hand for simple if else

The `if else` choice statements have a short-hand, which is known as the "ternary operator". This is because it consists of three operands. This short-hand can be used to replace multiple lines of code with a single line. It is often used to replace simple if else statements:

```cpp
variable = (condition) ? expressionTrue : expressionFalse;
```

## Example

Instead of writing:

```cpp
int var = 12;
if (var < 18) {
  cout << "case 1";
} else {
  cout << "case 2";
}
```

We could write:

```cpp
int var = 12;
string result = (var < 18) ? "case 1" : "case 2";
cout << result;
```
