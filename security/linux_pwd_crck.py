'''
Created on Aug 17, 2014

@author: eandill
'''

import crypt
import optparse

def testPass(cryptPass, dname):
    salt = cryptPass[0:2]
    dictFile = open(dname, 'r')
    for word in dictFile.readlines():
        word = word.strip('\n')
        cryptWord = crypt.crypt(word, salt)
        if(cryptWord == cryptPass):
            print "[+] Found password: " + word + "\n"
            return
    print "[-] Password Not Found.\n"
    return

def Main():
    parser = optparse.OptionParser("Usage %prog " + "-f <passwordFile> -d <dictionary>")
    parser.add_option('-f', dest='pname', type='string', help='specify password file')
    parser.add_option('-d', dest='dname', type='string', help='specify dictionary file')
    (options, args) = parser.parse_args()
    if (options.pname == None) | (options.dname == None):
        print parser.usage
        exit(0);
    else:
        pname = options.pname
        dname = options.dname
    
    passFile = open(pname, 'r')
    for line in passFile.readlines():
        if ":" in line:
            user = line.split(":")[0]
            cryptPass = line.split(":")[1].strip(' ')
            print "[*] Cracking password for: " + user
            testPass(cryptPass, dname)

if __name__ == '__main__':
    Main()