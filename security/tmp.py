import pxssh

try:                                                            
    s = pxssh.pxssh()
    hostname = '192.168.1.111'
    username = 'pi'
    password = 'raspi123'
    s.login (hostname, username, password)
    s.sendline ('uptime')  # run a command
    s.prompt()             # match the prompt
    print s.before         # print everything before the prompt.
    s.logout()
except pxssh.ExceptionPxssh, e:
    print "pxssh failed on login."
    print str(e)