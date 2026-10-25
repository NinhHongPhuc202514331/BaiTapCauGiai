## Thuật toán: Duyệt từng cặp - Tìm hai phần tử có tổng bằng k

Chương trình sử dụng phương pháp **Duyệt từng cặp - Tìm hai phần tử có tổng bằng k** để tìm hai phần tử ở hai vị trí khác nhau có tổng bằng `k`. Với mảng tối đa `1000` phần tử, chương trình sử dụng hai vòng lặp để xét các cặp.

### 1. Cấu trúc dữ liệu lưu trữ

- Mảng `A[1000]`: Lưu các số nguyên đầu vào. Biến `n` lưu số phần tử.
- Biến `k`: Lưu tổng cần tìm, được nhập sau các phần tử của mảng.
- Hai biến `i`, `j`: Chỉ hai vị trí đang xét, luôn có `i<j` để không dùng một phần tử hai lần.

### 2. Quá trình kiểm tra từng cặp phần tử

- Bước 1: Cho `i` chạy từ `0` đến `n-2` để chọn phần tử thứ nhất.
- Bước 2: Với mỗi `i`, cho `j` chạy từ `i+1` đến `n-1` để chọn phần tử thứ hai.
- Bước 3: Tính và kiểm tra điều kiện `A[i]+A[j]==k`.
- Bước 4: Nếu thỏa mãn, in `A[i]` và `A[j]`, sau đó kết thúc bằng `return 0`. Đây là cặp đầu tiên theo thứ tự duyệt.
- Bước 5: Nếu đã xét hết các cặp mà chưa tìm thấy, in `-1`.

*Mỗi cặp vị trí i&lt;j được xét đúng một lần. Vì vậy nếu có cặp phù hợp, chương trình sẽ gặp và in cặp đó; nếu không gặp thì không có cặp nào thỏa mãn.*

### 3. Minh họa quá trình thực hiện

Với [8, 7, 2, 5, 3, 1] và k=10, cặp (8, 7) không đạt, cặp kế tiếp (8, 2) đạt. In 8 2 và dừng, dù còn cặp (7, 3).

### 4. Dữ liệu kiểm thử

Đầu vào gồm n, n phần tử và k. Nếu có, in hai giá trị A[i] A[j] với i&lt;j; chọn cặp đầu tiên theo thứ tự duyệt i tăng rồi j tăng. Nếu không có, in -1.

**Điều kiện:** `1<=n<=1000`; `-1000000<=A[i]<=1000000`; `-2000000<=k<=2000000`.

| Test | Đầu vào | Đầu ra | Mục đích kiểm tra |
| --- | --- | --- | --- |
| 01 | `6`<br>`8 7 2 5 3 1`<br>`10` | `8 2` | Có nhiều cặp, lấy cặp đầu theo thứ tự duyệt. |
| 02 | `3`<br>`1 2 3`<br>`10` | `-1` | Không có cặp phù hợp. |
| 03 | `4`<br>`-3 1 4 2`<br>`1` | `-3 4` | Cặp có số âm. |
| 04 | `2`<br>`5 5`<br>`10` | `5 5` | Hai giá trị bằng nhau tại hai vị trí khác nhau. |
| 05 | `1`<br>`4`<br>`8` | `-1` | Không được dùng một phần tử hai lần. |


---

### Độ phức tạp thuật toán (Complexity)

- **Độ phức tạp thời gian (Time Complexity):** `O(n²)` trong trường hợp xấu nhất.
  *(Có tối đa n(n-1)/2 cặp vị trí cần kiểm tra.)*
- **Độ phức tạp không gian (Space Complexity):** `O(1)` bộ nhớ phụ.
  *(Không tính mảng đầu vào `A`; chương trình chỉ dùng thêm một số biến.)*

**Mã nguồn:** [07_cap_co_tong_k.cpp](./07_cap_co_tong_k.cpp).

**Bài tập tham khảo:** [Mục Array số 1](https://github.com/bollwarm/DataStructuresAlgorithms#array) - [Đề bài gốc](https://www.techiedelight.com/find-pair-with-given-sum-array/).
