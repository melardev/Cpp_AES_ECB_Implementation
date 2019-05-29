# Introduction
AES ECB implementation I wrote in C++ many years ago, this was a really old code I have written, I didn't implement
the decryption code thought, sorry. I may come back to this code to implement the decryption routine.
This code is not meant to be used in real world applications obviously, but only for learning, it is easy to read and
not very professional code. I upload it as my <em>souvenir</em> and also for sharing code with beginners that may
want to learn cryptography and find very difficult to read professional code.
To prove this works, you can encrypt your plain text with python:

```py
	from Crypto.Cipher import AES
	key = 'string 2 encrypt'
	cipher = AES.new(key.encode(), AES.MODE_ECB)
	hexed = ""
	encrypted = cipher.encrypt('ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_3'.encode())
	for c in encrypted:
		hexed += "%02x" %c
	print(hexed)
```

# Social Media
- [Youtube](https://youtube.com/Melardev)
- [Twitter](https://twitter.com/@melardev)
- [Instagram](https://instagram.com/melar_dev)