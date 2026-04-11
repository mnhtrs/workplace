### 23 design patterns nền tảng:

#### Nhóm khởi tạo (Creational Patterns - 5)
> Giải quyết cách tạo object linh hoạt hơn (không hard-code)
1. Singleton **(*)**
2. Factory Method **(*)**
3. Abstract Factory
4. Builder **(*)**
5. Prototype
__**Sử dụng khi:**__
* Muốn kiểm soát việc tạo object
* Giảm coupling giữa class và cách khởi tạo

#### Nhóm cấu trúc (Structural Patterns – 7)
> Giúp tổ chức class/object để dễ mở rộng và tái sử dụng
6. Adapter **(*)**
7. Bridge
8. Composite
9. Decorator **(*)**
10. Facade **(*)**
11. Flyweight
12. Proxy
__**Sử dụng khi:**__
* Muốn kết hợp nhiều class lại mà không phá structure
* Làm code linh hoạt, dễ thay đổi

#### Nhóm hành vi (Behavioral Patterns – 11)
> Xử lý cách các object giao tiếp với nhau.
13. Chain of Responsibility
14. Command **(*)**
15. Interpreter
16. Iterator
17. Mediator
18. Memento
19. Observer **(*)**
20. State **(*)**
21. Strategy **(*)**
22. Template Method
23. Visitor
__**Sử dụng khi:**__
* Muốn tách logic xử lý
* Giảm dependency giữa các object

### Một số pattern phổ biến mở rộng
* MVC (Model - View - Controller)
* MVP / MVVM
* Repository
* Dependency Injection
* Unit of Work
* Service Locator

### Patern trong từng domain
* Game dev: Entity Component System (ECS)
* Backend: CQRS, Event Sourcing
* Frontend: Flux, Redux pattern

### Nguồn tài liệu tham khảo
* [What's the best way to learn Design Patterns?](https://www.reddit.com/r/softwaredevelopment/comments/iwvmak/whats_the_best_way_to_learn_design_patterns/)