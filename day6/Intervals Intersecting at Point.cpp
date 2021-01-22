//https://binarysearch.com/room/Array-of-Sunshine-Dgq6O8JTQr?questionsetIndex=3
// Intervals Intersecting at Point

int solve(vector<vector<int>>& intervals, int time) {
    int size = intervals.size(), count = 0;
    for (int i = 0; i < size; i++) count += (time >= intervals[i][0]) and (intervals[i][1] >= time);
    return count;
}
