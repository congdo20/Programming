public class RunTime {
    public static void main(String[] args) {
        ProcessBuilder pb = new ProcessBuilder("open", "-a", "Calculator");
        try {
            // Khởi chạy ứng dụng Calculator trên macOS
            Process p = pb.start();
            // Đợi quá trình kết thúc nếu cần (không bắt buộc)
            p.waitFor();
        } catch (Exception e) {
            // Hiển thị lỗi chi tiết nếu không thể mở ứng dụng
            System.out.println("Error executing calculator: " + e.getMessage());
            e.printStackTrace(); // In stack trace để biết chính xác lỗi
        }
    }
}

