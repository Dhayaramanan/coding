#include <stdio.h>

int main()
{
    int test_cases;
    scanf("%d", &test_cases);

    for (int i = 0; i < test_cases; ++i)
    {
        int exam_start_time;
        int number_of_episodes;
        int each_episode_duration; //in minutes

        scanf("%d%d%d", &exam_start_time, &number_of_episodes, &each_episode_duration);

        if ((number_of_episodes * each_episode_duration) < exam_start_time)
        {
            puts("YES");
        }
        else
        {
            puts("NO");
        }
    }

    return 0;
}