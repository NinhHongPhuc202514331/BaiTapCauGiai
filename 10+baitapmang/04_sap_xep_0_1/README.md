## Thuật toán: Đếm số phần tử - Sắp xếp mảng 0 và 1

Chương trình sử dụng phương pháp **Đếm số phần tử - Sắp xếp mảng 0 và 1** để sắp xếp mảng chỉ gồm hai giá trị `0` và `1`, đưa tất cả số `0` về trước các số `1`.

### 1. Cấu trúc dữ liệu lưu trữ

- Mảng `A[1000]`: Lưu mảng đầu vào chỉ chứa `0` và `1`. Biến `n` lưu số phần tử.
- Biến `dem0`: Đếm số phần tử bằng `0`, được khởi tạo bằng `0`.
- Hàm `inmang()`: In mảng sau khi ghi lại các giá trị theo thứ tự.

### 2. Quá trình đếm và ghi lại mảng

- Bước 1: Đặt `dem0=0`, sau đó duyệt toàn bộ mảng.
- Bước 2: Mỗi khi gặp `A[i]==0`, tăng `dem0` lên một đơn vị.
- Bước 3: Duyệt lại mảng. Với các vị trí `i<dem0`, gán `A[i]=0`.
- Bước 4: Tại các vị trí còn lại, gán `A[i]=1` vì đầu vào chỉ có hai giá trị.
- Bước 5: Gọi `inmang()` để in kết quả. Không cần so sánh từng cặp phần tử.

*Có đúng dem0 số 0 nên dem0 vị trí đầu được điền 0. Những phần tử còn lại ban đầu đều là 1, vì vậy điền 1 vào n-dem0 vị trí cuối giữ nguyên số lượng và tạo thứ tự tăng dần.*

### 3. Minh họa quá trình thực hiện

Với [1, 0, 1, 0, 0], đếm được dem0=3. Điền 0 vào ba vị trí đầu và 1 vào hai vị trí cuối, được [0, 0, 0, 1, 1].

### 4. Dữ liệu kiểm thử

Đầu vào gồm n và n giá trị thuộc {0, 1}. Đầu ra là mảng đã sắp xếp trên một dòng.

**Điều kiện:** `1<=n<=1000`; phần tử chỉ nhận `0` hoặc `1`.

| Test | Đầu vào | Đầu ra | Mục đích kiểm tra |
| --- | --- | --- | --- |
| 01 | `5`<br>`1 0 1 0 0` | `0 0 0 1 1` | Hai giá trị xuất hiện xen kẽ. |
| 02 | `4`<br>`0 0 0 0` | `0 0 0 0` | Toàn bộ là 0. |
| 03 | `3`<br>`1 1 1` | `1 1 1` | Không có số 0. |
| 04 | `4`<br>`0 0 1 1` | `0 0 1 1` | Mảng đã đúng thứ tự. |
| 05 | `1`<br>`1` | `1` | Một phần tử. |


---

### Độ phức tạp thuật toán (Complexity)

- **Độ phức tạp thời gian (Time Complexity):** `O(n)`.
  *(Một lượt đếm số 0 và một lượt ghi lại mảng.)*
- **Độ phức tạp không gian (Space Complexity):** `O(1)` bộ nhớ phụ.
  *(Không tính mảng đầu vào `A`; chương trình chỉ dùng thêm một số biến.)*

**Mã nguồn:** [04_sap_xep_0_1.cpp](./04_sap_xep_0_1.cpp).

**Bài tập tham khảo:** [Mục Array số 4](https://github.com/bollwarm/DataStructuresAlgorithms#array) - [Đề bài gốc](https://www.techiedelight.com/sort-binary-array-linear-time/).
