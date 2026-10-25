## Thuật toán: Phép XOR - Tìm phần tử xuất hiện số lần lẻ

Chương trình sử dụng phương pháp **Phép XOR - Tìm phần tử xuất hiện số lần lẻ** để tìm giá trị có số lần xuất hiện lẻ bằng phép XOR. Dữ liệu đảm bảo chỉ có một giá trị xuất hiện lẻ, các giá trị còn lại đều xuất hiện chẵn lần.

### 1. Cấu trúc dữ liệu lưu trữ

- Mảng `A[1000]`: Lưu các số nguyên đầu vào. Biến `n` lưu số phần tử.
- Biến `kq`: Lưu kết quả XOR của các phần tử đã duyệt, khởi tạo bằng `0`.
- Toán tử `^` trong C++: Thực hiện XOR trên các bit. Các tính chất được dùng là `x^x=0` và `x^0=x`.

### 2. Quá trình XOR các phần tử

- Bước 1: Đặt `kq=0` trước khi xử lý mảng.
- Bước 2: Cho `i` chạy từ `0` đến `n-1`, cập nhật `kq=kq^A[i]`.
- Bước 3: Nhờ tính giao hoán và kết hợp, các giá trị giống nhau có thể ghép thành từng cặp và triệt tiêu về `0`.
- Bước 4: Giá trị xuất hiện lẻ còn lại một lần sau khi các cặp đã triệt tiêu. In `kq` làm kết quả.

*XOR có tính giao hoán và kết hợp. Mỗi giá trị xuất hiện chẵn có thể ghép thành từng cặp và triệt tiêu về 0. Giá trị xuất hiện lẻ còn lại một lần, nên đó là kq cuối cùng.*

### 3. Minh họa quá trình thực hiện

Với [2, 3, 2, 3, 3], hai số 2 triệt tiêu; hai trong ba số 3 cũng triệt tiêu. Còn lại 3 nên kết quả bằng 3.

### 4. Dữ liệu kiểm thử

Đầu vào gồm n và n phần tử thỏa điều kiện. Đầu ra là giá trị có số lần xuất hiện lẻ. Không phải tìm số có giá trị lẻ.

**Điều kiện:** `1<=n<=1000`; `-1000000<=A[i]<=1000000`; đúng một giá trị xuất hiện số lần lẻ, các giá trị khác xuất hiện số lần chẵn.

| Test | Đầu vào | Đầu ra | Mục đích kiểm tra |
| --- | --- | --- | --- |
| 01 | `5`<br>`2 3 2 3 3` | `3` | Một giá trị xuất hiện ba lần. |
| 02 | `3`<br>`4 4 4` | `4` | Giá trị cần tìm là số chẵn. |
| 03 | `3`<br>`0 1 1` | `0` | Giá trị xuất hiện lẻ bằng 0. |
| 04 | `5`<br>`-2 5 5 -2 -2` | `-2` | Giá trị cần tìm âm. |
| 05 | `1`<br>`7` | `7` | Mảng chỉ có giá trị cần tìm. |


---

### Độ phức tạp thuật toán (Complexity)

- **Độ phức tạp thời gian (Time Complexity):** `O(n)`.
  *(Mỗi phần tử được XOR đúng một lần.)*
- **Độ phức tạp không gian (Space Complexity):** `O(1)` bộ nhớ phụ.
  *(Không tính mảng đầu vào `A`; chương trình chỉ dùng thêm một số biến.)*

**Mã nguồn:** [11_so_lan_xuat_hien_le.cpp](./11_so_lan_xuat_hien_le.cpp).

**Bài tập tham khảo:** [Mục Array số 52](https://github.com/bollwarm/DataStructuresAlgorithms#array) - [Đề bài gốc](https://www.techiedelight.com/find-odd-occurring-element-array-single-traversal/).
