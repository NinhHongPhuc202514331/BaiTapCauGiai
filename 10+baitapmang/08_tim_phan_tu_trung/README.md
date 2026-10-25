## Thuật toán: Duyệt từng cặp - Tìm phần tử trùng

Chương trình sử dụng phương pháp **Duyệt từng cặp - Tìm phần tử trùng** để tìm giá trị bị lặp trong mảng có các phần tử thuộc đoạn `[1, n-1]`. Chương trình so sánh từng cặp và không sử dụng mảng phụ.

### 1. Cấu trúc dữ liệu lưu trữ

- Mảng `A[1000]`: Lưu `n` phần tử, mỗi giá trị thuộc `[1, n-1]`.
- Biến `n`: Lưu số phần tử, thỏa mãn `2<=n<=1000`.
- Hai biến `i`, `j`: Chỉ hai vị trí khác nhau đang được so sánh, với `i<j`.
- Dữ liệu có đúng một giá trị xuất hiện nhiều hơn một lần. Giá trị này có thể xuất hiện hơn hai lần.

### 2. Quá trình tìm hai phần tử bằng nhau

- Bước 1: Duyệt `i` từ `0` đến `n-2`.
- Bước 2: Với mỗi vị trí `i`, duyệt `j` từ `i+1` đến `n-1`.
- Bước 3: So sánh `A[i]` và `A[j]`. Nếu bằng nhau, đây là giá trị bị lặp.
- Bước 4: In `A[i]` rồi kết thúc chương trình, vì đề bài đảm bảo chỉ có một giá trị bị lặp.
- Bước 5: Nếu không tìm thấy, code in `-1`. Nhánh này chỉ là dự phòng, không xảy ra với đầu vào đúng điều kiện.

*Giá trị bị lặp có ít nhất hai vị trí khác nhau, nên hai vòng lặp chắc chắn xét đến một cặp chứa giá trị đó. Vì chỉ có một giá trị bị lặp, kết quả tìm được là duy nhất.*

### 3. Minh họa quá trình thực hiện

Với [1, 2, 3, 4, 2], phần tử 1 không bằng phần tử nào phía sau. Khi i=1, A[1]=A[4]=2 nên in 2.

### 4. Dữ liệu kiểm thử

Đầu vào gồm n và n phần tử thỏa điều kiện đề bài. Đầu ra là giá trị bị trùng. Nhánh in -1 chỉ là dự phòng nếu dữ liệu không có phần tử trùng.

**Điều kiện:** `2<=n<=1000`; mỗi phần tử thuộc `[1, n-1]` và có đúng một giá trị bị lặp.

| Test | Đầu vào | Đầu ra | Mục đích kiểm tra |
| --- | --- | --- | --- |
| 01 | `5`<br>`1 2 3 4 2` | `2` | Giá trị trùng nằm ở giữa và cuối. |
| 02 | `4`<br>`2 1 3 2` | `2` | Giá trị trùng ở đầu và cuối. |
| 03 | `2`<br>`1 1` | `1` | Biên nhỏ nhất n=2. |
| 04 | `5`<br>`3 1 3 3 2` | `3` | Một giá trị xuất hiện hơn hai lần. |
| 05 | `6`<br>`1 2 3 4 5 5` | `5` | Hai phần tử cuối bằng nhau. |


---

### Độ phức tạp thuật toán (Complexity)

- **Độ phức tạp thời gian (Time Complexity):** `O(n²)` trong trường hợp xấu nhất.
  *(Chương trình có thể phải so sánh tất cả các cặp trước khi gặp phần tử trùng.)*
- **Độ phức tạp không gian (Space Complexity):** `O(1)` bộ nhớ phụ.
  *(Không tính mảng đầu vào `A`; chương trình chỉ dùng thêm một số biến.)*

**Mã nguồn:** [08_tim_phan_tu_trung.cpp](./08_tim_phan_tu_trung.cpp).

**Bài tập tham khảo:** [Mục Array số 5](https://github.com/bollwarm/DataStructuresAlgorithms#array) - [Đề bài gốc](https://www.techiedelight.com/find-duplicate-element-limited-range-array/).
