## Thuật toán: Tìm kiếm nhị phân (Binary Search)

Chương trình sử dụng phương pháp **Tìm kiếm nhị phân (Binary Search)** để tìm một vị trí chứa giá trị `x` trong mảng đã sắp xếp không giảm. Sau mỗi lần so sánh, đoạn tìm kiếm được thu hẹp còn khoảng một nửa.

### 1. Cấu trúc dữ liệu lưu trữ

- Mảng `A[1000]`: Lưu các phần tử đã sắp xếp không giảm. Biến `n` lưu số phần tử.
- Biến `x`: Lưu giá trị cần tìm, được nhập sau mảng.
- Hai biến `l`, `r`: Lưu hai đầu đoạn đang tìm kiếm, ban đầu là `0` và `n-1`.
- Biến `mid`: Lưu vị trí giữa đoạn, tính bằng `(l+r)/2`.

### 2. Quá trình thu hẹp đoạn tìm kiếm

- Bước 1: Khởi tạo `l=0`, `r=n-1`, tiếp tục tìm khi `l<=r`.
- Bước 2: Tính `mid=(l+r)/2`, so sánh `A[mid]` với `x`.
- Bước 3: Nếu `A[mid]==x`, in `mid` và kết thúc chương trình.
- Bước 4: Nếu `A[mid]<x`, chỉ giữ nửa phải bằng cách đặt `l=mid+1`. Ngược lại, đặt `r=mid-1` để tìm bên trái.
- Bước 5: Nếu `l>r` mà chưa tìm thấy, đoạn tìm kiếm đã rỗng. In `-1`.

*Nếu A[mid]&lt;x thì các phần tử bên trái cũng nhỏ hơn x, nên chỉ cần giữ nửa phải. Trường hợp lớn hơn xử lý tương tự. Mỗi lần loại bỏ đều giữ lại mọi vị trí có thể chứa x, vì vậy tìm thấy đúng hoặc kết luận đúng khi đoạn rỗng.*

### 3. Minh họa quá trình thực hiện

Với [1, 3, 5, 7, 9] và x=7, lần đầu mid=2 có A[2]=5 nên giữ đoạn [3,4]. Lần tiếp theo mid=3 và A[3]=7, in 3.

### 4. Dữ liệu kiểm thử

Đầu vào gồm n, n phần tử đã không giảm và x. Đầu ra là một chỉ số chứa x, đánh số từ 0; nếu không có thì in -1. Khi x bị trùng, kết quả là vị trí được gặp đầu tiên trong quá trình chia đôi.

**Điều kiện:** `1<=n<=1000`; `-1000000<=A[i]<=1000000`; mảng đã sắp xếp không giảm; `-1000000<=x<=1000000`.

| Test | Đầu vào | Đầu ra | Mục đích kiểm tra |
| --- | --- | --- | --- |
| 01 | `5`<br>`1 3 5 7 9`<br>`7` | `3` | Giá trị ở nửa phải. |
| 02 | `5`<br>`1 3 5 7 9`<br>`4` | `-1` | Giá trị nằm giữa hai phần tử nhưng không tồn tại. |
| 03 | `4`<br>`-5 -2 0 8`<br>`-5` | `0` | Tìm phần tử đầu tiên. |
| 04 | `4`<br>`1 2 3 4`<br>`4` | `3` | Tìm phần tử cuối cùng. |
| 05 | `1`<br>`6`<br>`6` | `0` | Mảng một phần tử và tìm thấy. |


---

### Độ phức tạp thuật toán (Complexity)

- **Độ phức tạp thời gian (Time Complexity):** `O(log n)` cho phần tìm kiếm.
  *(Nếu tính cả việc nhập n phần tử, thời gian toàn chương trình là O(n).)*
- **Độ phức tạp không gian (Space Complexity):** `O(1)` bộ nhớ phụ.
  *(Không tính mảng đầu vào `A`; chương trình chỉ dùng thêm một số biến.)*

**Mã nguồn:** [12_tim_kiem_nhi_phan.cpp](./12_tim_kiem_nhi_phan.cpp).

**Bài tập tham khảo:** [Mục Array số 116](https://github.com/bollwarm/DataStructuresAlgorithms#array) - [Đề bài gốc](https://www.techiedelight.com/binary-search/).
