#include <stdio.h>
#include <glob.h>

int main() {
    glob_t glob_result;
    int return_value;
    size_t i;

    // 使用glob()函数来匹配*.so文件
    return_value = glob("*.so", 1, NULL, &glob_result);
    printf("return_value=%d\n", return_value);
    if (return_value == 0) {
        // 输出匹配的文件
        for (i = 0; i < glob_result.gl_pathc; ++i) {
            printf("%s\n", glob_result.gl_pathv[i]);
        }
    } else {
        printf("No matches found or an error occurred.\n");
    }

    // 释放glob()分配的内存
    globfree(&glob_result);

    return 0;
}

