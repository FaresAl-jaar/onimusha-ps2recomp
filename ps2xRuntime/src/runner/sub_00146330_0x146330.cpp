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

// Function: sub_00146330
// Address: 0x146330 - 0x14638c
void sub_00146330_0x146330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00146330_0x146330");
#endif

    switch (ctx->pc) {
        case 0x146338u: goto label_146338;
        default: break;
    }

    ctx->pc = 0x146330u;

    // 0x146330: 0x24850250  addiu       $a1, $a0, 0x250
    ctx->pc = 0x146330u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 592));
    // 0x146334: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x146334u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_146338:
    // 0x146338: 0x90a30001  lbu         $v1, 0x1($a1)
    ctx->pc = 0x146338u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x14633c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x14633cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x146340: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x146340u;
    {
        const bool branch_taken_0x146340 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x146340) {
            ctx->pc = 0x146370u;
            goto label_146370;
        }
    }
    ctx->pc = 0x146348u;
    // 0x146348: 0x8ca30034  lw          $v1, 0x34($a1)
    ctx->pc = 0x146348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
    // 0x14634c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x14634cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x146350: 0xe4a00014  swc1        $f0, 0x14($a1)
    ctx->pc = 0x146350u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 20), bits); }
    // 0x146354: 0x8ca30034  lw          $v1, 0x34($a1)
    ctx->pc = 0x146354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
    // 0x146358: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x146358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14635c: 0xe4a00018  swc1        $f0, 0x18($a1)
    ctx->pc = 0x14635cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 24), bits); }
    // 0x146360: 0x8ca30034  lw          $v1, 0x34($a1)
    ctx->pc = 0x146360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
    // 0x146364: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x146364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x146368: 0xe4a0001c  swc1        $f0, 0x1C($a1)
    ctx->pc = 0x146368u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 28), bits); }
    // 0x14636c: 0x0  nop
    ctx->pc = 0x14636cu;
    // NOP
label_146370:
    // 0x146370: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x146370u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x146374: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x146374u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x146378: 0x28830004  slti        $v1, $a0, 0x4
    ctx->pc = 0x146378u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x14637c: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x14637Cu;
    {
        const bool branch_taken_0x14637c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x146380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14637Cu;
        // 0x146380: 0x24a50038  addiu       $a1, $a1, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 56));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14637c) {
            ctx->pc = 0x146338u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_146338;
        }
    }
    ctx->pc = 0x146384u;
    // 0x146384: 0x3e00008  jr          $ra
    ctx->pc = 0x146384u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x146384u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14638Cu;
}
