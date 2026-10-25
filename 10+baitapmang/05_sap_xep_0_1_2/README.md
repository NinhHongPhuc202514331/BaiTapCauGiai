## Thuật toán: Đếm số phần tử - Sắp xếp mảng 0 1 và 2

Chương trình sử dụng phương pháp **Đếm số phần tử - Sắp xếp mảng 0 1 và 2** để sắp xếp mảng chỉ chứa `0`, `1`, `2` theo thứ tự tăng dần. Cách cài đặt đếm số lượng rồi ghi lại mảng bằng hai lượt duyệt.

### 1. Cấu trúc dữ liệu lưu trữ

- Mảng `A[1000]`: Lưu mảng đầu vào chỉ chứa `0`, `1`, `2`. Biến `n` lưu số phần tử.
- Biến `dem0`: Lưu số lượng số `0`. Biến `dem1`: Lưu số lượng số `1`. Cả hai khởi tạo bằng `0`.
- Số lượng số `2` được xác định từ `n-dem0-dem1`, nên không cần biến đếm riêng.
- Hàm `inmang()`: In kết quả sau khi ghi lại mảng.

### 2. Quá trình phân chia ba nhóm giá trị

- Bước 1: Duyệt mảng, gặp số `0` thì tăng `dem0`; gặp số `1` thì tăng `dem1`.
- Bước 2: Duyệt lại từ `i=0` đến `n-1` để ghi các phần tử theo thứ tự.
- Bước 3: Nếu `i<dem0`, gán `A[i]=0`.
- Bước 4: Nếu `i` không thuộc nhóm đầu nhưng `i<dem0+dem1`, gán `A[i]=1`.
- Bước 5: Các vị trí còn lại gán `A[i]=2`, sau đó in toàn bộ mảng.

*Do đầu vào chỉ có ba giá trị, số lượng số 2 bằng n-dem0-dem1. Ba đoạn được ghi lại giữ đúng số lượng của từng giá trị và nằm theo thứ tự 0, 1, 2 nên kết quả đã tăng dần.*

### 3. Minh họa quá trình thực hiện

Với [2, 0, 1, 2, 0, 1], có hai số 0 và hai số 1. Hai vị trí đầu ghi 0, hai vị trí tiếp ghi 1 và hai vị trí cuối ghi 2.

### 4. Dữ liệu kiểm thử

Đầu vào gồm n và n giá trị thuộc {0, 1, 2}. Đầu ra là mảng tăng dần trên một dòng.

**Điều kiện:** `1<=n<=1000`; phần tử chỉ nhận `0`, `1` hoặc `2`.

| Test | Đầu vào | Đầu ra | Mục đích kiểm tra |
| --- | --- | --- | --- |
| 01 | `6`<br>`2 0 1 2 0 1` | `0 0 1 1 2 2` | Đủ ba giá trị, chưa có thứ tự. |
| 02 | `3`<br>`2 2 2` | `2 2 2` | Chỉ có số 2. |
| 03 | `4`<br>`1 0 1 0` | `0 0 1 1` | Không có số 2. |
| 04 | `3`<br>`0 1 2` | `0 1 2` | Mảng đã tăng. |
| 05 | `1`<br>`0` | `0` | Một phần tử. |


---

### Độ phức tạp thuật toán (Complexity)

- **Độ phức tạp thời gian (Time Complexity):** `O(n)`.
  *(Chỉ cần hai lượt duyệt và hai biến đếm.)*
- **Độ phức tạp không gian (Space Complexity):** `O(1)` bộ nhớ phụ.
  *(Không tính mảng đầu vào `A`; chương trình chỉ dùng thêm một số biến.)*

**Mã nguồn:** [05_sap_xep_0_1_2.cpp](./05_sap_xep_0_1_2.cpp).

**Bài tập tham khảo:** [Mục Array số 9](https://github.com/bollwarm/DataStructuresAlgorithms#array) - [Đề bài gốc](https://www.techiedelight.com/sort-array-containing-0s-1s-2s-dutch-national-flag-problem/).
