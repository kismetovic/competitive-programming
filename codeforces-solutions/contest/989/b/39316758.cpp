#include <algorithm>
#include <cstdio>

static const int MAXN = 2005;

static int n, p;
static char s[MAXN];

static int dots_ct = 0, dots[MAXN];

int main()
{
    scanf("%d%d%s", &n, &p, s);

    for (int i = 0; i < n; ++i) if (s[i] == '.') {
        dots[dots_ct++] = i;
        s[i] = '0';
    }

    for (int i = 1; i <= (1 << std::min(dots_ct, 19)); ++i) {
        bool is_period = true;
        for (int j = 0; j < n - p; ++j)
            if (s[j] != s[j + p]) { is_period = false; break; }
        if (!is_period) {
            puts(s);
            return 0;
        }
        for (int j = 0; j <= __builtin_ctz(i); ++j)
            s[dots[j]] ^= 1;
    }

    puts("No");
    return 0;
}
