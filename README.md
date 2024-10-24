https://github.com/bminor/glibc/commit/5554304f0dddf75dc27cc6250fc53355161fd16a

ubuntu16.04

```
$ docker build -t test .
$ docker run test                             
return_value=3
No matches found or an error occurred.
```

ubuntu18.04

```
$ docker build -t test .
$ docker run test
return_value=0
test.so
```
