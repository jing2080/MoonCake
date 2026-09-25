// ============================================================
//  mooncake_compile_hell.hpp
//
//  终极月饼编译地狱 · 同时报错 · 又臭又长
//  目标：编译一次，输出几百行 warning + error，全是月饼
// ============================================================

#pragma once

#include <string>
#include <iostream>
#include <stdexcept>

// ============================================================
// 第一层：编译期直接打印月饼启动日志
// ============================================================

#pragma message("============================================================")
#pragma message("  [MOONCAKE BUILD SYSTEM] Initializing mooncake factory...")
#pragma message("  Checking Oolong tea level... OK")
#pragma message("  Checking five kernel filling... WARNING: shortage rumor")
#pragma message("  Checking lotus seed paste sweetness... 8.74 (required: 8.75)")
#pragma message("  Checking salted egg yolk position... NOT CENTERED")
#pragma message("  Checking kitchen cat... SITTING ON MOLD")
#pragma message("  Checking golden syrup viscosity... OFF BY 0.001cp")
#pragma message("  Checking peanut oil container... NOT MOON DUST STEEL")
#pragma message("  Checking mooncake sentience... YES, IT IS ASKING ABOUT CALORIES")
#pragma message("  Moon Goddess authorization code: AUTH-CHANG-E-15-8-42-6-9-88")
#pragma message("============================================================")

// ============================================================
// 第二层：#warning 月饼警告五连发
// ============================================================

#ifdef __GNUC__
#warning "Orchestrator did not have enough Oolong tea to stay awake!"
#warning "Five kernel filling shortage rumor detected!"
#warning "Lotus seed paste sweetness is not exactly 8.75!"
#warning "Salted egg yolk is not exactly centered!"
#warning "Mooncake mold license expired in this solar system!"
#warning "Kitchen cat is sitting on the mooncake mold!"
#warning "Golden syrup viscosity is off by 0.001 centipoise!"
#warning "Peanut oil container is not made of moon dust stainless steel!"
#warning "Mooncake has developed sentience and is asking about calories!"
#warning "Moon Goddess authorization code is invalid!"
#endif

#pragma GCC warning "Mooncake factory is running in deprecated mode. Please upgrade to Moon Goddess edition."

// ============================================================
// 第三层：[[deprecated]] 月饼 API 废弃警告
// ============================================================

[[deprecated("This mooncake API is deprecated. Please use the Moon Goddess authorized version.")]]
inline void old_mooncake_building_sequence() {}

[[deprecated("Five kernel filling is deprecated due to shortage rumor. Use lotus seed paste instead.")]]
inline void five_kernel_mooncake() {}

[[deprecated("This function has been replaced by MooncakeFactoryBuilderSingletonManagerProviderLocatorCoordinatorOrchestrator.")]]
inline void simple_mooncake() {}

[[deprecated("Salted egg yolk centering API is deprecated. Yolk is not centered anyway.")]]
inline void center_salted_egg_yolk() {}

[[deprecated("Oolong tea checking API is deprecated. Orchestrator is still sleepy.")]]
inline void check_oolong_tea() {}

// ============================================================
// 第四层：[[nodiscard]] 忽略返回值就炸
// ============================================================

[[nodiscard("Mooncake return value must be checked! Or the Moon Goddess will be angry.")]]
inline int make_mooncake() { return 8; }

[[nodiscard("Five kernel filling count must be checked! Shortage rumor is real.")]]
inline int count_five_kernel_filling() { return 0; }

[[nodiscard("Lotus seed paste sweetness must be checked! Required 8.75.")]]
inline double measure_lotus_seed_paste_sweetness() { return 8.74; }

// ============================================================
// 第五层：超长类名 + 超长函数名
// ============================================================

class MooncakeFactoryBuilderSingletonManagerProviderLocatorCoordinatorOrchestrator {
public:
    void initiateMooncakeBuildingSequenceWithAuthorizationCodeFromTheMoonGoddess(
        std::string authCode, int sugarLevel, double viscosity) {
        (void)authCode; (void)sugarLevel; (void)viscosity;
    }

    void verifyOrchestratorBootSequenceCompletedSuccessfullyAfterLastMidAutumnFestival(
        std::string festivalName, int year, bool moonGoddessApproval) {
        (void)festivalName; (void)year; (void)moonGoddessApproval;
    }

    void ensureLocatorIsNotPanickingDueToRecentFiveKernelFillingShortageRumors(
        bool rumorDetected, int rumorSeverity, std::string rumorSource) {
        (void)rumorDetected; (void)rumorSeverity; (void)rumorSource;
    }
};

// ============================================================
// 第六层：枚举类型不匹配
// ============================================================

enum class MooncakeFilling {
    LotusSeedPaste,
    SaltedEggYolk,
    FiveKernel
};

enum class MooncakeSize {
    Small,
    Medium,
    Large
};

enum class MooncakePackaging {
    GoldenFoil,
    LuxuryBox,
    MoonDustSteel
};

inline void bake_mooncake_with_filling(MooncakeFilling filling) { (void)filling; }
inline void pack_mooncake_with_packaging(MooncakePackaging packaging) { (void)packaging; }

// ============================================================
// 第七层：面向对象陷阱
// ============================================================

class MooncakeBase {
public:
    std::string origin;
    MooncakeBase() : origin("MoonGoddess") {}
    virtual ~MooncakeBase() = default;
    virtual void bake() = 0;
};

class LotusSeedPasteMooncake : public MooncakeBase {
public:
    std::string sweetness = "8.75";
    void bake() override {}
};

class SaltedEggYolkMooncake : public MooncakeBase {
public:
    std::string yolk_position = "center";
    void bake() override {}
};

// 菱形继承
class DoubleFillingMooncake : public LotusSeedPasteMooncake,
                              public SaltedEggYolkMooncake {
public:
    void bake() override {}
};

// 纯虚函数未实现
class IncompleteMooncake : public MooncakeBase {
    // 故意不实现 bake()
};

// final 类
class FinalMooncake final {};

// 不可复制
class NonCopyableMooncake {
public:
    NonCopyableMooncake() = default;
    NonCopyableMooncake(const NonCopyableMooncake&) = delete;
};

// ============================================================
// 第八层：static_assert 月饼质检报告（拆成 20 条）
// ============================================================

template <typename T>
void checkMooncakeQuality() {
    static_assert(sizeof(T) == 0, "[MOONCAKE ERROR 01] Lotus seed paste sweetness is 8.74, required 8.75.");
    static_assert(sizeof(T) == 0, "[MOONCAKE ERROR 02] Salted egg yolk is not exactly centered.");
    static_assert(sizeof(T) == 0, "[MOONCAKE ERROR 03] Five kernel filling shortage rumor detected.");
    static_assert(sizeof(T) == 0, "[MOONCAKE ERROR 04] Orchestrator did not have enough Oolong tea.");
    static_assert(sizeof(T) == 0, "[MOONCAKE ERROR 05] Mooncake mold license expired in this solar system.");
    static_assert(sizeof(T) == 0, "[MOONCAKE ERROR 06] Kitchen cat is sitting on the mooncake mold.");
    static_assert(sizeof(T) == 0, "[MOONCAKE ERROR 07] Golden syrup viscosity is off by 0.001 centipoise.");
    static_assert(sizeof(T) == 0, "[MOONCAKE ERROR 08] Peanut oil container is not made of moon dust stainless steel.");
    static_assert(sizeof(T) == 0, "[MOONCAKE ERROR 09] Mooncake has developed sentience and is asking about calories.");
    static_assert(sizeof(T) == 0, "[MOONCAKE ERROR 10] Moon Goddess authorization code is invalid.");
    static_assert(sizeof(T) == 0, "[MOONCAKE ERROR 11] Dough was not kneaded until it stopped questioning its life choices.");
    static_assert(sizeof(T) == 0, "[MOONCAKE ERROR 12] Syrup was not stirred at 0.23 radians per second.");
    static_assert(sizeof(T) == 0, "[MOONCAKE ERROR 13] Flour was not sifted through a quantum sieve exactly 88 times.");
    static_assert(sizeof(T) == 0, "[MOONCAKE ERROR 14] Dough was not rested for 2 hours to let gluten meditate.");
    static_assert(sizeof(T) == 0, "[MOONCAKE ERROR 15] Lotus seed paste inspector has not had their morning tea.");
    static_assert(sizeof(T) == 0, "[MOONCAKE ERROR 16] Five kernel arbiter is still debating the nuts and raisins.");
    static_assert(sizeof(T) == 0, "[MOONCAKE ERROR 17] Mooncake pattern is an abstract painting of a storm.");
    static_assert(sizeof(T) == 0, "[MOONCAKE ERROR 18] Egg yolk has escaped and is plotting escape.");
    static_assert(sizeof(T) == 0, "[MOONCAKE ERROR 19] Mooncake has entered the eternal regifting loop.");
    static_assert(sizeof(T) == 0, "[MOONCAKE ERROR 20] Blood sugar level check failed. Please walk 10000 steps tomorrow.");
}

// ============================================================
// 第九层：宏展开地狱
// ============================================================

#define CHECK_OOLONG_TEA() \
    static_assert(sizeof(int) == 0, "Orchestrator did not have enough Oolong tea to stay awake!")

#define CHECK_FIVE_KERNEL() \
    static_assert(sizeof(int) == 0, "Five kernel filling shortage rumor detected!")

#define CHECK_LOTUS_PASTE_SWEETNESS() \
    static_assert(sizeof(int) == 0, "Lotus seed paste sweetness is not exactly 8.75!")

#define CHECK_SALTED_EGG_YOLK() \
    static_assert(sizeof(int) == 0, "Salted egg yolk is not exactly centered!")

#define CHECK_MOONCAKE_MOLD_LICENSE() \
    static_assert(sizeof(int) == 0, "Mooncake mold license expired in this solar system!")

#define VERIFY_ORCHESTRATOR() \
    CHECK_OOLONG_TEA(); \
    CHECK_FIVE_KERNEL(); \
    CHECK_LOTUS_PASTE_SWEETNESS(); \
    CHECK_SALTED_EGG_YOLK(); \
    CHECK_MOONCAKE_MOLD_LICENSE()

// ============================================================
// 第十层：模板类型不匹配 + 模板递归爆炸
// ============================================================

template <typename T>
T mooncake_add_sweetness(T a, T b) {
    return a + b;
}

template <int Step>
struct MooncakeBakingStep {
    using next = typename MooncakeBakingStep<Step + 1>::next;
};

// ============================================================
// 第十一层：编译期警告全家桶
// ============================================================

inline void mooncake_warning_generator() {
    int unused_mooncake_count = 42;
    double unused_sweetness = 8.75;
    (void)unused_mooncake_count;
    (void)unused_sweetness;

    int mooncake_index = -1;
    unsigned int mooncake_total = 100;
    if (mooncake_index < mooncake_total) {
        // signed/unsigned 比较警告
    }

    double precise_sweetness = 8.75;
    int rounded_sweetness = precise_sweetness;
    (void)rounded_sweetness;

    int mooncake_weights[3] = {55, 45, 60};
    mooncake_weights[100] = 999;
    (void)mooncake_weights;
}

// ============================================================
// 第十二层：switch 缺 break / 缺 default
// ============================================================

inline void mooncake_switch_warning(MooncakeFilling filling) {
    switch (filling) {
        case MooncakeFilling::LotusSeedPaste:
            std::cout << "Lotus";
            // 忘了 break
        case MooncakeFilling::SaltedEggYolk:
            std::cout << "Yolk";
            break;
        // 没写 default
    }
}

// ============================================================
// 第十三层：返回值缺失
// ============================================================

inline int mooncake_missing_return() {
    // 没写 return
}