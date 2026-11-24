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

// Function: sub_0010D410
// Address: 0x10d410 - 0x10d4d8
void sub_0010D410_0x10d410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010D410_0x10d410");
#endif

    switch (ctx->pc) {
        case 0x10d42cu: goto label_10d42c;
        case 0x10d440u: goto label_10d440;
        case 0x10d464u: goto label_10d464;
        case 0x10d46cu: goto label_10d46c;
        case 0x10d4bcu: goto label_10d4bc;
        default: break;
    }

    ctx->pc = 0x10d410u;

    // 0x10d410: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x10d410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x10d414: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x10d414u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x10d418: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x10d418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x10d41c: 0x24a52380  addiu       $a1, $a1, 0x2380
    ctx->pc = 0x10d41cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9088));
    // 0x10d420: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x10d420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x10d424: 0xc043536  jal         func_10D4D8
    ctx->pc = 0x10D424u;
    SET_GPR_U32(ctx, 31, 0x10D42Cu);
    ctx->pc = 0x10D428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D424u;
    // 0x10d428: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10D4D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D4D8u, 0x10D424u, 0x10D42Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D42Cu;
label_10d42c:
    // 0x10d42c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x10d42cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x10d430: 0x8e040868  lw          $a0, 0x868($s0)
    ctx->pc = 0x10d430u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2152)));
    // 0x10d434: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x10d434u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x10d438: 0xc042ee0  jal         func_10BB80
    ctx->pc = 0x10D438u;
    SET_GPR_U32(ctx, 31, 0x10D440u);
    ctx->pc = 0x10D43Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D438u;
    // 0x10d43c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BB80u, 0x10D438u, 0x10D440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D440u;
label_10d440:
    // 0x10d440: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x10d440u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x10d444: 0x3c054000  lui         $a1, 0x4000
    ctx->pc = 0x10d444u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
    // 0x10d448: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x10d448u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
    // 0x10d44c: 0x8e040868  lw          $a0, 0x868($s0)
    ctx->pc = 0x10d44cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2152)));
    // 0x10d450: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x10d450u;
    runtime->Store32(rdram, ctx, 0x10002010u, GPR_U32(ctx, 5)); // MMIO: 0x10002010
    // 0x10d454: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x10d454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x10d458: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x10d458u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x10d45c: 0xc042ee0  jal         func_10BB80
    ctx->pc = 0x10D45Cu;
    SET_GPR_U32(ctx, 31, 0x10D464u);
    ctx->pc = 0x10D460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D45Cu;
    // 0x10d460: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BB80u, 0x10D45Cu, 0x10D464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D464u;
label_10d464:
    // 0x10d464: 0xc046028  jal         func_1180A0
    ctx->pc = 0x10D464u;
    SET_GPR_U32(ctx, 31, 0x10D46Cu);
    ctx->pc = 0x1180A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1180A0u, 0x10D464u, 0x10D46Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D46Cu;
label_10d46c:
    // 0x10d46c: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x10d46cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x10d470: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x10d470u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x10d474: 0x34c6f520  ori         $a2, $a2, 0xF520
    ctx->pc = 0x10d474u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)62752);
    // 0x10d478: 0x3c080001  lui         $t0, 0x1
    ctx->pc = 0x10d478u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)1 << 16));
    // 0x10d47c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x10d47cu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000F520u)); // MMIO: 0x1000f520
    // 0x10d480: 0x34e7f590  ori         $a3, $a3, 0xF590
    ctx->pc = 0x10d480u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)62864);
    // 0x10d484: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x10d484u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x10d488: 0x3c05fffe  lui         $a1, 0xFFFE
    ctx->pc = 0x10d488u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65534 << 16));
    // 0x10d48c: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x10d48cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x10d490: 0x3484b000  ori         $a0, $a0, 0xB000
    ctx->pc = 0x10d490u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)45056);
    // 0x10d494: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x10d494u;
    runtime->Store32(rdram, ctx, 0x1000F590u, GPR_U32(ctx, 3)); // MMIO: 0x1000f590
    // 0x10d498: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x10d498u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x10d49c: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x10d49cu;
    runtime->Store32(rdram, ctx, 0x1000B000u, GPR_U32(ctx, 0)); // MMIO: 0x1000b000
    // 0x10d4a0: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x10d4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000F520u)); // MMIO: 0x1000f520
    // 0x10d4a4: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x10d4a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x10d4a8: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x10d4a8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x10d4ac: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10D4ACu;
    {
        const bool branch_taken_0x10d4ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D4ACu;
        // 0x10d4b0: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d4ac) {
            ctx->pc = 0x10D4C0u;
            goto label_10d4c0;
        }
    }
    ctx->pc = 0x10D4B4u;
    // 0x10d4b4: 0xc04603c  jal         func_1180F0
    ctx->pc = 0x10D4B4u;
    SET_GPR_U32(ctx, 31, 0x10D4BCu);
    ctx->pc = 0x1180F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1180F0u, 0x10D4B4u, 0x10D4BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D4BCu;
label_10d4bc:
    // 0x10d4bc: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x10d4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_10d4c0:
    // 0x10d4c0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x10d4c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10d4c4: 0x3442b020  ori         $v0, $v0, 0xB020
    ctx->pc = 0x10d4c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45088);
    // 0x10d4c8: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x10d4c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10d4cc: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x10d4ccu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0)); // MMIO: 0x1000b020
    // 0x10d4d0: 0x3e00008  jr          $ra
    ctx->pc = 0x10D4D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10D4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D4D0u;
        // 0x10d4d4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10D4D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10D4D8u;
}
