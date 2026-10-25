## Thuật toán: Duyệt từng cặp - Tìm tích lớn nhất

Chương trình sử dụng phương pháp **Duyệt từng cặp - Tìm tích lớn nhất** để tìm hai phần tử có tích lớn nhất trong mảng. Việc xét mọi cặp giúp xử lý cả trường hợp hai số âm nhân với nhau tạo tích dương.

### 1. Cấu trúc dữ liệu lưu trữ

- Mảng `A[1000]`: Lưu các số nguyên. Biến `n` lưu số phần tử và phải có `n>=2`.
- Biến `max` kiểu `long long`: Lưu tích lớn nhất đã tìm thấy, khởi tạo bằng `1LL*A[0]*A[1]`.
- Hai biến `vt1`, `vt2`: Lưu vị trí của cặp tạo tích lớn nhất, ban đầu bằng `0` và `1`.
- Biến `tich` kiểu `long long`: Lưu tích của cặp đang xét. Hệ số `1LL` giúp phép nhân được thực hiện ở kiểu 64 bit.

### 2. Quá trình cập nhật tích lớn nhất

- Bước 1: Khởi tạo kết quả từ hai phần tử đầu tiên, thay vì đặt `max=0`, để xử lý đúng khi tích lớn nhất là số âm.
- Bước 2: Duyệt mọi cặp `i<j` bằng hai vòng lặp.
- Bước 3: Tính `tich=1LL*A[i]*A[j]`.
- Bước 4: Nếu `tich>max`, cập nhật `max=tich`, `vt1=i` và `vt2=j`.
- Bước 5: Khi hai tích bằng nhau, giữ cặp đã gặp trước. Sau khi duyệt hết, in hai giá trị tại `vt1`, `vt2` và in tích lớn nhất.

*Sau mỗi cặp, max là tích lớn nhất trong các cặp đã xét. Khi xét hết tất cả cặp, max là tích lớn nhất toàn mảng. Khởi tạo từ một cặp thật giúp xử lý đúng cả khi mọi tích đều âm.*

### 3. Minh họa quá trình thực hiện

Với [-10, -3, 5, 6, -2], tích của (-10, -3) là 30. Cặp (5, 6) cũng cho 30 nhưng gặp sau nên vẫn giữ (-10, -3).

### 4. Dữ liệu kiểm thử

Đầu vào gồm n với 2&lt;=n&lt;=1000 và n phần tử. Dòng đầu ra thứ nhất in hai giá trị tạo tích lớn nhất; dòng thứ hai in tích. Nếu nhiều cặp có cùng tích lớn nhất, giữ cặp có i nhỏ nhất rồi j nhỏ nhất.

**Điều kiện:** `2<=n<=1000`; `-1000000<=A[i]<=1000000`.

| Test | Đầu vào | Đầu ra | Mục đích kiểm tra |
| --- | --- | --- | --- |
| 01 | `5`<br>`-10 -3 5 6 -2` | `-10 -3`<br>`30` | Hai cặp cùng tích lớn nhất, ưu tiên cặp gặp trước. |
| 02 | `4`<br>`1 4 3 2` | `4 3`<br>`12` | Tất cả số dương. |
| 03 | `2`<br>`-5 2` | `-5 2`<br>`-10` | Chỉ hai phần tử và tích âm. |
| 04 | `3`<br>`-5 0 2` | `-5 0`<br>`0` | Tích lớn nhất bằng 0. |
| 05 | `3`<br>`-1000000 -1000000 1` | `-1000000 -1000000`<br>`1000000000000` | Tích vượt phạm vi int, kiểm tra long long. |


---

### Độ phức tạp thuật toán (Complexity)

- **Độ phức tạp thời gian (Time Complexity):** `O(n²)`.
  *(Mỗi cặp vị trí được tính tích một lần.)*
- **Độ phức tạp không gian (Space Complexity):** `O(1)` bộ nhớ phụ.
  *(Không tính mảng đầu vào `A`; chương trình chỉ dùng thêm một số biến.)*

**Mã nguồn:** [09_tich_lon_nhat.cpp](./09_tich_lon_nhat.cpp).

**Bài tập tham khảo:** [Mục Array số 13](https://github.com/bollwarm/DataStructuresAlgorithms#array) - [Đề bài gốc](https://www.techiedelight.com/find-maximum-product-two-integers-array/).
