## Thuật toán: Sắp xếp chọn (Selection Sort)

Chương trình sử dụng phương pháp **Sắp xếp chọn (Selection Sort)** để sắp xếp mảng theo thứ tự tăng dần. Sau mỗi lượt chọn, chương trình in mảng để theo dõi quá trình đổi chỗ.

### 1. Cấu trúc dữ liệu lưu trữ

- Mảng `A[1000]`: Lưu trữ các phần tử nhập vào và được sắp xếp trực tiếp trên mảng này.
- Biến `n`: Lưu số phần tử của mảng.
- Biến `min`: Lưu vị trí của phần tử nhỏ nhất trong đoạn chưa sắp xếp, không phải giá trị nhỏ nhất.
- Hàm `swap(int &a, int &b)`: Đổi chỗ hai phần tử thông qua biến tạm `temp`.
- Hàm `inmang()`: In các phần tử của mảng trên một dòng.

### 2. Quá trình chọn phần tử nhỏ nhất

- Bước 1: Duyệt vị trí `i` từ `0` đến `n-1`. Phần bên trái `i` đã được sắp xếp ở các lượt trước.
- Bước 2: Đặt `min=i`, tạm xem phần tử đầu của đoạn đang xét là nhỏ nhất.
- Bước 3: Duyệt `j` từ `i+1` đến `n-1`. Nếu `A[j]<A[min]`, cập nhật `min=j`.
- Bước 4: Khi đã tìm được vị trí nhỏ nhất, gọi `swap(A[i], A[min])` để đưa phần tử đó về vị trí `i`.
- Bước 5: Gọi `inmang()` sau mỗi lượt. Lượt cuối vẫn được in dù không còn phần tử nào cần đổi chỗ.

*Sau lượt i, đoạn A[0..i] chứa i+1 phần tử nhỏ nhất theo thứ tự tăng dần. Các phần tử còn lại đều không nhỏ hơn A[i]. Vì vậy sau n lượt, toàn bộ mảng đã tăng dần.*

### 3. Minh họa quá trình thực hiện

Với A = [3, 1, 2], lượt i=0 đổi 3 với 1 được [1, 3, 2]; lượt i=1 đổi 3 với 2 được [1, 2, 3]; lượt i=2 in lại [1, 2, 3].

### 4. Dữ liệu kiểm thử

Đầu vào gồm n và n phần tử. Đầu ra gồm đúng n dòng; dòng i+1 là mảng sau khi đưa phần tử nhỏ nhất của đoạn A[i..n-1] về vị trí i. Lượt cuối vẫn in dù mảng không đổi.

**Điều kiện:** `1<=n<=1000`; `-1000000<=A[i]<=1000000`.

| Test | Đầu vào | Đầu ra | Mục đích kiểm tra |
| --- | --- | --- | --- |
| 01 | `3`<br>`3 1 2` | `1 3 2`<br>`1 2 3`<br>`1 2 3` | Mảng chưa sắp xếp, kiểm tra từng lượt đổi chỗ. |
| 02 | `3`<br>`1 2 3` | `1 2 3`<br>`1 2 3`<br>`1 2 3` | Mảng đã tăng, vẫn phải in đủ n dòng. |
| 03 | `3`<br>`3 2 1` | `1 2 3`<br>`1 2 3`<br>`1 2 3` | Mảng giảm dần. |
| 04 | `4`<br>`2 -1 2 0` | `-1 2 2 0`<br>`-1 0 2 2`<br>`-1 0 2 2`<br>`-1 0 2 2` | Có số âm, số 0 và giá trị trùng. |
| 05 | `1`<br>`7` | `7` | Biên nhỏ nhất n=1. |


---

### Độ phức tạp thuật toán (Complexity)

- **Độ phức tạp thời gian (Time Complexity):** `O(n²)`.
  *(Có n(n-1)/2 lần so sánh; việc in mảng n lần cũng cần O(n²) thời gian.)*
- **Độ phức tạp không gian (Space Complexity):** `O(1)` bộ nhớ phụ.
  *(Không tính mảng đầu vào `A`; chương trình chỉ dùng thêm một số biến.)*

**Mã nguồn:** [01_sap_xep_chon.cpp](./01_sap_xep_chon.cpp).

**Bài tập tham khảo:** [Mục Array số 103](https://github.com/bollwarm/DataStructuresAlgorithms#array) - [Đề bài gốc](https://www.techiedelight.com/selection-sort-iterative-recursive/).
