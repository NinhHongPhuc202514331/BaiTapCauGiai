## Thuật toán: Tìm kiếm nhị phân - Đếm số lần xuất hiện của x

Chương trình sử dụng phương pháp **Tìm kiếm nhị phân - Đếm số lần xuất hiện của x** để đếm số lần xuất hiện của `x` trong mảng đã sắp xếp không giảm. Chương trình tìm hai vị trí biên rồi tính độ dài của đoạn chứa `x`.

### 1. Cấu trúc dữ liệu lưu trữ

- Mảng `A[1000]`: Lưu các phần tử đã sắp xếp không giảm. Biến `n` lưu số phần tử.
- Biến `x`: Lưu giá trị cần đếm số lần xuất hiện.
- Hàm `timdau(x)` và `timcuoi(x)`: Tìm hai vị trí biên bằng tìm kiếm nhị phân, trả về `-1` nếu không có `x`.
- Hai biến `dau`, `cuoi`: Lưu kết quả trả về của hai hàm trên.
- Các biến `l`, `r`, `mid`, `kq`: Được dùng trong từng hàm để thu hẹp đoạn tìm kiếm và lưu vị trí tìm được.

### 2. Quá trình tìm biên và tính số lần xuất hiện

- Bước 1: Gọi `timdau(x)`. Khi gặp `x`, lưu vị trí rồi tiếp tục tìm bên trái để lấy chỉ số nhỏ nhất.
- Bước 2: Gọi `timcuoi(x)`. Khi gặp `x`, lưu vị trí rồi tiếp tục tìm bên phải để lấy chỉ số lớn nhất.
- Bước 3: Lưu hai kết quả vào `dau` và `cuoi`.
- Bước 4: Nếu `dau==-1`, in `0` vì không có phần tử nào bằng `x`.
- Bước 5: Ngược lại, in `cuoi-dau+1`. Vì mảng đã sắp xếp, mọi phần tử giữa hai biên đều bằng `x`.

*Mảng đã không giảm nên giữa hai lần xuất hiện đầu và cuối của x không thể có giá trị khác x. Vì vậy số phần tử bằng x đúng bằng số chỉ số trong đoạn [dau, cuoi], tức cuoi-dau+1.*

### 3. Minh họa quá trình thực hiện

Với [1, 2, 2, 2, 4] và x=2, dau=1 và cuoi=3, nên số lần xuất hiện là 3-1+1=3.

### 4. Dữ liệu kiểm thử

Đầu vào gồm n, n phần tử đã không giảm và x. Đầu ra là số lần x xuất hiện; không có x thì in 0.

**Điều kiện:** `1<=n<=1000`; `-1000000<=A[i]<=1000000`; mảng đã sắp xếp không giảm; `-1000000<=x<=1000000`.

| Test | Đầu vào | Đầu ra | Mục đích kiểm tra |
| --- | --- | --- | --- |
| 01 | `5`<br>`1 2 2 2 4`<br>`2` | `3` | x xuất hiện nhiều lần ở giữa. |
| 02 | `3`<br>`1 2 3`<br>`9` | `0` | Không có x. |
| 03 | `4`<br>`5 5 5 5`<br>`5` | `4` | Mọi phần tử đều bằng x. |
| 04 | `4`<br>`-2 -2 0 3`<br>`-2` | `2` | x âm và nằm ở đầu mảng. |
| 05 | `1`<br>`7`<br>`7` | `1` | Một phần tử bằng x. |


---

### Độ phức tạp thuật toán (Complexity)

- **Độ phức tạp thời gian (Time Complexity):** `O(log n)` cho phần đếm.
  *(Phần đếm thực hiện hai lần tìm kiếm nhị phân. Tính cả nhập dữ liệu là O(n).)*
- **Độ phức tạp không gian (Space Complexity):** `O(1)` bộ nhớ phụ.
  *(Không tính mảng đầu vào `A`; chương trình chỉ dùng thêm một số biến.)*

**Mã nguồn:** [14_dem_so_lan_x.cpp](./14_dem_so_lan_x.cpp).

**Bài tập tham khảo:** [Mục Array số 123](https://github.com/bollwarm/DataStructuresAlgorithms#array) - [Đề bài gốc](https://www.techiedelight.com/count-occurrences-number-sorted-array-duplicates/).
