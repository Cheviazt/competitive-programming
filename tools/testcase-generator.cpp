#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <filesystem>
#include <random>
#include <cstdlib>

namespace fs = std::filesystem;

const std::string BASE_DIR = "C:\\Kuliah\\BCC\\SOAL\\Internal Contest 1\\Bunga Tarsyuk";
const std::string SOL_SRC  = BASE_DIR + "\\submissions\\accepted\\solution.cpp";
const std::string SOL_EXE  = BASE_DIR + "\\submissions\\accepted\\solution.exe";
const std::string SAMPLE_DIR = BASE_DIR + "\\data\\sample";
const std::string SECRET_DIR = BASE_DIR + "\\data\\secret";

std::mt19937_64 rng(13377331ULL);

long long rand_range(long long l, long long r) {
    std::uniform_int_distribution<long long> dist(l, r);
    return dist(rng);
}

void write_testcase(const fs::path& in_path, const std::vector<int>& queries) {
    std::ofstream out(in_path);
    out << queries.size() << "\n";
    for (int n : queries) {
        out << n << "\n";
    }
    out.flush();
    out.close();
}

void run_solution(const fs::path& in_path, const fs::path& ans_path) {
    // Format cmd.exe /s /c ""exe" < "in" > "ans"" agar aman terhadap path berspasi di Windows
    std::string cmd = "cmd.exe /s /c \"\"" + SOL_EXE + "\" < \"" + in_path.string() + "\" > \"" + ans_path.string() + "\"\"";
    int ret = std::system(cmd.c_str());
    if (ret != 0) {
        std::cerr << "Gagal mengeksekusi solution pada: " << in_path.string() << "\n";
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    // 1. Buat direktori output jika belum tersedia
    fs::create_directories(SAMPLE_DIR);
    fs::create_directories(SECRET_DIR);

    // 2. Kompilasi solution.cpp
    std::cout << "[INFO] Mengompilasi solution.cpp...\n";
    std::string compile_cmd = "g++ -O3 -std=c++17 \"" + SOL_SRC + "\" -o \"" + SOL_EXE + "\"";
    int compile_res = std::system(compile_cmd.c_str());
    if (compile_res != 0) {
        std::cerr << "[ERROR] Gagal mengompilasi solution.cpp. Periksa path dan compiler C++!\n";
        return 1;
    }
    std::cout << "[INFO] Kompilasi berhasil.\n";

    // 3. Generate Sample Testcases (0-indexed)
    std::cout << "[INFO] Membuat sample testcase...\n";
    
    // Sample 0: Sesuai data di problem.pdf (T=7)
    {
        fs::path in_file = fs::path(SAMPLE_DIR) / "0.in";
        fs::path ans_file = fs::path(SAMPLE_DIR) / "0.ans";
        std::vector<int> sample0 = {1, 3, 4, 5, 2, 10, 1000000};
        write_testcase(in_file, sample0);
        run_solution(in_file, ans_file);
    }

    // 4. Generate Secret Testcases (10 files: 0.in - 9.in)
    std::cout << "[INFO] Membuat secret testcases...\n";

    // Kasus Sederhana (0.in - 4.in): Ukuran kecil, mudah diverifikasi manual
    // 0.in: Kasus batas terkecil mutlak N = 1, 2
    {
        fs::path in_file = fs::path(SECRET_DIR) / "0.in";
        fs::path ans_file = fs::path(SECRET_DIR) / "0.ans";
        write_testcase(in_file, {1, 2, 1});
        run_solution(in_file, ans_file);
    }

    // 1.in: Nilai kecil berurutan N = 1 s.d. 8
    {
        fs::path in_file = fs::path(SECRET_DIR) / "1.in";
        fs::path ans_file = fs::path(SECRET_DIR) / "1.ans";
        std::vector<int> q;
        for (int i = 1; i <= 8; ++i) q.push_back(i);
        write_testcase(in_file, q);
        run_solution(in_file, ans_file);
    }

    // 2.in: Nilai repetitif identik untuk menguji stabilitas I/O
    {
        fs::path in_file = fs::path(SECRET_DIR) / "2.in";
        fs::path ans_file = fs::path(SECRET_DIR) / "2.ans";
        std::vector<int> q;
        for (int i = 0; i < 20; ++i) q.push_back(3);
        write_testcase(in_file, q);
        run_solution(in_file, ans_file);
    }

    // 3.in: Variasi kecil N <= 20
    {
        fs::path in_file = fs::path(SECRET_DIR) / "3.in";
        fs::path ans_file = fs::path(SECRET_DIR) / "3.ans";
        std::vector<int> q = {4, 6, 7, 9, 11, 13, 15, 18, 20};
        write_testcase(in_file, q);
        run_solution(in_file, ans_file);
    }

    // 4.in: Kasus transisi kecil ke menengah (N = 25 s.d. 100)
    {
        fs::path in_file = fs::path(SECRET_DIR) / "4.in";
        fs::path ans_file = fs::path(SECRET_DIR) / "4.ans";
        std::vector<int> q;
        for (int i = 0; i < 50; ++i) q.push_back((int)rand_range(25, 100));
        write_testcase(in_file, q);
        run_solution(in_file, ans_file);
    }

    // Kasus Lanjutan & Edge Case (5.in - 9.in)
    // 5.in: Edge case nilai batas maksimum N = 10^6
    {
        fs::path in_file = fs::path(SECRET_DIR) / "5.in";
        fs::path ans_file = fs::path(SECRET_DIR) / "5.ans";
        std::vector<int> q = {1000000, 999999, 1000000, 999998, 1};
        write_testcase(in_file, q);
        run_solution(in_file, ans_file);
    }

    // 6.in: Kasus pangkat 2 dan highly composite (N = 2^k, 60, 120, 2520, dst.)
    {
        fs::path in_file = fs::path(SECRET_DIR) / "6.in";
        fs::path ans_file = fs::path(SECRET_DIR) / "6.ans";
        std::vector<int> q = {
            2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048, 4096, 8192, 16384, 32768, 65536,
            12, 24, 36, 48, 60, 120, 180, 240, 360, 720, 840, 1260, 1680, 2520, 5040, 7560,
            10080, 15120, 20160, 25200, 27720, 45360, 50400, 55440, 83160, 110880, 720720
        };
        write_testcase(in_file, q);
        run_solution(in_file, ans_file);
    }

    // 7.in: Nilai prima besar di bawah batas maksimum
    {
        fs::path in_file = fs::path(SECRET_DIR) / "7.in";
        fs::path ans_file = fs::path(SECRET_DIR) / "7.ans";
        std::vector<int> q = {999983, 999979, 999961, 999959, 999953, 999931, 999917, 999907};
        write_testcase(in_file, q);
        run_solution(in_file, ans_file);
    }

    // 8.in: Kasus acak medium scale (T = 5.000, 100 <= N <= 50.000)
    {
        fs::path in_file = fs::path(SECRET_DIR) / "8.in";
        fs::path ans_file = fs::path(SECRET_DIR) / "8.ans";
        int t = 5000;
        std::vector<int> q;
        q.reserve(t);
        for (int i = 0; i < t; ++i) {
            q.push_back((int)rand_range(100, 50000));
        }
        write_testcase(in_file, q);
        run_solution(in_file, ans_file);
    }

    // 9.in: Large constraint stress test (T = 50.000, 1 <= N <= 10^6)
    // Ukuran file input ~400 KB, total gabungan seluruh testcase aman jauh di bawah 5 MB.
    {
        fs::path in_file = fs::path(SECRET_DIR) / "9.in";
        fs::path ans_file = fs::path(SECRET_DIR) / "9.ans";
        int t = 50000;
        std::vector<int> q;
        q.reserve(t);
        for (int i = 0; i < t; ++i) {
            q.push_back((int)rand_range(1, 1000000));
        }
        write_testcase(in_file, q);
        run_solution(in_file, ans_file);
    }

    std::cout << "[SUCCESS] Seluruh sample dan secret testcases berhasil dibuat!\n";
    return 0;
}