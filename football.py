# -*- coding: utf-8 -*-
"""
Created on Mon Aug  5 15:08:29 2019

@author: SAI
"""
import numpy as np

N=int(input())


for i in range(1,N+1):
    n=int(input())
    g = list(map(int,input().split()))
    f = list(map(int,input().split()))
    
    goal=np.array(g)
    foul=np.array(f)

    goal1 = goal*20
    foul1 = foul*10
    gt = goal1.sum()
    ft = foul1.sum()
    total = goal1-foul1
    m = total.max()
    if m<0:
        print("0")
    else:
        print(m)
    
    
    
    
    