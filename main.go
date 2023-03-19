package main

import (
    "fmt"
    "strings"
    "io/ioutil"
)

func main() {
    payload, _ := ioutil.ReadFile("/proc/self/cmdline")
    fmt.Printf("%#v\n", strings.Split(string(payload), "\x00"))
}