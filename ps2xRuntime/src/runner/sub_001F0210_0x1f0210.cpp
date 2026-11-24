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

// Function: sub_001F0210
// Address: 0x1f0210 - 0x1f02c0
void sub_001F0210_0x1f0210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F0210_0x1f0210");
#endif

    switch (ctx->pc) {
        case 0x1f0244u: goto label_1f0244;
        case 0x1f027cu: goto label_1f027c;
        case 0x1f02a8u: goto label_1f02a8;
        default: break;
    }

    ctx->pc = 0x1f0210u;

    // 0x1f0210: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1f0210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1f0214: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1f0214u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1f0218: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1f0218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1f021c: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x1f021cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x1f0220: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1f0220u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1f0224: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x1f0224u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1f0228: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f0228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1f022c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1f022cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0230: 0x9422a3d4  lhu         $v0, -0x5C2C($at)
    ctx->pc = 0x1f0230u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294943700)));
    // 0x1f0234: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F0234u;
    {
        const bool branch_taken_0x1f0234 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F0238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0234u;
        // 0x1f0238: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0234) {
            ctx->pc = 0x1F0248u;
            goto label_1f0248;
        }
    }
    ctx->pc = 0x1F023Cu;
    // 0x1f023c: 0xc068fe4  jal         func_1A3F90
    ctx->pc = 0x1F023Cu;
    SET_GPR_U32(ctx, 31, 0x1F0244u);
    ctx->pc = 0x1A3F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3F90u, 0x1F023Cu, 0x1F0244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0244u;
label_1f0244:
    // 0x1f0244: 0x0  nop
    ctx->pc = 0x1f0244u;
    // NOP
label_1f0248:
    // 0x1f0248: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1f0248u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1f024c: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1f024cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1f0250: 0x9422a3d6  lhu         $v0, -0x5C2A($at)
    ctx->pc = 0x1f0250u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294943702)));
    // 0x1f0254: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1f0254u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1f0258: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1F0258u;
    {
        const bool branch_taken_0x1f0258 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F025Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0258u;
        // 0x1f025c: 0x322200ff  andi        $v0, $s1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0258) {
            ctx->pc = 0x1F0288u;
            goto label_1f0288;
        }
    }
    ctx->pc = 0x1F0260u;
    // 0x1f0260: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x1f0260u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x1f0264: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1f0264u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1f0268: 0x24845db0  addiu       $a0, $a0, 0x5DB0
    ctx->pc = 0x1f0268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23984));
    // 0x1f026c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1f026cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1f0270: 0x8c450080  lw          $a1, 0x80($v0)
    ctx->pc = 0x1f0270u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x1f0274: 0xc0a739c  jal         func_29CE70
    ctx->pc = 0x1F0274u;
    SET_GPR_U32(ctx, 31, 0x1F027Cu);
    ctx->pc = 0x1F0278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0274u;
    // 0x1f0278: 0x24500080  addiu       $s0, $v0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29CE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29CE70u, 0x1F0274u, 0x1F027Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F027Cu;
label_1f027c:
    // 0x1f027c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1F027Cu;
    {
        const bool branch_taken_0x1f027c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f027c) {
            ctx->pc = 0x1F02A8u;
            goto label_1f02a8;
        }
    }
    ctx->pc = 0x1F0284u;
    // 0x1f0284: 0x0  nop
    ctx->pc = 0x1f0284u;
    // NOP
label_1f0288:
    // 0x1f0288: 0x322200ff  andi        $v0, $s1, 0xFF
    ctx->pc = 0x1f0288u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x1f028c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1f028cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1f0290: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x1f0290u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x1f0294: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1f0294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1f0298: 0x24845c80  addiu       $a0, $a0, 0x5C80
    ctx->pc = 0x1f0298u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23680));
    // 0x1f029c: 0x8c450080  lw          $a1, 0x80($v0)
    ctx->pc = 0x1f029cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x1f02a0: 0xc0a739c  jal         func_29CE70
    ctx->pc = 0x1F02A0u;
    SET_GPR_U32(ctx, 31, 0x1F02A8u);
    ctx->pc = 0x1F02A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F02A0u;
    // 0x1f02a4: 0x24500080  addiu       $s0, $v0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29CE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29CE70u, 0x1F02A0u, 0x1F02A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F02A8u;
label_1f02a8:
    // 0x1f02a8: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1f02a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1f02ac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1f02acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f02b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1f02b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f02b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f02b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f02b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1F02B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F02BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F02B8u;
        // 0x1f02bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F02B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F02C0u;
}
