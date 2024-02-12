#include "colormap.h"
#include <vector>

namespace cx::graphics {

using ColorList = std::vector<QColor>;

// Spectral rainbow scheme taken0from:
// http://colorbrewer2.org/
inline const ColorList SPECTRALRAINBOW_3{
    QColor(252, 141, 89),
    QColor(255, 255, 191),
    QColor(153, 213, 148)
};

inline const ColorList SPECTRALRAINBOW_4{
    QColor(215, 25, 28), QColor(253, 174, 97),
    QColor(171, 221, 164), QColor(43, 131, 186)
};

inline const ColorList SPECTRALRAINBOW_5{
    QColor(215, 25, 28), QColor(253, 174, 97),
    QColor(255, 255, 191), QColor(171, 221, 164),
    QColor(43, 131, 186)
};

inline const ColorList SPECTRALRAINBOW_6{
    QColor(213, 62, 79), QColor(252, 141, 89),
    QColor(254, 224, 139), QColor(230, 245, 152),
    QColor(153, 213, 148), QColor(50, 136, 189)
};

inline const ColorList SPECTRALRAINBOW_7{
    QColor(213, 62, 79),   QColor(252, 141, 89),
    QColor(254, 224, 139), QColor(255, 255, 191),
    QColor(230, 245, 152), QColor(153, 213, 148),
    QColor(50, 136, 189)
};

const ColorList SPECTRALRAINBOW_8{
    QColor(213, 62, 79),   QColor(244, 109, 67),
    QColor(253, 174, 97),  QColor(254, 224, 139),
    QColor(230, 245, 152), QColor(171, 221, 164),
    QColor(102, 194, 165), QColor(50, 136, 189)
};

const ColorList SPECTRALRAINBOW_9{
    QColor(213, 62, 79),   QColor(244, 109, 67),  QColor(253, 174, 97),
    QColor(254, 224, 139), QColor(255, 255, 191), QColor(230, 245, 152),
    QColor(171, 221, 164), QColor(102, 194, 165), QColor(50, 136, 189)
};

const ColorList SPECTRALRAINBOW_10{
    QColor(158, 1, 66),    QColor(213, 62, 79),
    QColor(244, 109, 67),  QColor(253, 174, 97),
    QColor(254, 224, 139), QColor(230, 245, 152),
    QColor(171, 221, 164), QColor(102, 194, 165),
    QColor(50, 136, 189),  QColor(94, 79, 162)
};

const ColorList SPECTRALRAINBOW_11{
    QColor(158, 1, 66),    QColor(213, 62, 79),   QColor(244, 109, 67),
    QColor(253, 174, 97),  QColor(254, 224, 139), QColor(255, 255, 191),
    QColor(230, 245, 152), QColor(171, 221, 164), QColor(102, 194, 165),
    QColor(50, 136, 189),  QColor(94, 79, 162)
};

const ColorList QUALITATIVE_DARK_14{
    QColor(129, 137, 206), QColor(203, 203, 56), QColor(196, 71, 58),
    QColor(129, 213, 192), QColor(80, 60, 40),   QColor(203, 165, 166),
    QColor(199, 80, 130),  QColor(183, 89, 202), QColor(110, 212, 85),
    QColor(85, 124, 63),   QColor(86, 51, 89),   QColor(194, 133, 61),
    QColor(87, 122, 132),  QColor(195, 207, 132)
};

const ColorList QUALITATIVE_LIGHT_14{
    QColor(221, 193, 228), QColor(195, 224, 136), QColor(133, 224, 221),
    QColor(232, 173, 112), QColor(197, 190, 168), QColor(149, 223, 174),
    QColor(167, 203, 228), QColor(237, 177, 157), QColor(220, 198, 111),
    QColor(220, 208, 153), QColor(228, 176, 190), QColor(211, 218, 214),
    QColor(196, 220, 177), QColor(167, 222, 204)
};

const ColorList MATERIAL_DESIGN_PALETTE_20{
    QColor(63, 81, 181),  QColor(255, 152, 0),   QColor(244, 67, 54),
    QColor(76, 175, 80),  QColor(156, 39, 176),  QColor(232, 30, 99),
    QColor(0, 0, 0),      QColor(103, 58, 183),  QColor(33, 150, 243),
    QColor(3, 169, 244),  QColor(0, 150, 136),   QColor(255, 235, 59),
    QColor(139, 195, 74), QColor(96, 125, 139),  QColor(205, 220, 57),
    QColor(255, 87, 34),  QColor(0, 188, 212),   QColor(121, 85, 72),
    QColor(255, 193, 7),  QColor(158, 158, 158),
};


const ColorList MAGMA_PALETTE{
    QColor::fromRgbF(1.46159096e-03f, 4.66127766e-04f, 1.38655200e-02f),
    QColor::fromRgbF(2.25764007e-03f, 1.29495431e-03f, 1.83311461e-02f),
    QColor::fromRgbF(3.27943222e-03f, 2.30452991e-03f, 2.37083291e-02f),
    QColor::fromRgbF(4.51230222e-03f, 3.49037666e-03f, 2.99647059e-02f),
    QColor::fromRgbF(5.94976987e-03f, 4.84285000e-03f, 3.71296695e-02f),
    QColor::fromRgbF(7.58798550e-03f, 6.35613622e-03f, 4.49730774e-02f),
    QColor::fromRgbF(9.42604390e-03f, 8.02185006e-03f, 5.28443561e-02f),
    QColor::fromRgbF(1.14654337e-02f, 9.82831486e-03f, 6.07496380e-02f),
    QColor::fromRgbF(1.37075706e-02f, 1.17705913e-02f, 6.86665843e-02f),
    QColor::fromRgbF(1.61557566e-02f, 1.38404966e-02f, 7.66026660e-02f),
    QColor::fromRgbF(1.88153670e-02f, 1.60262753e-02f, 8.45844897e-02f),
    QColor::fromRgbF(2.16919340e-02f, 1.83201254e-02f, 9.26101050e-02f),
    QColor::fromRgbF(2.47917814e-02f, 2.07147875e-02f, 1.00675555e-01f),
    QColor::fromRgbF(2.81228154e-02f, 2.32009284e-02f, 1.08786954e-01f),
    QColor::fromRgbF(3.16955304e-02f, 2.57651161e-02f, 1.16964722e-01f),
    QColor::fromRgbF(3.55204468e-02f, 2.83974570e-02f, 1.25209396e-01f),
    QColor::fromRgbF(3.96084872e-02f, 3.10895652e-02f, 1.33515085e-01f),
    QColor::fromRgbF(4.38295350e-02f, 3.38299885e-02f, 1.41886249e-01f),
    QColor::fromRgbF(4.80616391e-02f, 3.66066101e-02f, 1.50326989e-01f),
    QColor::fromRgbF(5.23204388e-02f, 3.94066020e-02f, 1.58841025e-01f),
    QColor::fromRgbF(5.66148978e-02f, 4.21598925e-02f, 1.67445592e-01f),
    QColor::fromRgbF(6.09493930e-02f, 4.47944924e-02f, 1.76128834e-01f),
    QColor::fromRgbF(6.53301801e-02f, 4.73177796e-02f, 1.84891506e-01f),
    QColor::fromRgbF(6.97637296e-02f, 4.97264666e-02f, 1.93735088e-01f),
    QColor::fromRgbF(7.42565152e-02f, 5.20167766e-02f, 2.02660374e-01f),
    QColor::fromRgbF(7.88150034e-02f, 5.41844801e-02f, 2.11667355e-01f),
    QColor::fromRgbF(8.34456313e-02f, 5.62249365e-02f, 2.20755099e-01f),
    QColor::fromRgbF(8.81547730e-02f, 5.81331465e-02f, 2.29921611e-01f),
    QColor::fromRgbF(9.29486914e-02f, 5.99038167e-02f, 2.39163669e-01f),
    QColor::fromRgbF(9.78334770e-02f, 6.15314414e-02f, 2.48476662e-01f),
    QColor::fromRgbF(1.02814972e-01f, 6.30104053e-02f, 2.57854400e-01f),
    QColor::fromRgbF(1.07898679e-01f, 6.43351102e-02f, 2.67288933e-01f),
    QColor::fromRgbF(1.13094451e-01f, 6.54920358e-02f, 2.76783978e-01f),
    QColor::fromRgbF(1.18405035e-01f, 6.64791593e-02f, 2.86320656e-01f),
    QColor::fromRgbF(1.23832651e-01f, 6.72946449e-02f, 2.95879431e-01f),
    QColor::fromRgbF(1.29380192e-01f, 6.79349264e-02f, 3.05442931e-01f),
    QColor::fromRgbF(1.35053322e-01f, 6.83912798e-02f, 3.14999890e-01f),
    QColor::fromRgbF(1.40857952e-01f, 6.86540710e-02f, 3.24537640e-01f),
    QColor::fromRgbF(1.46785234e-01f, 6.87382323e-02f, 3.34011109e-01f),
    QColor::fromRgbF(1.52839217e-01f, 6.86368599e-02f, 3.43404450e-01f),
    QColor::fromRgbF(1.59017511e-01f, 6.83540225e-02f, 3.52688028e-01f),
    QColor::fromRgbF(1.65308131e-01f, 6.79108689e-02f, 3.61816426e-01f),
    QColor::fromRgbF(1.71713033e-01f, 6.73053260e-02f, 3.70770827e-01f),
    QColor::fromRgbF(1.78211730e-01f, 6.65758073e-02f, 3.79497161e-01f),
    QColor::fromRgbF(1.84800877e-01f, 6.57324381e-02f, 3.87972507e-01f),
    QColor::fromRgbF(1.91459745e-01f, 6.48183312e-02f, 3.96151969e-01f),
    QColor::fromRgbF(1.98176877e-01f, 6.38624166e-02f, 4.04008953e-01f),
    QColor::fromRgbF(2.04934882e-01f, 6.29066192e-02f, 4.11514273e-01f),
    QColor::fromRgbF(2.11718061e-01f, 6.19917876e-02f, 4.18646741e-01f),
    QColor::fromRgbF(2.18511590e-01f, 6.11584918e-02f, 4.25391816e-01f),
    QColor::fromRgbF(2.25302032e-01f, 6.04451843e-02f, 4.31741767e-01f),
    QColor::fromRgbF(2.32076515e-01f, 5.98886855e-02f, 4.37694665e-01f),
    QColor::fromRgbF(2.38825991e-01f, 5.95170384e-02f, 4.43255999e-01f),
    QColor::fromRgbF(2.45543175e-01f, 5.93524384e-02f, 4.48435938e-01f),
    QColor::fromRgbF(2.52220252e-01f, 5.94147119e-02f, 4.53247729e-01f),
    QColor::fromRgbF(2.58857304e-01f, 5.97055998e-02f, 4.57709924e-01f),
    QColor::fromRgbF(2.65446744e-01f, 6.02368754e-02f, 4.61840297e-01f),
    QColor::fromRgbF(2.71994089e-01f, 6.09935552e-02f, 4.65660375e-01f),
    QColor::fromRgbF(2.78493300e-01f, 6.19778136e-02f, 4.69190328e-01f),
    QColor::fromRgbF(2.84951097e-01f, 6.31676261e-02f, 4.72450879e-01f),
    QColor::fromRgbF(2.91365817e-01f, 6.45534486e-02f, 4.75462193e-01f),
    QColor::fromRgbF(2.97740413e-01f, 6.61170432e-02f, 4.78243482e-01f),
    QColor::fromRgbF(3.04080941e-01f, 6.78353452e-02f, 4.80811572e-01f),
    QColor::fromRgbF(3.10382027e-01f, 6.97024767e-02f, 4.83186340e-01f),
    QColor::fromRgbF(3.16654235e-01f, 7.16895272e-02f, 4.85380429e-01f),
    QColor::fromRgbF(3.22899126e-01f, 7.37819504e-02f, 4.87408399e-01f),
    QColor::fromRgbF(3.29114038e-01f, 7.59715081e-02f, 4.89286796e-01f),
    QColor::fromRgbF(3.35307503e-01f, 7.82361045e-02f, 4.91024144e-01f),
    QColor::fromRgbF(3.41481725e-01f, 8.05635079e-02f, 4.92631321e-01f),
    QColor::fromRgbF(3.47635742e-01f, 8.29463512e-02f, 4.94120923e-01f),
    QColor::fromRgbF(3.53773161e-01f, 8.53726329e-02f, 4.95501096e-01f),
    QColor::fromRgbF(3.59897941e-01f, 8.78311772e-02f, 4.96778331e-01f),
    QColor::fromRgbF(3.66011928e-01f, 9.03143031e-02f, 4.97959963e-01f),
    QColor::fromRgbF(3.72116205e-01f, 9.28159917e-02f, 4.99053326e-01f),
    QColor::fromRgbF(3.78210547e-01f, 9.53322947e-02f, 5.00066568e-01f),
    QColor::fromRgbF(3.84299445e-01f, 9.78549106e-02f, 5.01001964e-01f),
    QColor::fromRgbF(3.90384361e-01f, 1.00379466e-01f, 5.01864236e-01f),
    QColor::fromRgbF(3.96466670e-01f, 1.02902194e-01f, 5.02657590e-01f),
    QColor::fromRgbF(4.02547663e-01f, 1.05419865e-01f, 5.03385761e-01f),
    QColor::fromRgbF(4.08628505e-01f, 1.07929771e-01f, 5.04052118e-01f),
    QColor::fromRgbF(4.14708664e-01f, 1.10431177e-01f, 5.04661843e-01f),
    QColor::fromRgbF(4.20791157e-01f, 1.12920210e-01f, 5.05214935e-01f),
    QColor::fromRgbF(4.26876965e-01f, 1.15395258e-01f, 5.05713602e-01f),
    QColor::fromRgbF(4.32967001e-01f, 1.17854987e-01f, 5.06159754e-01f),
    QColor::fromRgbF(4.39062114e-01f, 1.20298314e-01f, 5.06555026e-01f),
    QColor::fromRgbF(4.45163096e-01f, 1.22724371e-01f, 5.06900806e-01f),
    QColor::fromRgbF(4.51270678e-01f, 1.25132484e-01f, 5.07198258e-01f),
    QColor::fromRgbF(4.57385535e-01f, 1.27522145e-01f, 5.07448336e-01f),
    QColor::fromRgbF(4.63508291e-01f, 1.29892998e-01f, 5.07651812e-01f),
    QColor::fromRgbF(4.69639514e-01f, 1.32244819e-01f, 5.07809282e-01f),
    QColor::fromRgbF(4.75779723e-01f, 1.34577500e-01f, 5.07921193e-01f),
    QColor::fromRgbF(4.81928997e-01f, 1.36891390e-01f, 5.07988509e-01f),
    QColor::fromRgbF(4.88088169e-01f, 1.39186217e-01f, 5.08010737e-01f),
    QColor::fromRgbF(4.94257673e-01f, 1.41462106e-01f, 5.07987836e-01f),
    QColor::fromRgbF(5.00437834e-01f, 1.43719323e-01f, 5.07919772e-01f),
    QColor::fromRgbF(5.06628929e-01f, 1.45958202e-01f, 5.07806420e-01f),
    QColor::fromRgbF(5.12831195e-01f, 1.48179144e-01f, 5.07647570e-01f),
    QColor::fromRgbF(5.19044825e-01f, 1.50382611e-01f, 5.07442938e-01f),
    QColor::fromRgbF(5.25269968e-01f, 1.52569121e-01f, 5.07192172e-01f),
    QColor::fromRgbF(5.31506735e-01f, 1.54739247e-01f, 5.06894860e-01f),
    QColor::fromRgbF(5.37755194e-01f, 1.56893613e-01f, 5.06550538e-01f),
    QColor::fromRgbF(5.44015371e-01f, 1.59032895e-01f, 5.06158696e-01f),
    QColor::fromRgbF(5.50287252e-01f, 1.61157816e-01f, 5.05718782e-01f),
    QColor::fromRgbF(5.56570783e-01f, 1.63269149e-01f, 5.05230210e-01f),
    QColor::fromRgbF(5.62865867e-01f, 1.65367714e-01f, 5.04692365e-01f),
    QColor::fromRgbF(5.69172368e-01f, 1.67454379e-01f, 5.04104606e-01f),
    QColor::fromRgbF(5.75490107e-01f, 1.69530062e-01f, 5.03466273e-01f),
    QColor::fromRgbF(5.81818864e-01f, 1.71595728e-01f, 5.02776690e-01f),
    QColor::fromRgbF(5.88158375e-01f, 1.73652392e-01f, 5.02035167e-01f),
    QColor::fromRgbF(5.94508337e-01f, 1.75701122e-01f, 5.01241011e-01f),
    QColor::fromRgbF(6.00868399e-01f, 1.77743036e-01f, 5.00393522e-01f),
    QColor::fromRgbF(6.07238169e-01f, 1.79779309e-01f, 4.99491999e-01f),
    QColor::fromRgbF(6.13617209e-01f, 1.81811170e-01f, 4.98535746e-01f),
    QColor::fromRgbF(6.20005032e-01f, 1.83839907e-01f, 4.97524075e-01f),
    QColor::fromRgbF(6.26401108e-01f, 1.85866869e-01f, 4.96456304e-01f),
    QColor::fromRgbF(6.32804854e-01f, 1.87893468e-01f, 4.95331769e-01f),
    QColor::fromRgbF(6.39215638e-01f, 1.89921182e-01f, 4.94149821e-01f),
    QColor::fromRgbF(6.45632778e-01f, 1.91951556e-01f, 4.92909832e-01f),
    QColor::fromRgbF(6.52055535e-01f, 1.93986210e-01f, 4.91611196e-01f),
    QColor::fromRgbF(6.58483116e-01f, 1.96026835e-01f, 4.90253338e-01f),
    QColor::fromRgbF(6.64914668e-01f, 1.98075202e-01f, 4.88835712e-01f),
    QColor::fromRgbF(6.71349279e-01f, 2.00133166e-01f, 4.87357807e-01f),
    QColor::fromRgbF(6.77785975e-01f, 2.02202663e-01f, 4.85819154e-01f),
    QColor::fromRgbF(6.84223712e-01f, 2.04285721e-01f, 4.84219325e-01f),
    QColor::fromRgbF(6.90661380e-01f, 2.06384461e-01f, 4.82557941e-01f),
    QColor::fromRgbF(6.97097796e-01f, 2.08501100e-01f, 4.80834678e-01f),
    QColor::fromRgbF(7.03531700e-01f, 2.10637956e-01f, 4.79049270e-01f),
    QColor::fromRgbF(7.09961888e-01f, 2.12797337e-01f, 4.77201121e-01f),
    QColor::fromRgbF(7.16387038e-01f, 2.14981693e-01f, 4.75289780e-01f),
    QColor::fromRgbF(7.22805451e-01f, 2.17193831e-01f, 4.73315708e-01f),
    QColor::fromRgbF(7.29215521e-01f, 2.19436516e-01f, 4.71278924e-01f),
    QColor::fromRgbF(7.35615545e-01f, 2.21712634e-01f, 4.69179541e-01f),
    QColor::fromRgbF(7.42003713e-01f, 2.24025196e-01f, 4.67017774e-01f),
    QColor::fromRgbF(7.48378107e-01f, 2.26377345e-01f, 4.64793954e-01f),
    QColor::fromRgbF(7.54736692e-01f, 2.28772352e-01f, 4.62508534e-01f),
    QColor::fromRgbF(7.61077312e-01f, 2.31213625e-01f, 4.60162106e-01f),
    QColor::fromRgbF(7.67397681e-01f, 2.33704708e-01f, 4.57755411e-01f),
    QColor::fromRgbF(7.73695380e-01f, 2.36249283e-01f, 4.55289354e-01f),
    QColor::fromRgbF(7.79967847e-01f, 2.38851170e-01f, 4.52765022e-01f),
    QColor::fromRgbF(7.86212372e-01f, 2.41514325e-01f, 4.50183695e-01f),
    QColor::fromRgbF(7.92426972e-01f, 2.44242250e-01f, 4.47543155e-01f),
    QColor::fromRgbF(7.98607760e-01f, 2.47039798e-01f, 4.44848441e-01f),
    QColor::fromRgbF(8.04751511e-01f, 2.49911350e-01f, 4.42101615e-01f),
    QColor::fromRgbF(8.10854841e-01f, 2.52861399e-01f, 4.39304963e-01f),
    QColor::fromRgbF(8.16914186e-01f, 2.55894550e-01f, 4.36461074e-01f),
    QColor::fromRgbF(8.22925797e-01f, 2.59015505e-01f, 4.33572874e-01f),
    QColor::fromRgbF(8.28885740e-01f, 2.62229049e-01f, 4.30643647e-01f),
    QColor::fromRgbF(8.34790818e-01f, 2.65539703e-01f, 4.27671352e-01f),
    QColor::fromRgbF(8.40635680e-01f, 2.68952874e-01f, 4.24665620e-01f),
    QColor::fromRgbF(8.46415804e-01f, 2.72473491e-01f, 4.21631064e-01f),
    QColor::fromRgbF(8.52126490e-01f, 2.76106469e-01f, 4.18572767e-01f),
    QColor::fromRgbF(8.57762870e-01f, 2.79856666e-01f, 4.15496319e-01f),
    QColor::fromRgbF(8.63320397e-01f, 2.83729003e-01f, 4.12402889e-01f),
    QColor::fromRgbF(8.68793368e-01f, 2.87728205e-01f, 4.09303002e-01f),
    QColor::fromRgbF(8.74176342e-01f, 2.91858679e-01f, 4.06205397e-01f),
    QColor::fromRgbF(8.79463944e-01f, 2.96124596e-01f, 4.03118034e-01f),
    QColor::fromRgbF(8.84650824e-01f, 3.00530090e-01f, 4.00047060e-01f),
    QColor::fromRgbF(8.89731418e-01f, 3.05078817e-01f, 3.97001559e-01f),
    QColor::fromRgbF(8.94700194e-01f, 3.09773445e-01f, 3.93994634e-01f),
    QColor::fromRgbF(8.99551884e-01f, 3.14616425e-01f, 3.91036674e-01f),
    QColor::fromRgbF(9.04281297e-01f, 3.19609981e-01f, 3.88136889e-01f),
    QColor::fromRgbF(9.08883524e-01f, 3.24755126e-01f, 3.85308008e-01f),
    QColor::fromRgbF(9.13354091e-01f, 3.30051947e-01f, 3.82563414e-01f),
    QColor::fromRgbF(9.17688852e-01f, 3.35500068e-01f, 3.79915138e-01f),
    QColor::fromRgbF(9.21884187e-01f, 3.41098112e-01f, 3.77375977e-01f),
    QColor::fromRgbF(9.25937102e-01f, 3.46843685e-01f, 3.74959077e-01f),
    QColor::fromRgbF(9.29845090e-01f, 3.52733817e-01f, 3.72676513e-01f),
    QColor::fromRgbF(9.33606454e-01f, 3.58764377e-01f, 3.70540883e-01f),
    QColor::fromRgbF(9.37220874e-01f, 3.64929312e-01f, 3.68566525e-01f),
    QColor::fromRgbF(9.40687443e-01f, 3.71224168e-01f, 3.66761699e-01f),
    QColor::fromRgbF(9.44006448e-01f, 3.77642889e-01f, 3.65136328e-01f),
    QColor::fromRgbF(9.47179528e-01f, 3.84177874e-01f, 3.63701130e-01f),
    QColor::fromRgbF(9.50210150e-01f, 3.90819546e-01f, 3.62467694e-01f),
    QColor::fromRgbF(9.53099077e-01f, 3.97562894e-01f, 3.61438431e-01f),
    QColor::fromRgbF(9.55849237e-01f, 4.04400213e-01f, 3.60619076e-01f),
    QColor::fromRgbF(9.58464079e-01f, 4.11323666e-01f, 3.60014232e-01f),
    QColor::fromRgbF(9.60949221e-01f, 4.18323245e-01f, 3.59629789e-01f),
    QColor::fromRgbF(9.63310281e-01f, 4.25389724e-01f, 3.59469020e-01f),
    QColor::fromRgbF(9.65549351e-01f, 4.32518707e-01f, 3.59529151e-01f),
    QColor::fromRgbF(9.67671128e-01f, 4.39702976e-01f, 3.59810172e-01f),
    QColor::fromRgbF(9.69680441e-01f, 4.46935635e-01f, 3.60311120e-01f),
    QColor::fromRgbF(9.71582181e-01f, 4.54210170e-01f, 3.61030156e-01f),
    QColor::fromRgbF(9.73381238e-01f, 4.61520484e-01f, 3.61964652e-01f),
    QColor::fromRgbF(9.75082439e-01f, 4.68860936e-01f, 3.63111292e-01f),
    QColor::fromRgbF(9.76690494e-01f, 4.76226350e-01f, 3.64466162e-01f),
    QColor::fromRgbF(9.78209957e-01f, 4.83612031e-01f, 3.66024854e-01f),
    QColor::fromRgbF(9.79645181e-01f, 4.91013764e-01f, 3.67782559e-01f),
    QColor::fromRgbF(9.81000291e-01f, 4.98427800e-01f, 3.69734157e-01f),
    QColor::fromRgbF(9.82279159e-01f, 5.05850848e-01f, 3.71874301e-01f),
    QColor::fromRgbF(9.83485387e-01f, 5.13280054e-01f, 3.74197501e-01f),
    QColor::fromRgbF(9.84622298e-01f, 5.20712972e-01f, 3.76698186e-01f),
    QColor::fromRgbF(9.85692925e-01f, 5.28147545e-01f, 3.79370774e-01f),
    QColor::fromRgbF(9.86700017e-01f, 5.35582070e-01f, 3.82209724e-01f),
    QColor::fromRgbF(9.87646038e-01f, 5.43015173e-01f, 3.85209578e-01f),
    QColor::fromRgbF(9.88533173e-01f, 5.50445778e-01f, 3.88365009e-01f),
    QColor::fromRgbF(9.89363341e-01f, 5.57873075e-01f, 3.91670846e-01f),
    QColor::fromRgbF(9.90138201e-01f, 5.65296495e-01f, 3.95122099e-01f),
    QColor::fromRgbF(9.90871208e-01f, 5.72706259e-01f, 3.98713971e-01f),
    QColor::fromRgbF(9.91558165e-01f, 5.80106828e-01f, 4.02441058e-01f),
    QColor::fromRgbF(9.92195728e-01f, 5.87501706e-01f, 4.06298792e-01f),
    QColor::fromRgbF(9.92784669e-01f, 5.94891088e-01f, 4.10282976e-01f),
    QColor::fromRgbF(9.93325561e-01f, 6.02275297e-01f, 4.14389658e-01f),
    QColor::fromRgbF(9.93834412e-01f, 6.09643540e-01f, 4.18613221e-01f),
    QColor::fromRgbF(9.94308514e-01f, 6.16998953e-01f, 4.22949672e-01f),
    QColor::fromRgbF(9.94737698e-01f, 6.24349657e-01f, 4.27396771e-01f),
    QColor::fromRgbF(9.95121854e-01f, 6.31696376e-01f, 4.31951492e-01f),
    QColor::fromRgbF(9.95480469e-01f, 6.39026596e-01f, 4.36607159e-01f),
    QColor::fromRgbF(9.95809924e-01f, 6.46343897e-01f, 4.41360951e-01f),
    QColor::fromRgbF(9.96095703e-01f, 6.53658756e-01f, 4.46213021e-01f),
    QColor::fromRgbF(9.96341406e-01f, 6.60969379e-01f, 4.51160201e-01f),
    QColor::fromRgbF(9.96579803e-01f, 6.68255621e-01f, 4.56191814e-01f),
    QColor::fromRgbF(9.96774784e-01f, 6.75541484e-01f, 4.61314158e-01f),
    QColor::fromRgbF(9.96925427e-01f, 6.82827953e-01f, 4.66525689e-01f),
    QColor::fromRgbF(9.97077185e-01f, 6.90087897e-01f, 4.71811461e-01f),
    QColor::fromRgbF(9.97186253e-01f, 6.97348991e-01f, 4.77181727e-01f),
    QColor::fromRgbF(9.97253982e-01f, 7.04610791e-01f, 4.82634651e-01f),
    QColor::fromRgbF(9.97325180e-01f, 7.11847714e-01f, 4.88154375e-01f),
    QColor::fromRgbF(9.97350983e-01f, 7.19089119e-01f, 4.93754665e-01f),
    QColor::fromRgbF(9.97350583e-01f, 7.26324415e-01f, 4.99427972e-01f),
    QColor::fromRgbF(9.97341259e-01f, 7.33544671e-01f, 5.05166839e-01f),
    QColor::fromRgbF(9.97284689e-01f, 7.40771893e-01f, 5.10983331e-01f),
    QColor::fromRgbF(9.97228367e-01f, 7.47980563e-01f, 5.16859378e-01f),
    QColor::fromRgbF(9.97138480e-01f, 7.55189852e-01f, 5.22805996e-01f),
    QColor::fromRgbF(9.97019342e-01f, 7.62397883e-01f, 5.28820775e-01f),
    QColor::fromRgbF(9.96898254e-01f, 7.69590975e-01f, 5.34892341e-01f),
    QColor::fromRgbF(9.96726862e-01f, 7.76794860e-01f, 5.41038571e-01f),
    QColor::fromRgbF(9.96570645e-01f, 7.83976508e-01f, 5.47232992e-01f),
    QColor::fromRgbF(9.96369065e-01f, 7.91167346e-01f, 5.53498939e-01f),
    QColor::fromRgbF(9.96162309e-01f, 7.98347709e-01f, 5.59819643e-01f),
    QColor::fromRgbF(9.95932448e-01f, 8.05527126e-01f, 5.66201824e-01f),
    QColor::fromRgbF(9.95680107e-01f, 8.12705773e-01f, 5.72644795e-01f),
    QColor::fromRgbF(9.95423973e-01f, 8.19875302e-01f, 5.79140130e-01f),
    QColor::fromRgbF(9.95131288e-01f, 8.27051773e-01f, 5.85701463e-01f),
    QColor::fromRgbF(9.94851089e-01f, 8.34212826e-01f, 5.92307093e-01f),
    QColor::fromRgbF(9.94523666e-01f, 8.41386618e-01f, 5.98982818e-01f),
    QColor::fromRgbF(9.94221900e-01f, 8.48540474e-01f, 6.05695903e-01f),
    QColor::fromRgbF(9.93865767e-01f, 8.55711038e-01f, 6.12481798e-01f),
    QColor::fromRgbF(9.93545285e-01f, 8.62858846e-01f, 6.19299300e-01f),
    QColor::fromRgbF(9.93169558e-01f, 8.70024467e-01f, 6.26189463e-01f),
    QColor::fromRgbF(9.92830963e-01f, 8.77168404e-01f, 6.33109148e-01f),
    QColor::fromRgbF(9.92439881e-01f, 8.84329694e-01f, 6.40099465e-01f),
    QColor::fromRgbF(9.92089454e-01f, 8.91469549e-01f, 6.47116021e-01f),
    QColor::fromRgbF(9.91687744e-01f, 8.98627050e-01f, 6.54201544e-01f),
    QColor::fromRgbF(9.91331929e-01f, 9.05762748e-01f, 6.61308839e-01f),
    QColor::fromRgbF(9.90929685e-01f, 9.12915010e-01f, 6.68481201e-01f),
    QColor::fromRgbF(9.90569914e-01f, 9.20048699e-01f, 6.75674592e-01f),
    QColor::fromRgbF(9.90174637e-01f, 9.27195612e-01f, 6.82925602e-01f),
    QColor::fromRgbF(9.89814839e-01f, 9.34328540e-01f, 6.90198194e-01f),
    QColor::fromRgbF(9.89433736e-01f, 9.41470354e-01f, 6.97518628e-01f),
    QColor::fromRgbF(9.89077438e-01f, 9.48604077e-01f, 7.04862519e-01f),
    QColor::fromRgbF(9.88717064e-01f, 9.55741520e-01f, 7.12242232e-01f),
    QColor::fromRgbF(9.88367028e-01f, 9.62878026e-01f, 7.19648627e-01f),
    QColor::fromRgbF(9.88032885e-01f, 9.70012413e-01f, 7.27076773e-01f),
    QColor::fromRgbF(9.87690702e-01f, 9.77154231e-01f, 7.34536205e-01f),
    QColor::fromRgbF(9.87386827e-01f, 9.84287561e-01f, 7.42001547e-01f),
    QColor::fromRgbF(9.87052509e-01f, 9.91437853e-01f, 7.49504188e-01f),
};



const ColorList VIRIDIS_PALETTE {
    QColor::fromRgbF(0.26700401f, 0.00487433f, 0.32941519f),
    QColor::fromRgbF(0.26851048f, 0.00960483f, 0.33542652f),
    QColor::fromRgbF(0.26994384f, 0.01462494f, 0.34137895f),
    QColor::fromRgbF(0.27130489f, 0.01994186f, 0.34726862f),
    QColor::fromRgbF(0.27259384f, 0.02556309f, 0.35309303f),
    QColor::fromRgbF(0.27380934f, 0.03149748f, 0.35885256f),
    QColor::fromRgbF(0.27495242f, 0.03775181f, 0.36454323f),
    QColor::fromRgbF(0.27602238f, 0.04416723f, 0.37016418f),
    QColor::fromRgbF(0.27701840f, 0.05034437f, 0.37571452f),
    QColor::fromRgbF(0.27794143f, 0.05632444f, 0.38119074f),
    QColor::fromRgbF(0.27879067f, 0.06214536f, 0.38659204f),
    QColor::fromRgbF(0.27956550f, 0.06783587f, 0.39191723f),
    QColor::fromRgbF(0.28026658f, 0.07341724f, 0.39716349f),
    QColor::fromRgbF(0.28089358f, 0.07890703f, 0.40232944f),
    QColor::fromRgbF(0.28144581f, 0.08431970f, 0.40741404f),
    QColor::fromRgbF(0.28192358f, 0.08966622f, 0.41241521f),
    QColor::fromRgbF(0.28232739f, 0.09495545f, 0.41733086f),
    QColor::fromRgbF(0.28265633f, 0.10019576f, 0.42216032f),
    QColor::fromRgbF(0.28291049f, 0.10539345f, 0.42690202f),
    QColor::fromRgbF(0.28309095f, 0.11055307f, 0.43155375f),
    QColor::fromRgbF(0.28319704f, 0.11567966f, 0.43611482f),
    QColor::fromRgbF(0.28322882f, 0.12077701f, 0.44058404f),
    QColor::fromRgbF(0.28318684f, 0.12584799f, 0.44400000f),
    QColor::fromRgbF(0.28307200f, 0.13089477f, 0.44924127f),
    QColor::fromRgbF(0.28288389f, 0.13592005f, 0.45342734f),
    QColor::fromRgbF(0.28262297f, 0.14092556f, 0.45751726f),
    QColor::fromRgbF(0.28229037f, 0.14591233f, 0.46150995f),
    QColor::fromRgbF(0.28188676f, 0.15088147f, 0.46540474f),
    QColor::fromRgbF(0.28141228f, 0.15583425f, 0.46920128f),
    QColor::fromRgbF(0.28086773f, 0.16077132f, 0.47289909f),
    QColor::fromRgbF(0.28025468f, 0.16569272f, 0.47649762f),
    QColor::fromRgbF(0.27957399f, 0.17059884f, 0.47999675f),
    QColor::fromRgbF(0.27882618f, 0.17549020f, 0.48339654f),
    QColor::fromRgbF(0.27801236f, 0.18036684f, 0.48669702f),
    QColor::fromRgbF(0.27713437f, 0.18522836f, 0.48989831f),
    QColor::fromRgbF(0.27619376f, 0.19007447f, 0.49300074f),
    QColor::fromRgbF(0.27519116f, 0.19490540f, 0.49600488f),
    QColor::fromRgbF(0.27412802f, 0.19972086f, 0.49891131f),
    QColor::fromRgbF(0.27300596f, 0.20452049f, 0.50172076f),
    QColor::fromRgbF(0.27182812f, 0.20930306f, 0.50443413f),
    QColor::fromRgbF(0.27059473f, 0.21406899f, 0.50705243f),
    QColor::fromRgbF(0.26930756f, 0.21881782f, 0.50957678f),
    QColor::fromRgbF(0.26796846f, 0.22354911f, 0.51200840f),
    QColor::fromRgbF(0.26657984f, 0.22826210f, 0.51434870f),
    QColor::fromRgbF(0.26514450f, 0.23295593f, 0.51659930f),
    QColor::fromRgbF(0.26366320f, 0.23763078f, 0.51876163f),
    QColor::fromRgbF(0.26213801f, 0.24228619f, 0.52083736f),
    QColor::fromRgbF(0.26057103f, 0.24692170f, 0.52282822f),
    QColor::fromRgbF(0.25896451f, 0.25153685f, 0.52473609f),
    QColor::fromRgbF(0.25732244f, 0.25613040f, 0.52656332f),
    QColor::fromRgbF(0.25564519f, 0.26070284f, 0.52831152f),
    QColor::fromRgbF(0.25393498f, 0.26525384f, 0.52998273f),
    QColor::fromRgbF(0.25219404f, 0.26978306f, 0.53157905f),
    QColor::fromRgbF(0.25042462f, 0.27429024f, 0.53310261f),
    QColor::fromRgbF(0.24862899f, 0.27877509f, 0.53455561f),
    QColor::fromRgbF(0.24681140f, 0.28323662f, 0.53594093f),
    QColor::fromRgbF(0.24497208f, 0.28767547f, 0.53726018f),
    QColor::fromRgbF(0.24311324f, 0.29209154f, 0.53851561f),
    QColor::fromRgbF(0.24123708f, 0.29648471f, 0.53970946f),
    QColor::fromRgbF(0.23934575f, 0.30085494f, 0.54084398f),
    QColor::fromRgbF(0.23744138f, 0.30520222f, 0.54192140f),
    QColor::fromRgbF(0.23552606f, 0.30952657f, 0.54294396f),
    QColor::fromRgbF(0.23360277f, 0.31382773f, 0.54391424f),
    QColor::fromRgbF(0.23167350f, 0.31810580f, 0.54483444f),
    QColor::fromRgbF(0.22973926f, 0.32236127f, 0.54570633f),
    QColor::fromRgbF(0.22780192f, 0.32659432f, 0.54653200f),
    QColor::fromRgbF(0.22586330f, 0.33080515f, 0.54731353f),
    QColor::fromRgbF(0.22392515f, 0.33499400f, 0.54805291f),
    QColor::fromRgbF(0.22198915f, 0.33916114f, 0.54875211f),
    QColor::fromRgbF(0.22005691f, 0.34330688f, 0.54941304f),
    QColor::fromRgbF(0.21812995f, 0.34743154f, 0.55003755f),
    QColor::fromRgbF(0.21620971f, 0.35153548f, 0.55062743f),
    QColor::fromRgbF(0.21429757f, 0.35561907f, 0.55118440f),
    QColor::fromRgbF(0.21239477f, 0.35968273f, 0.55171011f),
    QColor::fromRgbF(0.21050310f, 0.36372671f, 0.55220646f),
    QColor::fromRgbF(0.20862342f, 0.36775151f, 0.55267486f),
    QColor::fromRgbF(0.20675628f, 0.37175775f, 0.55311653f),
    QColor::fromRgbF(0.20490257f, 0.37574589f, 0.55353282f),
    QColor::fromRgbF(0.20306309f, 0.37971644f, 0.55392505f),
    QColor::fromRgbF(0.20123854f, 0.38366989f, 0.55429441f),
    QColor::fromRgbF(0.19942950f, 0.38760678f, 0.55464205f),
    QColor::fromRgbF(0.19763650f, 0.39152762f, 0.55496905f),
    QColor::fromRgbF(0.19585993f, 0.39543297f, 0.55527637f),
    QColor::fromRgbF(0.19410009f, 0.39932336f, 0.55556494f),
    QColor::fromRgbF(0.19235719f, 0.40319934f, 0.55583559f),
    QColor::fromRgbF(0.19063135f, 0.40706148f, 0.55608907f),
    QColor::fromRgbF(0.18892259f, 0.41091033f, 0.55632606f),
    QColor::fromRgbF(0.18723083f, 0.41474645f, 0.55654717f),
    QColor::fromRgbF(0.18555593f, 0.41857040f, 0.55675292f),
    QColor::fromRgbF(0.18389763f, 0.42238275f, 0.55694377f),
    QColor::fromRgbF(0.18225561f, 0.42618405f, 0.55712010f),
    QColor::fromRgbF(0.18062949f, 0.42997486f, 0.55728221f),
    QColor::fromRgbF(0.17901879f, 0.43375572f, 0.55743035f),
    QColor::fromRgbF(0.17742298f, 0.43752720f, 0.55756466f),
    QColor::fromRgbF(0.17584148f, 0.44128981f, 0.55768526f),
    QColor::fromRgbF(0.17427363f, 0.44504410f, 0.55779216f),
    QColor::fromRgbF(0.17271876f, 0.44879060f, 0.55788532f),
    QColor::fromRgbF(0.17117615f, 0.45252980f, 0.55796464f),
    QColor::fromRgbF(0.16964573f, 0.45626209f, 0.55803034f),
    QColor::fromRgbF(0.16812641f, 0.45998802f, 0.55808199f),
    QColor::fromRgbF(0.16661710f, 0.46370813f, 0.55811913f),
    QColor::fromRgbF(0.16511703f, 0.46742290f, 0.55814141f),
    QColor::fromRgbF(0.16362543f, 0.47113278f, 0.55814842f),
    QColor::fromRgbF(0.16214155f, 0.47483821f, 0.55813967f),
    QColor::fromRgbF(0.16066467f, 0.47853961f, 0.55811466f),
    QColor::fromRgbF(0.15919413f, 0.48223740f, 0.55807280f),
    QColor::fromRgbF(0.15772933f, 0.48593197f, 0.55801347f),
    QColor::fromRgbF(0.15626973f, 0.48962370f, 0.55793600f),
    QColor::fromRgbF(0.15481488f, 0.49331293f, 0.55783967f),
    QColor::fromRgbF(0.15336445f, 0.49700003f, 0.55772371f),
    QColor::fromRgbF(0.15191820f, 0.50068529f, 0.55758733f),
    QColor::fromRgbF(0.15047605f, 0.50436904f, 0.55742968f),
    QColor::fromRgbF(0.14903918f, 0.50805136f, 0.55725050f),
    QColor::fromRgbF(0.14760731f, 0.51173263f, 0.55704861f),
    QColor::fromRgbF(0.14618026f, 0.51541316f, 0.55682271f),
    QColor::fromRgbF(0.14475863f, 0.51909319f, 0.55657181f),
    QColor::fromRgbF(0.14334327f, 0.52277292f, 0.55629491f),
    QColor::fromRgbF(0.14193527f, 0.52645254f, 0.55599097f),
    QColor::fromRgbF(0.14053599f, 0.53013219f, 0.55565893f),
    QColor::fromRgbF(0.13914708f, 0.53381201f, 0.55529773f),
    QColor::fromRgbF(0.13777048f, 0.53749213f, 0.55490625f),
    QColor::fromRgbF(0.13640850f, 0.54117264f, 0.55448339f),
    QColor::fromRgbF(0.13506561f, 0.54485335f, 0.55402906f),
    QColor::fromRgbF(0.13374299f, 0.54853458f, 0.55354108f),
    QColor::fromRgbF(0.13244401f, 0.55221637f, 0.55301828f),
    QColor::fromRgbF(0.13117249f, 0.55589872f, 0.55245948f),
    QColor::fromRgbF(0.12993270f, 0.55958162f, 0.55186354f),
    QColor::fromRgbF(0.12872938f, 0.56326503f, 0.55122927f),
    QColor::fromRgbF(0.12756771f, 0.56694891f, 0.55055551f),
    QColor::fromRgbF(0.12645338f, 0.57063316f, 0.54984110f),
    QColor::fromRgbF(0.12539383f, 0.57431754f, 0.54908564f),
    QColor::fromRgbF(0.12439474f, 0.57800205f, 0.54828740f),
    QColor::fromRgbF(0.12346281f, 0.58168661f, 0.54744498f),
    QColor::fromRgbF(0.12260562f, 0.58537105f, 0.54655722f),
    QColor::fromRgbF(0.12183122f, 0.58905521f, 0.54562298f),
    QColor::fromRgbF(0.12114807f, 0.59273889f, 0.54464114f),
    QColor::fromRgbF(0.12056501f, 0.59642187f, 0.54361058f),
    QColor::fromRgbF(0.12009154f, 0.60010387f, 0.54253043f),
    QColor::fromRgbF(0.11973756f, 0.60378459f, 0.54139999f),
    QColor::fromRgbF(0.11951163f, 0.60746388f, 0.54021751f),
    QColor::fromRgbF(0.11942341f, 0.61114146f, 0.53898192f),
    QColor::fromRgbF(0.11948255f, 0.61481702f, 0.53769219f),
    QColor::fromRgbF(0.11969858f, 0.61849025f, 0.53634733f),
    QColor::fromRgbF(0.12008079f, 0.62216081f, 0.53494633f),
    QColor::fromRgbF(0.12063824f, 0.62582833f, 0.53348834f),
    QColor::fromRgbF(0.12137972f, 0.62949242f, 0.53197275f),
    QColor::fromRgbF(0.12231244f, 0.63315277f, 0.53039808f),
    QColor::fromRgbF(0.12344358f, 0.63680899f, 0.52876343f),
    QColor::fromRgbF(0.12477953f, 0.64046069f, 0.52706792f),
    QColor::fromRgbF(0.12632581f, 0.64410744f, 0.52531069f),
    QColor::fromRgbF(0.12808703f, 0.64774881f, 0.52349092f),
    QColor::fromRgbF(0.13006688f, 0.65138436f, 0.52160791f),
    QColor::fromRgbF(0.13226797f, 0.65501363f, 0.51966086f),
    QColor::fromRgbF(0.13469183f, 0.65863619f, 0.51764880f),
    QColor::fromRgbF(0.13733921f, 0.66225157f, 0.51557101f),
    QColor::fromRgbF(0.14020991f, 0.66585927f, 0.51342680f),
    QColor::fromRgbF(0.14330291f, 0.66945881f, 0.51121549f),
    QColor::fromRgbF(0.14661640f, 0.67304968f, 0.50893644f),
    QColor::fromRgbF(0.15014782f, 0.67663139f, 0.50658890f),
    QColor::fromRgbF(0.15389405f, 0.68020343f, 0.50417217f),
    QColor::fromRgbF(0.15785146f, 0.68376525f, 0.50168574f),
    QColor::fromRgbF(0.16201598f, 0.68731632f, 0.49912906f),
    QColor::fromRgbF(0.16638320f, 0.69085611f, 0.49650163f),
    QColor::fromRgbF(0.17094840f, 0.69438405f, 0.49380294f),
    QColor::fromRgbF(0.17570671f, 0.69789960f, 0.49103252f),
    QColor::fromRgbF(0.18065314f, 0.70140222f, 0.48818938f),
    QColor::fromRgbF(0.18578266f, 0.70489133f, 0.48527326f),
    QColor::fromRgbF(0.19109018f, 0.70836635f, 0.48228395f),
    QColor::fromRgbF(0.19657063f, 0.71182668f, 0.47922108f),
    QColor::fromRgbF(0.20221902f, 0.71527175f, 0.47608431f),
    QColor::fromRgbF(0.20803045f, 0.71870095f, 0.47287330f),
    QColor::fromRgbF(0.21400015f, 0.72211371f, 0.46958774f),
    QColor::fromRgbF(0.22012381f, 0.72550945f, 0.46622638f),
    QColor::fromRgbF(0.22639690f, 0.72888753f, 0.46278934f),
    QColor::fromRgbF(0.23281498f, 0.73224735f, 0.45927675f),
    QColor::fromRgbF(0.23937390f, 0.73558828f, 0.45568838f),
    QColor::fromRgbF(0.24606968f, 0.73890972f, 0.45202405f),
    QColor::fromRgbF(0.25289851f, 0.74221104f, 0.44828355f),
    QColor::fromRgbF(0.25985676f, 0.74549162f, 0.44446673f),
    QColor::fromRgbF(0.26694127f, 0.74875084f, 0.44057284f),
    QColor::fromRgbF(0.27414922f, 0.75198807f, 0.43660090f),
    QColor::fromRgbF(0.28147681f, 0.75520266f, 0.43255207f),
    QColor::fromRgbF(0.28892102f, 0.75839399f, 0.42842626f),
    QColor::fromRgbF(0.29647899f, 0.76156142f, 0.42422341f),
    QColor::fromRgbF(0.30414796f, 0.76470433f, 0.41994346f),
    QColor::fromRgbF(0.31192534f, 0.76782207f, 0.41558638f),
    QColor::fromRgbF(0.31980860f, 0.77091403f, 0.41115215f),
    QColor::fromRgbF(0.32779580f, 0.77397953f, 0.40664011f),
    QColor::fromRgbF(0.33588539f, 0.77701790f, 0.40204917f),
    QColor::fromRgbF(0.34407411f, 0.78002855f, 0.39738103f),
    QColor::fromRgbF(0.35235985f, 0.78301086f, 0.39263579f),
    QColor::fromRgbF(0.36074053f, 0.78596419f, 0.38781353f),
    QColor::fromRgbF(0.36921420f, 0.78888793f, 0.38291438f),
    QColor::fromRgbF(0.37777892f, 0.79178146f, 0.37793850f),
    QColor::fromRgbF(0.38643282f, 0.79464415f, 0.37288606f),
    QColor::fromRgbF(0.39517408f, 0.79747541f, 0.36775726f),
    QColor::fromRgbF(0.40400101f, 0.80027461f, 0.36255223f),
    QColor::fromRgbF(0.41291350f, 0.80304099f, 0.35726893f),
    QColor::fromRgbF(0.42190813f, 0.80577412f, 0.35191009f),
    QColor::fromRgbF(0.43098317f, 0.80847343f, 0.34647607f),
    QColor::fromRgbF(0.44013691f, 0.81113836f, 0.34096730f),
    QColor::fromRgbF(0.44936763f, 0.81376835f, 0.33538426f),
    QColor::fromRgbF(0.45867362f, 0.81636288f, 0.32972749f),
    QColor::fromRgbF(0.46805314f, 0.81892143f, 0.32399761f),
    QColor::fromRgbF(0.47750446f, 0.82144351f, 0.31819529f),
    QColor::fromRgbF(0.48702580f, 0.82392862f, 0.31232133f),
    QColor::fromRgbF(0.49661536f, 0.82637633f, 0.30637661f),
    QColor::fromRgbF(0.50627130f, 0.82878621f, 0.30036211f),
    QColor::fromRgbF(0.51599182f, 0.83115784f, 0.29427888f),
    QColor::fromRgbF(0.52577622f, 0.83349064f, 0.28812650f),
    QColor::fromRgbF(0.53562110f, 0.83578452f, 0.28190832f),
    QColor::fromRgbF(0.54552440f, 0.83803918f, 0.27562602f),
    QColor::fromRgbF(0.55548397f, 0.84025437f, 0.26928147f),
    QColor::fromRgbF(0.56549760f, 0.84242990f, 0.26287683f),
    QColor::fromRgbF(0.57556297f, 0.84456561f, 0.25641457f),
    QColor::fromRgbF(0.58567772f, 0.84666139f, 0.24989748f),
    QColor::fromRgbF(0.59583934f, 0.84871722f, 0.24332878f),
    QColor::fromRgbF(0.60604528f, 0.85073310f, 0.23671214f),
    QColor::fromRgbF(0.61629283f, 0.85270912f, 0.23005179f),
    QColor::fromRgbF(0.62657923f, 0.85464543f, 0.22335258f),
    QColor::fromRgbF(0.63690157f, 0.85654226f, 0.21662012f),
    QColor::fromRgbF(0.64725685f, 0.85839991f, 0.20986086f),
    QColor::fromRgbF(0.65764197f, 0.86021878f, 0.20308229f),
    QColor::fromRgbF(0.66805369f, 0.86199932f, 0.19629307f),
    QColor::fromRgbF(0.67848868f, 0.86374211f, 0.18950326f),
    QColor::fromRgbF(0.68894351f, 0.86544779f, 0.18272455f),
    QColor::fromRgbF(0.69941463f, 0.86711711f, 0.17597055f),
    QColor::fromRgbF(0.70989842f, 0.86875092f, 0.16925712f),
    QColor::fromRgbF(0.72039115f, 0.87035015f, 0.16260273f),
    QColor::fromRgbF(0.73088902f, 0.87191584f, 0.15602894f),
    QColor::fromRgbF(0.74138803f, 0.87344918f, 0.14956101f),
    QColor::fromRgbF(0.75188414f, 0.87495143f, 0.14322828f),
    QColor::fromRgbF(0.76237342f, 0.87642392f, 0.13706449f),
    QColor::fromRgbF(0.77285183f, 0.87786808f, 0.13110864f),
    QColor::fromRgbF(0.78331535f, 0.87928545f, 0.12540538f),
    QColor::fromRgbF(0.79375994f, 0.88067763f, 0.12000532f),
    QColor::fromRgbF(0.80418159f, 0.88204632f, 0.11496505f),
    QColor::fromRgbF(0.81457634f, 0.88339329f, 0.11034678f),
    QColor::fromRgbF(0.82494028f, 0.88472036f, 0.10621724f),
    QColor::fromRgbF(0.83526959f, 0.88602943f, 0.10264590f),
    QColor::fromRgbF(0.84556056f, 0.88732243f, 0.09970219f),
    QColor::fromRgbF(0.85580960f, 0.88860134f, 0.09745186f),
    QColor::fromRgbF(0.86601325f, 0.88986815f, 0.09595277f),
    QColor::fromRgbF(0.87616824f, 0.89112487f, 0.09525046f),
    QColor::fromRgbF(0.88627146f, 0.89237353f, 0.09537439f),
    QColor::fromRgbF(0.89632002f, 0.89361614f, 0.09633538f),
    QColor::fromRgbF(0.90631121f, 0.89485467f, 0.09812496f),
    QColor::fromRgbF(0.91624212f, 0.89609127f, 0.10071680f),
    QColor::fromRgbF(0.92610579f, 0.89732977f, 0.10407067f),
    QColor::fromRgbF(0.93590444f, 0.89857040f, 0.10813094f),
    QColor::fromRgbF(0.94563626f, 0.89981500f, 0.11283773f),
    QColor::fromRgbF(0.95529972f, 0.90106534f, 0.11812832f),
    QColor::fromRgbF(0.96489353f, 0.90232311f, 0.12394051f),
    QColor::fromRgbF(0.97441665f, 0.90358991f, 0.13021494f),
    QColor::fromRgbF(0.98386829f, 0.90486726f, 0.13689671f),
    QColor::fromRgbF(0.99324789f, 0.90615657f, 0.1439362f),
};

const auto &colorListFromColorMap(const ColorMap &map) {
    switch(map) {
	case ColorMap::Viridis: return VIRIDIS_PALETTE;
	case ColorMap::Magma: return MAGMA_PALETTE;
	default: return VIRIDIS_PALETTE;
    }
}

QColor LinearColorMap::operator()(float value) const {
  Q_ASSERT(value <= maxValue);
  Q_ASSERT(value >= minValue);
  const auto &colors = colorListFromColorMap(colorMap);
  if (minValue == maxValue)
    return colors[0];
  auto position = static_cast<size_t>(
      (value - minValue) * (static_cast<float>(colors.size()) - 1.0)
      / (maxValue - minValue)
  );
  return colors[std::min(position, colors.size() - 1)];
}

}
