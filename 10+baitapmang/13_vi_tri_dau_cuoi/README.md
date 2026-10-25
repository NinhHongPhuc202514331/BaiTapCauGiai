## Thuật toán: Tìm kiếm nhị phân - Tìm vị trí đầu và cuối

Chương trình sử dụng phương pháp **Tìm kiếm nhị phân - Tìm vị trí đầu và cuối** để tìm lần xuất hiện đầu tiên và cuối cùng của `x` trong mảng đã sắp xếp không giảm. Khi gặp `x`, chương trình tiếp tục tìm về một phía để xác định biên.

### 1. Cấu trúc dữ liệu lưu trữ

- Mảng `A[1000]`: Lưu các phần tử đã sắp xếp không giảm. Biến `n` lưu số phần tử.
- Biến `x`: Lưu giá trị cần tìm.
- Hàm `timdau(x)`: Tìm vị trí đầu tiên chứa `x`. Hàm `timcuoi(x)`: Tìm vị trí cuối cùng chứa `x`.
- Trong mỗi hàm, `l`, `r` là hai đầu đoạn; `mid` là vị trí giữa; `kq` lưu vị trí đã tìm được, khởi tạo bằng `-1`.

### 2. Quá trình tìm hai vị trí biên

- Bước 1: Trong `timdau`, đặt `l=0`, `r=n-1`, `kq=-1`, rồi lặp khi `l<=r`.
- Bước 2: Nếu `A[mid]==x`, lưu `kq=mid` nhưng chưa dừng. Đặt `r=mid-1` để tìm xem có vị trí nào chứa `x` ở phía trước hay không.
- Bước 3: Nếu `A[mid]<x`, đặt `l=mid+1`; nếu lớn hơn, đặt `r=mid-1`. Khi hết đoạn tìm kiếm, trả về `kq`.
- Bước 4: Trong `timcuoi`, xử lý tương tự, nhưng khi gặp `x` thì đặt `l=mid+1` để tiếp tục tìm sang phải.
- Bước 5: Gọi cả hai hàm và in hai kết quả. Nếu `x` không tồn tại, cả hai hàm đều trả về `-1`.

*Ở timdau, mỗi lần gặp x đều lưu một vị trí hợp lệ rồi chỉ tìm phần có thể chứa vị trí sớm hơn. Vì vậy vị trí được giữ cuối cùng là nhỏ nhất. Lập luận đối xứng cho timcuoi cho vị trí lớn nhất.*

### 3. Minh họa quá trình thực hiện

Với [1, 2, 2, 2, 4] và x=2, gặp mid=2 nhưng timdau tiếp tục trái để tìm 1. timcuoi tiếp tục phải để tìm 3. Kết quả là 1 3.

### 4. Dữ liệu kiểm thử

Đầu vào gồm n, n phần tử đã không giảm và x. Đầu ra gồm hai chỉ số dau cuoi, đánh số từ 0; không có x thì in -1 -1.

**Điều kiện:** `1<=n<=1000`; `-1000000<=A[i]<=1000000`; mảng đã sắp xếp không giảm; `-1000000<=x<=1000000`.

| Test | Đầu vào | Đầu ra | Mục đích kiểm tra |
| --- | --- | --- | --- |
| 01 | `5`<br>`1 2 2 2 4`<br>`2` | `1 3` | x xuất hiện thành một nhóm ở giữa. |
| 02 | `3`<br>`1 2 3`<br>`4` | `-1 -1` | Không có x. |
| 03 | `4`<br>`5 5 5 5`<br>`5` | `0 3` | Toàn bộ phần tử bằng x. |
| 04 | `3`<br>`-2 0 3`<br>`-2` | `0 0` | x chỉ xuất hiện ở đầu. |
| 05 | `1`<br>`7`<br>`7` | `0 0` | Mảng một phần tử. |


---

### Độ phức tạp thuật toán (Complexity)

- **Độ phức tạp thời gian (Time Complexity):** `O(log n)` cho hai lần tìm kiếm.
  *(Hai lần tìm nhị phân vẫn có độ phức tạp O(log n). Tính cả nhập mảng là O(n).)*
- **Độ phức tạp không gian (Space Complexity):** `O(1)` bộ nhớ phụ.
  *(Không tính mảng đầu vào `A`; chương trình chỉ dùng thêm một số biến.)*

**Mã nguồn:** [13_vi_tri_dau_cuoi.cpp](./13_vi_tri_dau_cuoi.cpp).

**Bài tập tham khảo:** [Mục Array số 122](https://github.com/bollwarm/DataStructuresAlgorithms#array) - [Đề bài gốc](https://www.techiedelight.com/find-first-or-last-occurrence-of-a-given-number-sorted-array/).
