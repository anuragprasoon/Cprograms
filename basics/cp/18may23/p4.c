#include <stdio.h>

struct YouTuber {
    int subscribers;
    int views;
};

int main() {
    struct YouTuber youtuber1, youtuber2;

    printf("Enter details for YouTuber 1:\n");
    
    printf("Enter Subscribers: ");
    scanf("%d", &youtuber1.subscribers);
    
    printf("Enter Views: ");
    scanf("%d", &youtuber1.views);

    printf("\nEnter details for YouTuber 2:\n");
    
    printf("Enter Subscribers: ");
    scanf("%d", &youtuber2.subscribers);
    
    printf("Enter Views: ");
    scanf("%d", &youtuber2.views);

    if (youtuber1.subscribers > youtuber2.subscribers && youtuber1.views > youtuber2.views) {
        printf("\nYouTuber 1 is more popular.\n");
    }
    else if (youtuber2.subscribers > youtuber1.subscribers && youtuber2.views > youtuber1.views) {
        printf("\nYouTuber 2 is more popular.\n");
    }
    else {
        printf("\nBoth YouTubers are equally popular.\n");
    }
    
    return 0;
}
