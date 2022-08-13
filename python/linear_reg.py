import numpy as np
import matplotlib.pyplot as plt

def coef(x,y):
    n = np.size(x)

    mean_x = np.mean(x)
    mean_y = np.mean(y)

    SSY = np.sum(y*x) - n*mean_y*mean_x
    SSX = np.sum(x*x) - n*mean_x*mean_x

    b1 = SSY / SSX
    b0 = mean_y - b1*mean_x
    return (b0, b1)

def plot_regression_line(x,y,b):
    plt.scatter(x,y,color="m", marker="o", s=20)
    y_pred = b[0] + b[1]*x

    plt.plot(x,y_pred,color='g')
    plt.show()

def main():
    x = np.array([0,1,2,3,4,5,6,7,8,9])
    y = np.array([1,3,2,5,7,8,8,9,10,12])
    b = coef(x,y)
    print(b)
#    plot_regression_line(x,y,b)

if __name__ == "__main__":
    main()
