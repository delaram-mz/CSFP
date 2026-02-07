import pandas as pd
import matplotlib.pyplot as plt

# Load CSV
df = pd.read_csv("/home/fmohammadzad/CSFP/evaluation/c17/c17.csv")

# Plot
plt.figure()
plt.plot(df["numOfTV"], df["FLT_Coverage"], marker='o', label="FLT Coverage")
plt.plot(df["numOfTV"], df["GIC_Coverage"], marker='s', label="GIC Coverage")

# Labels and title
plt.xlabel("Number of Test Vectors")
plt.ylabel("Coverage")
plt.title("Fault Coverage vs Number of Test Vectors")

# Grid and legend
plt.grid(True)
plt.legend()


# Save and show
plt.savefig("coverage_plot.png", dpi=300, bbox_inches="tight")
plt.show()