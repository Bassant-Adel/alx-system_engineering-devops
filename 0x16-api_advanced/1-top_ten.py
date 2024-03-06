#!/usr/bin/python3
""" Write function query """
import requests


def top_ten(subreddit):
    """ first (10) hot posts """
    red = "https://www.reddit.com/r/{}/hot/.json".format(subreddit)
    headers = {
        "User-Agent": "linux:0x16.api.advanced:v1.0.0 (by /u/bdov_)"
    }
    params = {
        "limit": 10
    }
    response = requests.get(red, headers=headers, params=params,
                            allow_redirects=False)

    if response.status_code == 404:
        print("None")
        return
    results = response.json().get("data")
    [print(r.get("data").get("title")) for r in results.get("children")]
