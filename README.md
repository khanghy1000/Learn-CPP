# Các kiến thức tóm tắt

### Ép kiểu dữ liệu
static_cast<kiểu dữ liệu>(biến)

### Xoá dữ liệu trong stdin (input)
cin.ignore(INT64_MAX, '\n')

## Cấu trúc rẽ nhánh

### Cấu trúc if

if (biểu thức điều kiện)
{
	// do A
}
else if (biểu thức điều kiện)
{
	// do B
}
else if (biểu thức điều kiện)
{
	// do C
}
else
{
	// do D
}

### Cấu trúc switch case

switch (<biến>) 
{
case <giá trị 1>:
	//Code sẽ chạy nếu <biến> == giá-trị-1
	break;
case <giá trị 2>:
	//Code sẽ chạy nếu <biến> == giá-trị-2
	break;
//.......................
default:
	//Code sẽ chạy nếu <biến> trong switch không khớp với giá trị của nhãn case.
	break;
}

> Cuối các lệnh của mỗi "case" phải có break để ngăn cách các case riêng biệt; nếu không có sẽ gây nên hiện tượng fall-through.

## Cấu trúc vòng lặp

### Vòng lặp while

while (biểu thức điều kiện)
{
	// Câu lệnh;
}

### Vòng lặp do-while

do
{
	// Câu lệnh;
} while (biểu thức điều kiện);

>> Điểm khác nhau giữa while và do-while:
> Một khi vòng lặp while được thực thi, biểu thức điều kiện trong while sẽ được đánh giá. Nếu biểu thức điều kiện cho giá trị đúng, các câu lệnh trong khối lệnh của vòng lặp while sẽ được thực thi và chương trình quay trở lại đánh giá biểu thức điều kiện trong while, ngược lại, nếu biểu thức điều kiện sai, chương trình thoát khỏi vòng lặp while.
> Các câu lệnh bên trong khối lệnh của cấu trúc do-while sẽ được thực thi ít nhất 1 lần. Sau khi thực thi các câu lệnh, vòng lặp do-while sẽ đánh giá biểu thức điều kiện. Nếu biểu thức điều kiện đúng, chương trình quay trở lại thực hiện khối công việc của vòng lặp do-while, ngược lại, nếu biểu thức điều kiện sai, chương trình thoát khỏi vòng lặp do-while.
