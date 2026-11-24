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

// Function: sub_0011A118
// Address: 0x11a118 - 0x11a1d0
void sub_0011A118_0x11a118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011A118_0x11a118");
#endif

    switch (ctx->pc) {
        case 0x11a18cu: goto label_11a18c;
        case 0x11a1b0u: goto label_11a1b0;
        default: break;
    }

    ctx->pc = 0x11a118u;

    // 0x11a118: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x11a118u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x11a11c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x11a11cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x11a120: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x11a120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x11a124: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x11a124u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a128: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11a128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11a12c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x11a12cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a130: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x11a130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x11a134: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11a134u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a138: 0x6010008  bgez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x11A138u;
    {
        const bool branch_taken_0x11a138 = (GPR_S64(ctx, 16) >= 0);
        ctx->pc = 0x11A13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A138u;
        // 0x11a13c: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a138) {
            ctx->pc = 0x11A15Cu;
            goto label_11a15c;
        }
    }
    ctx->pc = 0x11A140u;
    // 0x11a140: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x11a140u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x11a144: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x11a144u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x11a148: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x11a148u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x11a14c: 0x24713f48  addiu       $s1, $v1, 0x3F48
    ctx->pc = 0x11a14cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 16200));
    // 0x11a150: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x11a150u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x11a154: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x11A154u;
    {
        const bool branch_taken_0x11a154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A154u;
        // 0x11a158: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a154) {
            ctx->pc = 0x11A16Cu;
            goto label_11a16c;
        }
    }
    ctx->pc = 0x11A15Cu;
label_11a15c:
    // 0x11a15c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x11a15cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x11a160: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x11a160u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x11a164: 0x8c514168  lw          $s1, 0x4168($v0)
    ctx->pc = 0x11a164u;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x404168u));
    // 0x11a168: 0x8c62416c  lw          $v0, 0x416C($v1)
    ctx->pc = 0x11a168u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x40416Cu));
label_11a16c:
    // 0x11a16c: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x11a16cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x11a170: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11A170u;
    {
        const bool branch_taken_0x11a170 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11a170) {
            ctx->pc = 0x11A184u;
            goto label_11a184;
        }
    }
    ctx->pc = 0x11A178u;
    // 0x11a178: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x11a178u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x11a17c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x11A17Cu;
    {
        const bool branch_taken_0x11a17c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A17Cu;
        // 0x11a180: 0x34420069  ori         $v0, $v0, 0x69 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)105);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a17c) {
            ctx->pc = 0x11A1B4u;
            goto label_11a1b4;
        }
    }
    ctx->pc = 0x11A184u;
label_11a184:
    // 0x11a184: 0xc046028  jal         func_1180A0
    ctx->pc = 0x11A184u;
    SET_GPR_U32(ctx, 31, 0x11A18Cu);
    ctx->pc = 0x1180A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1180A0u, 0x11A184u, 0x11A18Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A18Cu;
label_11a18c:
    // 0x11a18c: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x11a18cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x11a190: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x11a190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x11a194: 0xac720000  sw          $s2, 0x0($v1)
    ctx->pc = 0x11a194u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 18));
    // 0x11a198: 0xac730004  sw          $s3, 0x4($v1)
    ctx->pc = 0x11a198u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 19));
    // 0x11a19c: 0x380202d  daddu       $a0, $gp, $zero
    ctx->pc = 0x11a19cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a1a0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11A1A0u;
    {
        const bool branch_taken_0x11a1a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A1A0u;
        // 0x11a1a4: 0xac640008  sw          $a0, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a1a0) {
            ctx->pc = 0x11A1B0u;
            goto label_11a1b0;
        }
    }
    ctx->pc = 0x11A1A8u;
    // 0x11a1a8: 0xc04603c  jal         func_1180F0
    ctx->pc = 0x11A1A8u;
    SET_GPR_U32(ctx, 31, 0x11A1B0u);
    ctx->pc = 0x1180F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1180F0u, 0x11A1A8u, 0x11A1B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A1B0u;
label_11a1b0:
    // 0x11a1b0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x11a1b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11a1b4:
    // 0x11a1b4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x11a1b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11a1b8: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x11a1b8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11a1bc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x11a1bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11a1c0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x11a1c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11a1c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11a1c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11a1c8: 0x3e00008  jr          $ra
    ctx->pc = 0x11A1C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11A1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A1C8u;
        // 0x11a1cc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11A1C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11A1D0u;
}
