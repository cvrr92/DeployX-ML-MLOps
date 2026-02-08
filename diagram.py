# import matplotlib.pyplot as plt
# import numpy as np

# # Function to plot superposition principle (constructive and destructive interference)
# x = np.linspace(0, 2*np.pi, 500)
# y1 = np.sin(x)
# y2 = np.sin(x)
# constructive = y1 + y2

# y3 = np.sin(x)
# y4 = -np.sin(x)
# destructive = y3 + y4

# fig, axs = plt.subplots(2, 1, figsize=(8,6))

# # Constructive interference plot
# axs[0].plot(x, y1, '--', label="Wave 1")
# axs[0].plot(x, y2, '--', label="Wave 2")
# axs[0].plot(x, constructive, 'r', label="Resultant (Constructive)")
# axs[0].set_title("Superposition - Constructive Interference")
# axs[0].legend()
# axs[0].grid(True)

# # Destructive interference plot
# axs[1].plot(x, y3, '--', label="Wave 1")
# axs[1].plot(x, y4, '--', label="Wave 2 (opposite phase)")
# axs[1].plot(x, destructive, 'r', label="Resultant (Destructive)")
# axs[1].set_title("Superposition - Destructive Interference")
# axs[1].legend()
# axs[1].grid(True)

# plt.tight_layout()
# plt.show()



# # import numpy as np
# # import matplotlib.pyplot as plt

# # x = np.linspace(0, 10, 100)
# # y = np.sin(x)

# # plt.plot(x,y)
# # plt.title("Test Plot: Sin Wave")
# # plt.show()


from reportlab.lib.pagesizes import A4
from reportlab.lib.styles import getSampleStyleSheet, ParagraphStyle
from reportlab.platypus import SimpleDocTemplate, Paragraph, Spacer, ListFlowable, ListItem

# Create a PDF document
pdf_filename = "/mnt/data/Interference_Notes.pdf"
doc = SimpleDocTemplate(pdf_filename, pagesize=A4)

styles = getSampleStyleSheet()
styles.add(ParagraphStyle(name='Heading', fontSize=14, leading=16, spaceAfter=10, bold=True))
styles.add(ParagraphStyle(name='SubHeading', fontSize=12, leading=14, spaceAfter=8))
styles.add(ParagraphStyle(name='Body', fontSize=11, leading=13, spaceAfter=6))

story = []

# Title
story.append(Paragraph("<b>Physics Notes: Interference of Light</b>", styles['Heading']))
story.append(Spacer(1, 12))

# Coherent Sources
story.append(Paragraph("<b>Coherent Sources (Definition)</b>", styles['SubHeading']))
story.append(Paragraph("Two sources of light are said to be coherent if they emit waves of the same frequency (wavelength) and maintain a constant phase difference. Such sources are necessary to observe a steady interference pattern.", styles['Body']))

story.append(Paragraph("<b>Methods of Obtaining Coherent Sources</b>", styles['SubHeading']))
story.append(Paragraph("1. Division of Wavefront – A single wavefront is divided into parts, behaving like separate coherent sources.", styles['Body']))
story.append(Paragraph("Examples: Young’s Double Slit, Fresnel’s Biprism, Lloyd’s Mirror.", styles['Body']))
story.append(Paragraph("2. Division of Amplitude – A single beam is partially reflected and transmitted into two beams, which interfere.", styles['Body']))
story.append(Paragraph("Examples: Thin films, Newton’s Rings, Michelson’s Interferometer.", styles['Body']))

story.append(Spacer(1, 12))

# Newton's Rings
story.append(Paragraph("<b>Newton’s Rings</b>", styles['SubHeading']))
story.append(Paragraph("Newton’s rings are concentric bright and dark rings formed due to interference of light in a thin air film between a plano-convex lens and a flat glass plate. The center is dark in reflected light.", styles['Body']))
story.append(Paragraph("<b>Formula for Newton’s Rings</b>", styles['Body']))
story.append(Paragraph("For nth dark ring: D<sub>n</sub><sup>2</sup> = 4nλR", styles['Body']))
story.append(Paragraph("For two rings (n and n+p): λ = (D<sub>n+p</sub><sup>2</sup> - D<sub>n</sub><sup>2</sup>) / 4pR", styles['Body']))
story.append(Paragraph("Here: D<sub>n</sub> = diameter of nth ring, p = difference in ring numbers, R = radius of curvature of lens.", styles['Body']))
story.append(Spacer(1, 12))

# Wedge-shaped film
story.append(Paragraph("<b>Interference in Wedge-shaped Film</b>", styles['SubHeading']))
story.append(Paragraph("When a thin wedge-shaped film of air (or liquid) is formed between two glass plates inclined at a small angle, alternate dark and bright straight fringes are observed due to interference.", styles['Body']))
story.append(Paragraph("<b>Conditions:</b>", styles['Body']))
story.append(Paragraph("Dark fringe: 2t = mλ", styles['Body']))
story.append(Paragraph("Bright fringe: 2t = (2m+1)λ/2", styles['Body']))
story.append(Paragraph("<b>Fringe Width:</b> Δx = λ / (2θ)", styles['Body']))
story.append(Paragraph("Uses: To measure thickness of a thin wire/foil and test surface flatness.", styles['Body']))

doc.build(story)

pdf_filename
