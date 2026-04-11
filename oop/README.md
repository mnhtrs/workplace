# Mục lục
* [Từ khoá `static`](#Từ-khoá-static)
* [Con trỏ (`*`) và địa chỉ (`&`)](#Note-từ-bài-1)

### Kiến thức nền tảng

#### Từ khoá static
* Định nghĩa: chỉ khởi tạo 1 lần duy nhất trong suốt chương trình

1. Không có static
```cpp
void test() {
    int x = 0;
    x++;
    cout << x << endl;
}
```
> Output (Mỗi lần gọi tạo lại biến):
```
test(); // 1
test(); // 1
test(); // 1
```

2. Có static
```cpp
void test() {
    static int x = 0;
    x++;
    cout << x << endl;
}
```
> Output (Mỗi lần gọi tạo lại biến):
```
test(); // 1
test(); // 2
test(); // 3
```
3. Static trong class
```cpp
class Mthw {
public:
    static int x;
};
```
> `x`: thuộc mọi class và **mọi object dùng chung**

4. Static trong hàm
* Nó được khởi tạo lần đầu khi gọi hàm và chỉ tồn tại 1 lần duy nhất (những lần gọi sau không tạo lại biến static)
* Nó chỉ chỉ truy cập được qua hàm đó

#### Note từ bài 1
* `&a` lấy địa chỉ biến `a`
* `PhanSo& ps`(alias): chỉ đọc `ps` (reference)
> `&reference` tạo ra pointer
* `*a` lấy giá trị mà biến `a` trỏ đến (pointer)
* `int *a`: Khai báo con trỏ
```cpp
int a = 10;
int* p = &a; // p trỏ tới biến a
cout << p;   // địa chỉ của a
cout << *p;  // 10 (giá trị của a)
```
* `this` là **địa chỉ** của object hiện tại (Datatype `PhanSo*`)
* `*this` chính là object hiện tại