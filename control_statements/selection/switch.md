# C++ Switch Statements

Syntax:

```cpp
switch(expression) {
  case x:
    // code block
    break;
  case y:
    // code block
    break;
  default:
    // Default code block
}
```

This is very similar to C's as well as R's switch statement:

* The switch `expression` is evaluated once
* The value of the `expression` is compared with the values of each case
* If there is a match, the associated block of code is executed
* The break and default keywords are optional

## The break Keyword

When C++ reaches a `break` keyword, it breaks out of the switch block. This will stop the execution of more code and case testing inside the block. When a match is found and the job is done, it's time for a break. There is no need for more testing. A performance note is that using `break` can save a lot of execution time because it "ignores" the execution of all the rest of the code in the switch block once a case is matched.

## Example

```cpp
int day = 4;
switch (day) {
  case 1:
    cout << "Monday";
    break;
  case 2:
    cout << "Tuesday";
    break;
  case 3:
    cout << "Wednesday";
    break;
  case 4:
    cout << "Thursday";
    break;
  case 5:
    cout << "Friday";
    break;
  case 6:
    cout << "Saturday";
    break;
  case 7:
    cout << "Sunday";
    break;
}
// Outputs "Thursday" (day 4)
```

## The default Keyword

The `default` keyword specifies the code block to run if there is no case match. The `default` keyword **must** be used as the last statement in the switch, and it does not need a break:

```cpp
int day = 4;
switch (day) {
  case 6:
    cout << "Today is Saturday";
    break;
  case 7:
    cout << "Today is Sunday";
    break;
  default:
    cout << "Looking forward to the Weekend";
}
// Outputs "Looking forward to the Weekend"
```


