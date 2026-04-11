# Singeton
### Khái niệm
* Trong toàn bộ chương trình, chỉ có **1 instance** (1 đối tượng được tạo từ class) của class đó.
* Nó chỉ cần duy nhất 1 object, phải là tài nguyên dùng chung và sẽ lỗi khi nhiều object.
### Ví dụ
1. Máy phát nhạc
> Toàn app chỉ có 1 MusicPlayerManager quản lý phát nhạc (chỉ có 1 bộ điều khiển playback)
2. Logger
> Toàn hệ thống ghi vào 1 file log
* Student module ghi log
* Login module ghi log
* Payment module ghi log
3. GameManager
> Quản lý trạng thái game: score, pause, level
### 4 loại biến thể của singleton
* EagerInitialization
* LazyInitialization
* ThreadSafe (Synchronized)
* DoubleCheckLocking