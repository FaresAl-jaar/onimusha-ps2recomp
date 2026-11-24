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

// Function: sub_00341250
// Address: 0x341250 - 0x3412fc
void sub_00341250_0x341250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00341250_0x341250");
#endif

    switch (ctx->pc) {
        case 0x341290u: goto label_341290;
        case 0x3412b0u: goto label_3412b0;
        case 0x3412ccu: goto label_3412cc;
        case 0x3412e4u: goto label_3412e4;
        default: break;
    }

    ctx->pc = 0x341250u;

    // 0x341250: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x341250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x341254: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x341254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x341258: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x341258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x34125c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x34125cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x341260: 0xa0800118  sb          $zero, 0x118($a0)
    ctx->pc = 0x341260u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 280), (uint8_t)GPR_U32(ctx, 0));
    // 0x341264: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x341264u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x341268: 0xa0800119  sb          $zero, 0x119($a0)
    ctx->pc = 0x341268u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 281), (uint8_t)GPR_U32(ctx, 0));
    // 0x34126c: 0x9082011c  lbu         $v0, 0x11C($a0)
    ctx->pc = 0x34126cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 284)));
    // 0x341270: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x341270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x341274: 0xa082011c  sb          $v0, 0x11C($a0)
    ctx->pc = 0x341274u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 284), (uint8_t)GPR_U32(ctx, 2));
    // 0x341278: 0x94820030  lhu         $v0, 0x30($a0)
    ctx->pc = 0x341278u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x34127c: 0x34420006  ori         $v0, $v0, 0x6
    ctx->pc = 0x34127cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x341280: 0xa4820030  sh          $v0, 0x30($a0)
    ctx->pc = 0x341280u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 48), (uint16_t)GPR_U32(ctx, 2));
    // 0x341284: 0x8c84004c  lw          $a0, 0x4C($a0)
    ctx->pc = 0x341284u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x341288: 0xc0a86fc  jal         func_2A1BF0
    ctx->pc = 0x341288u;
    SET_GPR_U32(ctx, 31, 0x341290u);
    ctx->pc = 0x34128Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x341288u;
    // 0x34128c: 0x24050040  addiu       $a1, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A1BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A1BF0u, 0x341288u, 0x341290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341290u;
label_341290:
    // 0x341290: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x341290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x341294: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x341294u;
    {
        const bool branch_taken_0x341294 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x341294) {
            ctx->pc = 0x3412B0u;
            goto label_3412b0;
        }
    }
    ctx->pc = 0x34129Cu;
    // 0x34129c: 0x8c620094  lw          $v0, 0x94($v1)
    ctx->pc = 0x34129cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
    // 0x3412a0: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x3412a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x3412a4: 0xac620088  sw          $v0, 0x88($v1)
    ctx->pc = 0x3412a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 136), GPR_U32(ctx, 2));
    // 0x3412a8: 0xc0a83f8  jal         func_2A0FE0
    ctx->pc = 0x3412A8u;
    SET_GPR_U32(ctx, 31, 0x3412B0u);
    ctx->pc = 0x3412ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3412A8u;
    // 0x3412ac: 0x8e04004c  lw          $a0, 0x4C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A0FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0FE0u, 0x3412A8u, 0x3412B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3412B0u;
label_3412b0:
    // 0x3412b0: 0x8e110054  lw          $s1, 0x54($s0)
    ctx->pc = 0x3412b0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x3412b4: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x3412B4u;
    {
        const bool branch_taken_0x3412b4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3412b4) {
            ctx->pc = 0x3412E8u;
            goto label_3412e8;
        }
    }
    ctx->pc = 0x3412BCu;
    // 0x3412bc: 0x8e05004c  lw          $a1, 0x4C($s0)
    ctx->pc = 0x3412bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x3412c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3412c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3412c4: 0xc0600fc  jal         func_1803F0
    ctx->pc = 0x3412C4u;
    SET_GPR_U32(ctx, 31, 0x3412CCu);
    ctx->pc = 0x3412C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3412C4u;
    // 0x3412c8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1803F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1803F0u, 0x3412C4u, 0x3412CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3412CCu;
label_3412cc:
    // 0x3412cc: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x3412ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3412d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3412d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3412d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3412d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3412d8: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x3412d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3412dc: 0xc060a74  jal         func_1829D0
    ctx->pc = 0x3412DCu;
    SET_GPR_U32(ctx, 31, 0x3412E4u);
    ctx->pc = 0x3412E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3412DCu;
    // 0x3412e0: 0xc0402d  daddu       $t0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1829D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1829D0u, 0x3412DCu, 0x3412E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3412E4u;
label_3412e4:
    // 0x3412e4: 0x0  nop
    ctx->pc = 0x3412e4u;
    // NOP
label_3412e8:
    // 0x3412e8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3412e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3412ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3412ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3412f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3412f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3412f4: 0x3e00008  jr          $ra
    ctx->pc = 0x3412F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3412F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3412F4u;
        // 0x3412f8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3412F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3412FCu;
}
