# CNET-linux-lab-1

2.1 Giữ hàm printf trong reboot_node ở ví dụ 1, thêm vào 2 dòng chào mừng sau, một

gửi đến standard output, một gửi đến standard error sử dụng fprintf:
fprintf( stdout, “Hello to stdout\n” );
fprintf( stderr, “Hello to stderr\n” );
Sự khác nhau giữa 3 dòng chào mừng trên màn hình là gì?

2.2 Chạy phiên bản mới của HELLO dưới chế độ text-only

cnet -W -s HELLO
-W là tham số xác định chế độ text-only, -s là tham số cho phép hiển thị thống kê
các sự kiện và các hoạt động mạng sau khi kết thúc quá trình mô phỏng.
Tắt quá trình mô phỏng và ghi nhận kết quả thống kê.

2.3 Tìm hiểu CnetNodeinfo trong cnet.h hoặc trong các tài liệu nói về cnet. Sử dụng
những thông tin trong nodeinfo để in ra các thông tin của từng node nhiều nhất có
thể.

2.4 Thêm 2 dòng sau đây vào trên cùng của file HELLO:
nodemtbf = 120000ms
nodemttr = 60000ms
Sau khi bắt đầu chạy, các nodes sẽ đổ sập (crash) 2 phút một lần và mất trung bình
1 phút để reboot. Xuất thông tin nodeinfo.time_in_ms để kiểm trả và trả lời khi nào
reboot_node được gọi?

2.5 Trong phiên bản hello.c có chứa sự kiện timer gọi đến dòng chữ chào mừng 5s
một lần, thêm vào hàm xử lý sự kiện cho EV_KEYBOARDREADY để thay thế dòng
chữ chào mừng tại mỗi node bằng dòng chữ mà người dùng nhập vào.
Thêm vào hàm xử lý sự kiện cho EV_DEBUG1 để xuất ra màn hình dòng chữ chào
mừng bất cứ khi nào Debug1 button được nhấn.
