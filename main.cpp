#include "mooncake_compile_hell.hpp"

int main() {
    // ---- 第三层：[[deprecated]] ----
    old_mooncake_building_sequence();
    five_kernel_mooncake();
    simple_mooncake();
    center_salted_egg_yolk();
    check_oolong_tea();

    // ---- 第四层：[[nodiscard]] ----
    make_mooncake();
    count_five_kernel_filling();
    measure_lotus_seed_paste_sweetness();

    // ---- 第五层：超长命名 + 类型不匹配 ----
    MooncakeFactoryBuilderSingletonManagerProviderLocatorCoordinatorOrchestrator o;
    o.initiateMooncakeBuildingSequenceWithAuthorizationCodeFromTheMoonGoddess(
        42, 3.14, "AUTH-CHANG-E-15-8-42-6-9-88");
    o.verifyOrchestratorBootSequenceCompletedSuccessfullyAfterLastMidAutumnFestival(
        2024, "MidAutumn", true);
    o.ensureLocatorIsNotPanickingDueToRecentFiveKernelFillingShortageRumors(
        true, 5, "MoonGoddess");

    // ---- 第六层：枚举类型不匹配 ----
    bake_mooncake_with_filling(MooncakeSize::Large);
    pack_mooncake_with_packaging(MooncakeFilling::FiveKernel);

    // ---- 第七层：面向对象陷阱 ----
    // 菱形继承歧义
    DoubleFillingMooncake double_filling;
    // std::cout << double_filling.origin << std::endl;  // 歧义

    // 纯虚函数未实现
    // IncompleteMooncake incomplete;  // 抽象类无法实例化

    // final 类继承
    // class Derived : public FinalMooncake {};  // 无法继承 final

    // 不可复制
    // NonCopyableMooncake a;
    // NonCopyableMooncake b = a;  // 复制被删除

    // 私有成员访问
    // MooncakeBase base;
    // std::cout << base.origin << std::endl;  // origin 是 public，不炸。换成 private 的

    // ---- 第八层：static_assert 月饼质检报告 ----
    checkMooncakeQuality<int>();

    // ---- 第九层：宏展开地狱 ----
    VERIFY_ORCHESTRATOR();

    // ---- 第十层：模板类型不匹配 + 递归爆炸 ----
    mooncake_add_sweetness("LotusSeedPaste", 8.75);
    MooncakeBakingStep<0>::next::next::next::next::next mooncake;

    // ---- 第十一层：编译期警告全家桶 ----
    mooncake_warning_generator();

    // ---- 第十二层：switch 警告 ----
    mooncake_switch_warning(MooncakeFilling::LotusSeedPaste);

    // ---- 第十三层：返回值缺失 ----
    mooncake_missing_return();

    return 0;
}