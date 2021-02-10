import os
import numpy as np
import pandas as pd
from sklearn.model_selection import train_test_split
from sklearn.naive_bayes import GaussianNB
from sklearn.metrics import accuracy_score
import matplotlib.pyplot as plt
import seaborn as sns

os.chdir('/home/abhi/Downloads/PredictTheCulpret/Data/')

train = pd.read_csv("criminal_train.csv") 
test = pd.read_csv("criminal_test.csv") 

x1 = train.drop('Villain', axis=1)
y1 = train['Villain']

x1_train,x1_test,y1_train,y1_test = train_test_split(x1, y1, test_size=0.99, random_state=100)

model = GaussianNB() #naive_bayes
model.fit(x1_train,y1_train)

y2_pred = model.predict(test)

#accuracy = accuracy_score(y1_test,y1_pred)*100 --> was around 71%
#accuracy

sub = pd.DataFrame({'ID': test['ID'], 'Villain': y2_pred })
sub.to_csv("subfinalnaive.csv", index=False)
print('end')
