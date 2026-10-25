## Thuật toán: Duyệt mảng - Tìm chỉ số cân bằng

Chương trình sử dụng phương pháp **Duyệt mảng - Tìm chỉ số cân bằng** để tìm tất cả vị trí có tổng các phần tử bên trái bằng tổng các phần tử bên phải. Giá trị tại vị trí đang xét không được tính vào hai tổng.

### 1. Cấu trúc dữ liệu lưu trữ

- Mảng `A[1000]`: Lưu các phần tử đầu vào. Biến `n` lưu số phần tử.
- Biến `tong` kiểu `long long`: Lưu tổng toàn bộ mảng.
- Biến `trai` kiểu `long long`: Lưu tổng các phần tử đứng trước vị trí `i`, khởi tạo bằng `0`.
- Biến `phai` kiểu `long long`: Lưu tổng bên phải, được tính bằng `tong-trai-A[i]`.
- Biến `co`: Ghi nhận đã tìm thấy chỉ số cân bằng hay chưa, đồng thời điều khiển dấu cách khi in.

### 2. Quá trình so sánh hai tổng

- Bước 1: Duyệt mảng để tính tổng `tong`, đồng thời khởi tạo `trai=0` và `co=false`.
- Bước 2: Duyệt lại từng vị trí `i`, tính `phai=tong-trai-A[i]`.
- Bước 3: Nếu `trai==phai`, in chỉ số `i`. Nếu đã có kết quả trước đó thì in một dấu cách trước chỉ số mới.
- Bước 4: Đặt `co=true` khi tìm thấy kết quả. Sau khi kiểm tra vị trí `i`, mới cộng `A[i]` vào `trai`.
- Bước 5: Nếu duyệt hết mà `co` vẫn bằng `false`, in `-1`. Tổng của một phía rỗng được xem là `0`.

*Trước khi kiểm tra vị trí i, trai chính là tổng A[0..i-1]. Do tong chứa mọi phần tử, phai=tong-trai-A[i] là tổng A[i+1..n-1]. So sánh hai biến vì vậy kiểm tra đúng định nghĩa cân bằng.*

### 3. Minh họa quá trình thực hiện

Với [-7, 1, 5, 2, -4, 3, 0], tổng toàn mảng bằng 0. Ở i=3, tổng trái=-1 và tổng phải=-1. Ở i=6, hai tổng đều bằng 0. Kết quả là 3 6.

### 4. Dữ liệu kiểm thử

Đầu vào gồm n và n phần tử. Đầu ra là các chỉ số cân bằng tăng dần, đánh số từ 0, trên một dòng; không có thì in -1. Tổng của phía không có phần tử được tính là 0.

**Điều kiện:** `1<=n<=1000`; `-1000000<=A[i]<=1000000`.

| Test | Đầu vào | Đầu ra | Mục đích kiểm tra |
| --- | --- | --- | --- |
| 01 | `7`<br>`-7 1 5 2 -4 3 0` | `3 6` | Có nhiều chỉ số cân bằng, kể cả ở cuối. |
| 02 | `3`<br>`1 2 3` | `-1` | Không có chỉ số cân bằng. |
| 03 | `3`<br>`0 0 0` | `0 1 2` | Mọi vị trí đều cân bằng. |
| 04 | `1`<br>`9` | `0` | Mảng một phần tử, hai phía đều rỗng. |
| 05 | `3`<br>`5 -2 2` | `0` | Chỉ số đầu là chỉ số cân bằng. |


---

### Độ phức tạp thuật toán (Complexity)

- **Độ phức tạp thời gian (Time Complexity):** `O(n)`.
  *(Một lần tính tổng toàn mảng và một lần kiểm tra các chỉ số.)*
- **Độ phức tạp không gian (Space Complexity):** `O(1)` bộ nhớ phụ.
  *(Không tính mảng đầu vào `A`; chương trình chỉ dùng thêm một số biến.)*

**Mã nguồn:** [10_chi_so_can_bang.cpp](./10_chi_so_can_bang.cpp).

**Bài tập tham khảo:** [Mục Array số 16](https://github.com/bollwarm/DataStructuresAlgorithms#array) - [Đề bài gốc](https://www.techiedelight.com/find-equilibrium-index-array/).
