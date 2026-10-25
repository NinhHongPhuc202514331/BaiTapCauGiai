## Thuật toán: Sắp xếp nổi bọt (Bubble Sort)

Chương trình sử dụng phương pháp **Sắp xếp nổi bọt (Bubble Sort)** để sắp xếp mảng tăng dần bằng cách so sánh và đổi chỗ các phần tử đứng cạnh nhau.

### 1. Cấu trúc dữ liệu lưu trữ

- Mảng `A[1000]`: Lưu các phần tử cần sắp xếp. Biến `n` lưu số phần tử.
- Biến `doi`: Đánh dấu có xảy ra đổi chỗ trong lượt đang xét hay không.
- Biến `i`: Đếm số lượt duyệt. Biến `j`: Chỉ vị trí của cặp phần tử kề nhau đang được so sánh.
- Hàm `swap()`: Đổi chỗ hai phần tử. Hàm `inmang()`: In mảng kết quả.

### 2. Quá trình so sánh và đổi chỗ

- Bước 1: Thực hiện tối đa `n-1` lượt duyệt, với `i` bắt đầu từ `0`.
- Bước 2: Đầu mỗi lượt, đặt `doi=false` để ghi nhận rằng chưa có lần đổi chỗ nào.
- Bước 3: Cho `j` chạy từ `0` đến trước `n-i-1`. Nếu `A[j]>A[j+1]`, đổi chỗ hai phần tử và đặt `doi=true`.
- Bước 4: Sau lượt duyệt, phần tử lớn nhất của đoạn đang xét đã nằm ở cuối đoạn. Lượt tiếp theo không cần xét lại vị trí này.
- Bước 5: Nếu `doi` vẫn bằng `false`, dừng sớm vì mảng đã có thứ tự. Sau khi kết thúc, gọi `inmang()`.

*Mỗi lượt đưa một phần tử lớn nhất về cuối đoạn chưa sắp xếp. Nếu một lượt không đổi chỗ thì mọi cặp kề nhau đều đúng thứ tự, nên mảng đã tăng dần.*

### 3. Minh họa quá trình thực hiện

Với [3, 1, 2], so sánh 3 và 1 được [1, 3, 2], sau đó đổi 3 với 2 được [1, 2, 3]. Lượt kế tiếp không đổi chỗ nên dừng.

### 4. Dữ liệu kiểm thử

Đầu vào gồm n và n phần tử. Đầu ra là mảng tăng dần trên một dòng.

**Điều kiện:** `1<=n<=1000`; `-1000000<=A[i]<=1000000`.

| Test | Đầu vào | Đầu ra | Mục đích kiểm tra |
| --- | --- | --- | --- |
| 01 | `3`<br>`3 1 2` | `1 2 3` | Mảng chưa tăng. |
| 02 | `4`<br>`1 2 3 4` | `1 2 3 4` | Mảng đã tăng, kiểm tra dừng sớm. |
| 03 | `4`<br>`4 3 2 1` | `1 2 3 4` | Mảng giảm, cần nhiều lượt đổi. |
| 04 | `4`<br>`2 -1 2 0` | `-1 0 2 2` | Số âm và giá trị trùng. |
| 05 | `1`<br>`9` | `9` | Chỉ có một phần tử. |


---

### Độ phức tạp thuật toán (Complexity)

- **Độ phức tạp thời gian (Time Complexity):** `O(n²)` trong trường hợp xấu nhất, `O(n)` khi mảng đã tăng dần.
  *(Biến doi giúp dừng sau lượt đầu tiên nếu không có cặp nào cần đổi chỗ.)*
- **Độ phức tạp không gian (Space Complexity):** `O(1)` bộ nhớ phụ.
  *(Không tính mảng đầu vào `A`; chương trình chỉ dùng thêm một số biến.)*

**Mã nguồn:** [02_sap_xep_noi_bot.cpp](./02_sap_xep_noi_bot.cpp).

**Bài tập tham khảo:** [Mục Array số 104](https://github.com/bollwarm/DataStructuresAlgorithms#array) - [Đề bài gốc](https://www.techiedelight.com/bubble-sort/).
