def convert(s):
    words=[words for words in s.split(' ')]
    return ' '.join(sorted(list(set(words))))

print(convert('sakhi was a singer because her mother was a singer and sakhi\' mother was a singer because her father was a singer '))