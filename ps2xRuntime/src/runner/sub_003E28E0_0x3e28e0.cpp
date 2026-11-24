#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003E28E0
// Address: 0x3e28e0 - 0x3e2988
void sub_003E28E0_0x3e28e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E28E0_0x3e28e0");
#endif

    ctx->pc = 0x3e28e0u;

    // 0x3e28e0: 0xc4830028  lwc1        $f3, 0x28($a0)
    ctx->pc = 0x3e28e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3e28e4: 0x3c03467c  lui         $v1, 0x467C
    ctx->pc = 0x3e28e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18044 << 16));
    // 0x3e28e8: 0xc4820020  lwc1        $f2, 0x20($a0)
    ctx->pc = 0x3e28e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3e28ec: 0x34649b7a  ori         $a0, $v1, 0x9B7A
    ctx->pc = 0x3e28ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39802);
    // 0x3e28f0: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x3e28f0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3e28f4: 0x3c034447  lui         $v1, 0x4447
    ctx->pc = 0x3e28f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17479 << 16));
    // 0x3e28f8: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x3e28f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x3e28fc: 0x46011841  sub.s       $f1, $f3, $f1
    ctx->pc = 0x3e28fcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x3e2900: 0x3c0445fc  lui         $a0, 0x45FC
    ctx->pc = 0x3e2900u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17916 << 16));
    // 0x3e2904: 0x34876db6  ori         $a3, $a0, 0x6DB6
    ctx->pc = 0x3e2904u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)28086);
    // 0x3e2908: 0x3c044653  lui         $a0, 0x4653
    ctx->pc = 0x3e2908u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)18003 << 16));
    // 0x3e290c: 0x34848c3e  ori         $a0, $a0, 0x8C3E
    ctx->pc = 0x3e290cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)35902);
    // 0x3e2910: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3e2910u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3e2914: 0x0  nop
    ctx->pc = 0x3e2914u;
    // NOP
    // 0x3e2918: 0x460008c3  div.s       $f3, $f1, $f0
    ctx->pc = 0x3e2918u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x3e291c: 0x3c03467b  lui         $v1, 0x467B
    ctx->pc = 0x3e291cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18043 << 16));
    // 0x3e2920: 0x34695200  ori         $t1, $v1, 0x5200
    ctx->pc = 0x3e2920u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)20992);
    // 0x3e2924: 0x3c034489  lui         $v1, 0x4489
    ctx->pc = 0x3e2924u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17545 << 16));
    // 0x3e2928: 0x34684c70  ori         $t0, $v1, 0x4C70
    ctx->pc = 0x3e2928u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)19568);
    // 0x3e292c: 0x3c034632  lui         $v1, 0x4632
    ctx->pc = 0x3e292cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17970 << 16));
    // 0x3e2930: 0x34662567  ori         $a2, $v1, 0x2567
    ctx->pc = 0x3e2930u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)9575);
    // 0x3e2934: 0x3c0345f7  lui         $v1, 0x45F7
    ctx->pc = 0x3e2934u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17911 << 16));
    // 0x3e2938: 0x34639ff4  ori         $v1, $v1, 0x9FF4
    ctx->pc = 0x3e2938u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40948);
    // 0x3e293c: 0x44890800  mtc1        $t1, $f1
    ctx->pc = 0x3e293cu;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3e2940: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x3e2940u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3e2944: 0x0  nop
    ctx->pc = 0x3e2944u;
    // NOP
    // 0x3e2948: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x3e2948u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x3e294c: 0x46000883  div.s       $f2, $f1, $f0
    ctx->pc = 0x3e294cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x3e2950: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x3e2950u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3e2954: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x3e2954u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3e2958: 0x0  nop
    ctx->pc = 0x3e2958u;
    // NOP
    // 0x3e295c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3e295cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3e2960: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3e2960u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3e2964: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x3e2964u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x3e2968: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3e2968u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3e296c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x3e296cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3e2970: 0x0  nop
    ctx->pc = 0x3e2970u;
    // NOP
    // 0x3e2974: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x3e2974u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x3e2978: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x3e2978u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3e297c: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x3e297cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x3e2980: 0x3e00008  jr          $ra
    ctx->pc = 0x3E2980u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E2984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2980u;
        // 0x3e2984: 0xaca0000c  sw          $zero, 0xC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E2980u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E2988u;
}
