============================================
Vaccinating systems against VM-aware malware
============================================

... and samples evading ollydbg.exe

This tool is accompanied by the blog post at
https://community.rapid7.com/community/infosec/blog/2013/05/07/vaccinating-systems-against-vm-aware-malware

========
Overview
========

* Insert indicators of virtualization and analysis tools into regular system
* Malware detecting and evading these environments won't infect vaccinated systems

Currently, the tool will drop some indicators related to

 - VirtualBox
 - VMWare Workstation
 - Olly Debugger

It could of course be filled with more indicators, mutexes, devices, etc to enhance the inoculation completeness. But as it was developed as a small proof-of-concept - we did not intend to claim any form of completeness.

