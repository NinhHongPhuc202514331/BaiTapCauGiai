## Thuật toán: Tìm kiếm nhị phân - Thống kê tần suất từng giá trị

Chương trình sử dụng phương pháp **Tìm kiếm nhị phân - Thống kê tần suất từng giá trị** để đếm số lần xuất hiện của từng giá trị trong mảng đã sắp xếp không giảm. Chương trình tìm cuối mỗi nhóm bằng tìm kiếm nhị phân rồi chuyển sang nhóm tiếp theo.

### 1. Cấu trúc dữ liệu lưu trữ

- Mảng `A[1000]`: Lưu các phần tử đã sắp xếp không giảm. Biến `n` lưu số phần tử.
- Biến `i`: Lưu vị trí bắt đầu của nhóm đang xét, ban đầu bằng `0`.
- Biến `x`: Lưu giá trị `A[i]` của nhóm hiện tại.
- Hai biến `l`, `r`: Giới hạn đoạn tìm điểm cuối của nhóm. Biến `mid`: Vị trí giữa đoạn.
- Biến `cuoi`: Lưu vị trí cuối cùng tìm được có giá trị bằng `x`.

### 2. Quá trình thống kê từng nhóm phần tử

- Bước 1: Đặt `i=0`. Khi `i<n`, lấy `x=A[i]` làm giá trị của nhóm đang xét.
- Bước 2: Khởi tạo `l=i`, `r=n-1`, `cuoi=i`, sau đó tìm nhị phân khi `l<=r`.
- Bước 3: Nếu `A[mid]==x`, cập nhật `cuoi=mid` rồi đặt `l=mid+1` để tìm vị trí xa hơn về bên phải.
- Bước 4: Nếu `A[mid]!=x`, giá trị tại đó đã vượt nhóm vì mảng có thứ tự. Đặt `r=mid-1`.
- Bước 5: Khi tìm xong, in `x` và số lần xuất hiện `cuoi-i+1`.
- Bước 6: Đặt `i=cuoi+1` để nhảy sang nhóm mới. Lặp lại đến khi xử lý hết mảng.

*Do mảng có thứ tự, khi bắt đầu tại i thì mọi phần tử trong đoạn tìm kiếm đều không nhỏ hơn x. Vì thế A[mid] khác x đồng nghĩa đã vượt nhóm. Tìm được cuoi chính xác, và nhảy đến cuoi+1 xử lý mỗi nhóm đúng một lần.*

### 3. Minh họa quá trình thực hiện

Với [1, 1, 2, 4, 4, 4], nhóm bắt đầu i=0 kết thúc ở 1 nên in 1 2. Tiếp theo in 2 1, rồi nhóm i=3 kết thúc ở 5 nên in 4 3.

### 4. Dữ liệu kiểm thử

Đầu vào gồm n và n phần tử đã không giảm. Mỗi dòng đầu ra có dạng gia_tri so_lan, các giá trị được in tăng dần.

**Điều kiện:** `1<=n<=1000`; `-1000000<=A[i]<=1000000`; mảng đã sắp xếp không giảm.

| Test | Đầu vào | Đầu ra | Mục đích kiểm tra |
| --- | --- | --- | --- |
| 01 | `6`<br>`1 1 2 4 4 4` | `1 2`<br>`2 1`<br>`4 3` | Nhiều nhóm với tần suất khác nhau. |
| 02 | `4`<br>`5 5 5 5` | `5 4` | Chỉ một nhóm. |
| 03 | `4`<br>`-3 0 2 7` | `-3 1`<br>`0 1`<br>`2 1`<br>`7 1` | Mỗi giá trị xuất hiện một lần. |
| 04 | `6`<br>`-2 -2 0 0 0 3` | `-2 2`<br>`0 3`<br>`3 1` | Có số âm và số 0. |
| 05 | `1`<br>`8` | `8 1` | Mảng một phần tử. |


---

### Độ phức tạp thuật toán (Complexity)

- **Độ phức tạp thời gian (Time Complexity):** `O(m log n)` cho phần thống kê.
  *(Trong đó m là số giá trị khác nhau. Khi m=n, phần xử lý có thể là O(n log n). Tính cả nhập mảng là O(n + m log n).)*
- **Độ phức tạp không gian (Space Complexity):** `O(1)` bộ nhớ phụ.
  *(Không tính mảng đầu vào `A`; chương trình chỉ dùng thêm một số biến.)*

**Mã nguồn:** [15_tan_suat_tung_phan_tu.cpp](./15_tan_suat_tung_phan_tu.cpp).

**Bài tập tham khảo:** [Mục Array số 155](https://github.com/bollwarm/DataStructuresAlgorithms#array) - [Đề bài gốc](https://www.techiedelight.com/find-frequency-element-sorted-array-containing-duplicates/).
