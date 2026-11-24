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

// Function: sub_00257B80
// Address: 0x257b80 - 0x257c84
void sub_00257B80_0x257b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00257B80_0x257b80");
#endif

    switch (ctx->pc) {
        case 0x257bc8u: goto label_257bc8;
        case 0x257bd4u: goto label_257bd4;
        case 0x257c08u: goto label_257c08;
        case 0x257c10u: goto label_257c10;
        case 0x257c18u: goto label_257c18;
        case 0x257c28u: goto label_257c28;
        case 0x257c38u: goto label_257c38;
        default: break;
    }

    ctx->pc = 0x257b80u;

    // 0x257b80: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x257b80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x257b84: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x257b84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x257b88: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x257b88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x257b8c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x257b8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x257b90: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x257b90u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257b94: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x257b94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x257b98: 0x8ac3c  dsll32      $s5, $t0, 16
    ctx->pc = 0x257b98u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 8) << (32 + 16));
    // 0x257b9c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x257b9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x257ba0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x257ba0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257ba4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x257ba4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x257ba8: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x257ba8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257bac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x257bacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x257bb0: 0x15ac3f  dsra32      $s5, $s5, 16
    ctx->pc = 0x257bb0u;
    SET_GPR_S64(ctx, 21, GPR_S64(ctx, 21) >> (32 + 16));
    // 0x257bb4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x257bb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x257bb8: 0x64120001  daddiu      $s2, $zero, 0x1
    ctx->pc = 0x257bb8u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x257bbc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x257bbcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257bc0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x257bc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257bc4: 0x0  nop
    ctx->pc = 0x257bc4u;
    // NOP
label_257bc8:
    // 0x257bc8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x257bc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257bcc: 0xc097958  jal         func_25E560
    ctx->pc = 0x257BCCu;
    SET_GPR_U32(ctx, 31, 0x257BD4u);
    ctx->pc = 0x257BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257BCCu;
    // 0x257bd0: 0x27a5008c  addiu       $a1, $sp, 0x8C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E560u, 0x257BCCu, 0x257BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257BD4u;
label_257bd4:
    // 0x257bd4: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x257BD4u;
    {
        const bool branch_taken_0x257bd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x257bd4) {
            ctx->pc = 0x257C48u;
            goto label_257c48;
        }
    }
    ctx->pc = 0x257BDCu;
    // 0x257bdc: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x257bdcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x257be0: 0x2c410009  sltiu       $at, $v0, 0x9
    ctx->pc = 0x257be0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x257be4: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
    ctx->pc = 0x257BE4u;
    {
        const bool branch_taken_0x257be4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x257BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257BE4u;
        // 0x257be8: 0x3c030067  lui         $v1, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257be4) {
            ctx->pc = 0x257C38u;
            goto label_257c38;
        }
    }
    ctx->pc = 0x257BECu;
    // 0x257bec: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x257becu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x257bf0: 0x2463f100  addiu       $v1, $v1, -0xF00
    ctx->pc = 0x257bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963456));
    // 0x257bf4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x257bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x257bf8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x257bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x257bfc: 0x400008  jr          $v0
    ctx->pc = 0x257BFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x257C08u: goto label_257c08;
            case 0x257C10u: goto label_257c10;
            case 0x257C18u: goto label_257c18;
            case 0x257C38u: goto label_257c38;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x257BFCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x257C04u;
    // 0x257c04: 0x0  nop
    ctx->pc = 0x257c04u;
    // NOP
label_257c08:
    // 0x257c08: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x257C08u;
    {
        const bool branch_taken_0x257c08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x257C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257C08u;
        // 0x257c0c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257c08) {
            ctx->pc = 0x257C38u;
            goto label_257c38;
        }
    }
    ctx->pc = 0x257C10u;
label_257c10:
    // 0x257c10: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x257C10u;
    {
        const bool branch_taken_0x257c10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x257C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257C10u;
        // 0x257c14: 0x64100001  daddiu      $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x257c10) {
            ctx->pc = 0x257C38u;
            goto label_257c38;
        }
    }
    ctx->pc = 0x257C18u;
label_257c18:
    // 0x257c18: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x257c18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257c1c: 0x26650001  addiu       $a1, $s3, 0x1
    ctx->pc = 0x257c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x257c20: 0xc0959f4  jal         func_2567D0
    ctx->pc = 0x257C20u;
    SET_GPR_U32(ctx, 31, 0x257C28u);
    ctx->pc = 0x257C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257C20u;
    // 0x257c24: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2567D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2567D0u, 0x257C20u, 0x257C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257C28u;
label_257c28:
    // 0x257c28: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x257c28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x257c2c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x257c2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257c30: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x257c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x257c34: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x257c34u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_257c38:
    // 0x257c38: 0x8fa2008c  lw          $v0, 0x8C($sp)
    ctx->pc = 0x257c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
    // 0x257c3c: 0x1640ffe2  bnez        $s2, . + 4 + (-0x1E << 2)
    ctx->pc = 0x257C3Cu;
    {
        const bool branch_taken_0x257c3c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x257C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257C3Cu;
        // 0x257c40: 0x2629821  addu        $s3, $s3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257c3c) {
            ctx->pc = 0x257BC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_257bc8;
        }
    }
    ctx->pc = 0x257C44u;
    // 0x257c44: 0x0  nop
    ctx->pc = 0x257c44u;
    // NOP
label_257c48:
    // 0x257c48: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x257C48u;
    {
        const bool branch_taken_0x257c48 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x257C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257C48u;
        // 0x257c4c: 0x2361021  addu        $v0, $s1, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257c48) {
            ctx->pc = 0x257C58u;
            goto label_257c58;
        }
    }
    ctx->pc = 0x257C50u;
    // 0x257c50: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x257c50u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x257c54: 0x0  nop
    ctx->pc = 0x257c54u;
    // NOP
label_257c58:
    // 0x257c58: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x257c58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257c5c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x257c5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x257c60: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x257c60u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x257c64: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x257c64u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x257c68: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x257c68u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x257c6c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x257c6cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x257c70: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x257c70u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x257c74: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x257c74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x257c78: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x257c78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x257c7c: 0x3e00008  jr          $ra
    ctx->pc = 0x257C7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x257C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257C7Cu;
        // 0x257c80: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x257C7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x257C84u;
}
