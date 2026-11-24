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

// Function: sub_0039A2E0
// Address: 0x39a2e0 - 0x39a378
void sub_0039A2E0_0x39a2e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039A2E0_0x39a2e0");
#endif

    switch (ctx->pc) {
        case 0x39a300u: goto label_39a300;
        default: break;
    }

    ctx->pc = 0x39a2e0u;

    // 0x39a2e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x39a2e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x39a2e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x39a2e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x39a2e8: 0x27a5003c  addiu       $a1, $sp, 0x3C
    ctx->pc = 0x39a2e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x39a2ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x39a2ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x39a2f0: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x39a2f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x39a2f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x39a2f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39a2f8: 0xc096cb8  jal         func_25B2E0
    ctx->pc = 0x39A2F8u;
    SET_GPR_U32(ctx, 31, 0x39A300u);
    ctx->pc = 0x39A2FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39A2F8u;
    // 0x39a2fc: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B2E0u, 0x39A2F8u, 0x39A300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39A300u;
label_39a300:
    // 0x39a300: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x39A300u;
    {
        const bool branch_taken_0x39a300 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39A304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A300u;
        // 0x39a304: 0x3c0343fa  lui         $v1, 0x43FA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a300) {
            ctx->pc = 0x39A310u;
            goto label_39a310;
        }
    }
    ctx->pc = 0x39A308u;
    // 0x39a308: 0xafa3003c  sw          $v1, 0x3C($sp)
    ctx->pc = 0x39a308u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 3));
    // 0x39a30c: 0x0  nop
    ctx->pc = 0x39a30cu;
    // NOP
label_39a310:
    // 0x39a310: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x39a310u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x39a314: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x39a314u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x39a318: 0x86052b50  lh          $a1, 0x2B50($s0)
    ctx->pc = 0x39a318u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11088)));
    // 0x39a31c: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x39a31cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x39a320: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x39a320u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x39a324: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x39a324u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x39a328: 0x24846540  addiu       $a0, $a0, 0x6540
    ctx->pc = 0x39a328u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25920));
    // 0x39a32c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x39a32cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x39a330: 0x30a30fff  andi        $v1, $a1, 0xFFF
    ctx->pc = 0x39a330u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4095);
    // 0x39a334: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x39a334u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x39a338: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x39a338u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x39a33c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x39a33cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x39a340: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x39a340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x39a344: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x39a344u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x39a348: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x39a348u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x39a34c: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x39a34cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x39a350: 0x86032b50  lh          $v1, 0x2B50($s0)
    ctx->pc = 0x39a350u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11088)));
    // 0x39a354: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x39a354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x39a358: 0xa6032b50  sh          $v1, 0x2B50($s0)
    ctx->pc = 0x39a358u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11088), (uint16_t)GPR_U32(ctx, 3));
    // 0x39a35c: 0x86032b50  lh          $v1, 0x2B50($s0)
    ctx->pc = 0x39a35cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11088)));
    // 0x39a360: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x39a360u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x39a364: 0xa6032b50  sh          $v1, 0x2B50($s0)
    ctx->pc = 0x39a364u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11088), (uint16_t)GPR_U32(ctx, 3));
    // 0x39a368: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x39a368u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39a36c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x39a36cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39a370: 0x3e00008  jr          $ra
    ctx->pc = 0x39A370u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39A374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A370u;
        // 0x39a374: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39A370u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39A378u;
}
