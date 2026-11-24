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

// Function: sub_001119B0
// Address: 0x1119b0 - 0x111a80
void sub_001119B0_0x1119b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001119B0_0x1119b0");
#endif

    switch (ctx->pc) {
        case 0x1119e0u: goto label_1119e0;
        case 0x1119f0u: goto label_1119f0;
        case 0x111a48u: goto label_111a48;
        default: break;
    }

    ctx->pc = 0x1119b0u;

    // 0x1119b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1119b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1119b4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1119b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1119b8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1119b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1119bc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1119bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1119c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1119c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1119c4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1119c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1119c8: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x1119c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1119cc: 0x30a20004  andi        $v0, $a1, 0x4
    ctx->pc = 0x1119ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
    // 0x1119d0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1119D0u;
    {
        const bool branch_taken_0x1119d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1119d0) {
            ctx->pc = 0x1119E8u;
            goto label_1119e8;
        }
    }
    ctx->pc = 0x1119D8u;
    // 0x1119d8: 0xc044618  jal         func_111860
    ctx->pc = 0x1119D8u;
    SET_GPR_U32(ctx, 31, 0x1119E0u);
    ctx->pc = 0x1119DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1119D8u;
    // 0x1119dc: 0x52c02  srl         $a1, $a1, 16 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111860u, 0x1119D8u, 0x1119E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1119E0u;
label_1119e0:
    // 0x1119e0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1119E0u;
    {
        const bool branch_taken_0x1119e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1119E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1119E0u;
        // 0x1119e4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1119e0) {
            ctx->pc = 0x1119F4u;
            goto label_1119f4;
        }
    }
    ctx->pc = 0x1119E8u;
label_1119e8:
    // 0x1119e8: 0xc04460c  jal         func_111830
    ctx->pc = 0x1119E8u;
    SET_GPR_U32(ctx, 31, 0x1119F0u);
    ctx->pc = 0x111830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111830u, 0x1119E8u, 0x1119F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1119F0u;
label_1119f0:
    // 0x1119f0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1119f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1119f4:
    // 0x1119f4: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x1119f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1119f8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1119f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1119fc: 0x8e25001c  lw          $a1, 0x1C($s1)
    ctx->pc = 0x1119fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x111a00: 0x3442000c  ori         $v0, $v0, 0xC
    ctx->pc = 0x111a00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12);
    // 0x111a04: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x111a04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    // 0x111a08: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x111a08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x111a0c: 0xae05001c  sw          $a1, 0x1C($s0)
    ctx->pc = 0x111a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 5));
    // 0x111a10: 0x34840008  ori         $a0, $a0, 0x8
    ctx->pc = 0x111a10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8);
    // 0x111a14: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x111a14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x111a18: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x111a18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111a1c: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x111a1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x111a20: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x111a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x111a24: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x111a24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
    // 0x111a28: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x111a28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x111a2c: 0xae030028  sw          $v1, 0x28($s0)
    ctx->pc = 0x111a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 3));
    // 0x111a30: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x111a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x111a34: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x111a34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    // 0x111a38: 0x8e290028  lw          $t1, 0x28($s1)
    ctx->pc = 0x111a38u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x111a3c: 0x8e270020  lw          $a3, 0x20($s1)
    ctx->pc = 0x111a3cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x111a40: 0xc0444da  jal         func_111368
    ctx->pc = 0x111A40u;
    SET_GPR_U32(ctx, 31, 0x111A48u);
    ctx->pc = 0x111A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111A40u;
    // 0x111a44: 0x8e280024  lw          $t0, 0x24($s1) (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111368u, 0x111A40u, 0x111A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111A48u;
label_111a48:
    // 0x111a48: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x111A48u;
    {
        const bool branch_taken_0x111a48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x111A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111A48u;
        // 0x111a4c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111a48) {
            ctx->pc = 0x111A70u;
            goto label_111a70;
        }
    }
    ctx->pc = 0x111A50u;
    // 0x111a50: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x111a50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111a54: 0x3c050011  lui         $a1, 0x11
    ctx->pc = 0x111a54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17 << 16));
    // 0x111a58: 0x24a51970  addiu       $a1, $a1, 0x1970
    ctx->pc = 0x111a58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6512));
    // 0x111a5c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x111a5cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x111a60: 0x24040800  addiu       $a0, $zero, 0x800
    ctx->pc = 0x111a60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x111a64: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x111a64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x111a68: 0x8046798  j           func_119E60
    ctx->pc = 0x111A68u;
    ctx->pc = 0x111A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111A68u;
    // 0x111a6c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119E60u;
    sub_00119E60_0x119e60(rdram, ctx, runtime); return;
    ctx->pc = 0x111A70u;
label_111a70:
    // 0x111a70: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x111a70u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x111a74: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x111a74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x111a78: 0x3e00008  jr          $ra
    ctx->pc = 0x111A78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x111A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111A78u;
        // 0x111a7c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x111A78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x111A80u;
}
