## Thuật toán: Duyệt mảng - Chuyển các số 0 về cuối

Chương trình sử dụng phương pháp **Duyệt mảng - Chuyển các số 0 về cuối** để gom các phần tử khác `0` lên đầu mảng, sau đó đưa các số `0` về cuối. Thứ tự ban đầu của các phần tử khác `0` được giữ nguyên.

### 1. Cấu trúc dữ liệu lưu trữ

- Mảng `A[1000]`: Lưu mảng đầu vào và kết quả sau khi di chuyển. Biến `n` lưu số phần tử.
- Biến `k`: Chỉ vị trí sẽ ghi phần tử khác `0` tiếp theo, khởi tạo bằng `0`.
- Biến `i`: Duyệt các phần tử theo thứ tự từ trái sang phải.
- Hàm `inmang()`: In mảng sau khi xử lý.

### 2. Quá trình gom phần tử khác 0

- Bước 1: Đặt `k=0`, bắt đầu duyệt mảng từ trái sang phải.
- Bước 2: Nếu `A[i]!=0`, ghi giá trị này vào `A[k]` rồi tăng `k`.
- Bước 3: Nếu `A[i]==0`, bỏ qua và tiếp tục xét phần tử sau.
- Bước 4: Khi duyệt hết, đoạn từ `0` đến `k-1` đã chứa đủ các phần tử khác `0`. Gán `0` vào các vị trí từ `k` đến `n-1`.
- Bước 5: In mảng kết quả. Vì ghi theo thứ tự duyệt nên các phần tử khác `0` không bị đảo thứ tự.

*Trong khi duyệt luôn có k&lt;=i nên việc ghi A[k] không làm mất phần tử chưa xét. Các số khác 0 được ghi theo đúng thứ tự gặp ban đầu. Phần còn lại được điền 0 nên kết quả đúng yêu cầu.*

### 3. Minh họa quá trình thực hiện

Với [0, 3, 0, -2, 5, 0], ba số khác 0 được ghi lần lượt vào đầu mảng là [3, -2, 5]. Điền ba số 0 còn lại được [3, -2, 5, 0, 0, 0].

### 4. Dữ liệu kiểm thử

Đầu vào gồm n và n phần tử. Đầu ra là mảng sau khi chuyển số 0, trên một dòng.

**Điều kiện:** `1<=n<=1000`; `-1000000<=A[i]<=1000000`.

| Test | Đầu vào | Đầu ra | Mục đích kiểm tra |
| --- | --- | --- | --- |
| 01 | `6`<br>`0 3 0 -2 5 0` | `3 -2 5 0 0 0` | Số 0 xen kẽ, giữ thứ tự 3, -2, 5. |
| 02 | `3`<br>`0 0 0` | `0 0 0` | Toàn số 0. |
| 03 | `3`<br>`3 -1 2` | `3 -1 2` | Không có số 0, giữ nguyên mảng. |
| 04 | `4`<br>`1 2 0 0` | `1 2 0 0` | Số 0 đã ở cuối. |
| 05 | `1`<br>`0` | `0` | Một số 0 duy nhất. |


---

### Độ phức tạp thuật toán (Complexity)

- **Độ phức tạp thời gian (Time Complexity):** `O(n)`.
  *(Duyệt mảng một lần để gom phần tử, sau đó điền 0 vào đoạn cuối.)*
- **Độ phức tạp không gian (Space Complexity):** `O(1)` bộ nhớ phụ.
  *(Không tính mảng đầu vào `A`; chương trình chỉ dùng thêm một số biến.)*

**Mã nguồn:** [06_chuyen_0_ve_cuoi.cpp](./06_chuyen_0_ve_cuoi.cpp).

**Bài tập tham khảo:** [Mục Array số 18](https://github.com/bollwarm/DataStructuresAlgorithms#array) - [Đề bài gốc](https://www.techiedelight.com/move-zeros-present-array-end/).
