@echo off
start nginx.exe
if not "%1" == "h" mshta vbscript:createobject("wscript.shell").run("rathole client.toml",0)(window.close)&&exit