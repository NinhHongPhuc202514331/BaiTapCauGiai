## Thuật toán: Sắp xếp chèn (Insertion Sort)

Chương trình sử dụng phương pháp **Sắp xếp chèn (Insertion Sort)** để xây dựng dần mảng tăng dần bằng cách chèn từng phần tử vào đúng vị trí trong đoạn đã sắp xếp bên trái.

### 1. Cấu trúc dữ liệu lưu trữ

- Mảng `A[1000]`: Lưu các phần tử của mảng. Biến `n` lưu số phần tử.
- Biến `x`: Giữ giá trị `A[i]` trước khi các phần tử bị dời sang phải.
- Biến `j`: Duyệt ngược trong đoạn đã sắp xếp để tìm vị trí chèn `x`.
- Hàm `inmang()`: In mảng sau khi đã chèn hết các phần tử.

### 2. Quá trình chèn từng phần tử

- Bước 1: Xem phần tử `A[0]` là đoạn đã sắp xếp, sau đó cho `i` chạy từ `1` đến `n-1`.
- Bước 2: Lưu `x=A[i]`, đồng thời đặt `j=i-1` để xét các phần tử bên trái.
- Bước 3: Trong khi `j>=0` và `A[j]>x`, dời `A[j]` sang `A[j+1]`, rồi giảm `j`.
- Bước 4: Khi đã tìm được vị trí phù hợp hoặc đã đi hết đầu mảng, gán `A[j+1]=x`.
- Bước 5: Tiếp tục với phần tử kế tiếp. Sau khi vòng lặp kết thúc, in mảng đã sắp xếp.

*Trước lượt i, đoạn A[0..i-1] đã tăng dần. Các số lớn hơn x được dời sang phải, vì vậy đặt x vào chỗ trống sẽ làm A[0..i] tăng dần. Lặp lại đến hết mảng cho kết quả cần tìm.*

### 3. Minh họa quá trình thực hiện

Với [3, 1, 2], lấy x=1, dời 3 sang phải rồi chèn 1 vào đầu, được [1, 3, 2]. Tiếp theo lấy x=2 và chèn giữa 1 với 3, được [1, 2, 3].

### 4. Dữ liệu kiểm thử

Đầu vào gồm n và n phần tử. Đầu ra là mảng tăng dần trên một dòng.

**Điều kiện:** `1<=n<=1000`; `-1000000<=A[i]<=1000000`.

| Test | Đầu vào | Đầu ra | Mục đích kiểm tra |
| --- | --- | --- | --- |
| 01 | `3`<br>`3 1 2` | `1 2 3` | Chèn vào đầu và giữa đoạn đã tăng. |
| 02 | `4`<br>`1 2 3 4` | `1 2 3 4` | Mảng đã tăng, không cần dời phần tử. |
| 03 | `4`<br>`4 3 2 1` | `1 2 3 4` | Mỗi phần tử phải chèn về phía đầu. |
| 04 | `4`<br>`2 -1 2 0` | `-1 0 2 2` | Giá trị trùng và số âm. |
| 05 | `1`<br>`5` | `5` | Mảng một phần tử. |


---

### Độ phức tạp thuật toán (Complexity)

- **Độ phức tạp thời gian (Time Complexity):** `O(n²)` trong trường hợp xấu nhất, `O(n)` khi mảng đã tăng dần.
  *(Mảng giảm dần cần nhiều lần dời phần tử; mảng đã tăng không cần thực hiện vòng lặp dời.)*
- **Độ phức tạp không gian (Space Complexity):** `O(1)` bộ nhớ phụ.
  *(Không tính mảng đầu vào `A`; chương trình chỉ dùng thêm một số biến.)*

**Mã nguồn:** [03_sap_xep_chen.cpp](./03_sap_xep_chen.cpp).

**Bài tập tham khảo:** [Mục Array số 102](https://github.com/bollwarm/DataStructuresAlgorithms#array) - [Đề bài gốc](https://www.techiedelight.com/insertion-sort-iterative-recursive/).
