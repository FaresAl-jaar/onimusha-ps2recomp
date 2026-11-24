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

// Function: sub_00371AD0
// Address: 0x371ad0 - 0x371be4
void sub_00371AD0_0x371ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00371AD0_0x371ad0");
#endif

    switch (ctx->pc) {
        case 0x371b40u: goto label_371b40;
        case 0x371b60u: goto label_371b60;
        case 0x371b70u: goto label_371b70;
        case 0x371bacu: goto label_371bac;
        default: break;
    }

    ctx->pc = 0x371ad0u;

    // 0x371ad0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x371ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x371ad4: 0x3c04004e  lui         $a0, 0x4E
    ctx->pc = 0x371ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)78 << 16));
    // 0x371ad8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x371ad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x371adc: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x371adcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
    // 0x371ae0: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x371ae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x371ae4: 0x24846ac0  addiu       $a0, $a0, 0x6AC0
    ctx->pc = 0x371ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27328));
    // 0x371ae8: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x371ae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x371aec: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x371aecu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371af0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x371af0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x371af4: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x371af4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371af8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x371af8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x371afc: 0xa85021  addu        $t2, $a1, $t0
    ctx->pc = 0x371afcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x371b00: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x371b00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x371b04: 0x3c12004e  lui         $s2, 0x4E
    ctx->pc = 0x371b04u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)78 << 16));
    // 0x371b08: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x371b08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x371b0c: 0x26526ad8  addiu       $s2, $s2, 0x6AD8
    ctx->pc = 0x371b0cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 27352));
    // 0x371b10: 0x848b0008  lh          $t3, 0x8($a0)
    ctx->pc = 0x371b10u;
    SET_GPR_S32(ctx, 11, (int16_t)FAST_READ16(0x4E6AC8u));
    // 0x371b14: 0x3c13004e  lui         $s3, 0x4E
    ctx->pc = 0x371b14u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)78 << 16));
    // 0x371b18: 0x86430008  lh          $v1, 0x8($s2)
    ctx->pc = 0x371b18u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x4E6AE0u));
    // 0x371b1c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x371b1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371b20: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x371b20u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371b24: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x371b24u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371b28: 0x34498080  ori         $t1, $v0, 0x8080
    ctx->pc = 0x371b28u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x371b2c: 0x26736acc  addiu       $s3, $s3, 0x6ACC
    ctx->pc = 0x371b2cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 27340));
    // 0x371b30: 0xab8821  addu        $s1, $a1, $t3
    ctx->pc = 0x371b30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 11)));
    // 0x371b34: 0x1438023  subu        $s0, $t2, $v1
    ctx->pc = 0x371b34u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x371b38: 0xc09c5f0  jal         func_2717C0
    ctx->pc = 0x371B38u;
    SET_GPR_U32(ctx, 31, 0x371B40u);
    ctx->pc = 0x371B3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371B38u;
    // 0x371b3c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2717C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2717C0u, 0x371B38u, 0x371B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371B40u;
label_371b40:
    // 0x371b40: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x371b40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
    // 0x371b44: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x371b44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371b48: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x371b48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371b4c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x371b4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371b50: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x371b50u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371b54: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x371b54u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371b58: 0xc09c5f0  jal         func_2717C0
    ctx->pc = 0x371B58u;
    SET_GPR_U32(ctx, 31, 0x371B60u);
    ctx->pc = 0x371B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371B58u;
    // 0x371b5c: 0x34498080  ori         $t1, $v0, 0x8080 (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2717C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2717C0u, 0x371B58u, 0x371B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371B60u;
label_371b60:
    // 0x371b60: 0x230082a  slt         $at, $s1, $s0
    ctx->pc = 0x371b60u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x371b64: 0x10200016  beqz        $at, . + 4 + (0x16 << 2)
    ctx->pc = 0x371B64u;
    {
        const bool branch_taken_0x371b64 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x371b64) {
            ctx->pc = 0x371BC0u;
            goto label_371bc0;
        }
    }
    ctx->pc = 0x371B6Cu;
    // 0x371b6c: 0x0  nop
    ctx->pc = 0x371b6cu;
    // NOP
label_371b70:
    // 0x371b70: 0x2111023  subu        $v0, $s0, $s1
    ctx->pc = 0x371b70u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x371b74: 0x24490001  addiu       $t1, $v0, 0x1
    ctx->pc = 0x371b74u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x371b78: 0x86620008  lh          $v0, 0x8($s3)
    ctx->pc = 0x371b78u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x371b7c: 0x122082a  slt         $at, $t1, $v0
    ctx->pc = 0x371b7cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x371b80: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x371b80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x371b84: 0x41480a  movz        $t1, $v0, $at
    ctx->pc = 0x371b84u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 2));
    // 0x371b88: 0x866a000a  lh          $t2, 0xA($s3)
    ctx->pc = 0x371b88u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 10)));
    // 0x371b8c: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x371b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
    // 0x371b90: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x371b90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371b94: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x371b94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371b98: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x371b98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371b9c: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x371b9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371ba0: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x371ba0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371ba4: 0xc09c540  jal         func_271500
    ctx->pc = 0x371BA4u;
    SET_GPR_U32(ctx, 31, 0x371BACu);
    ctx->pc = 0x371BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371BA4u;
    // 0x371ba8: 0x344b8080  ori         $t3, $v0, 0x8080 (Delay Slot)
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    ctx->in_delay_slot = false;
    ctx->pc = 0x271500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x271500u, 0x371BA4u, 0x371BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371BACu;
label_371bac:
    // 0x371bac: 0x86630008  lh          $v1, 0x8($s3)
    ctx->pc = 0x371bacu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x371bb0: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x371bb0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x371bb4: 0x230182a  slt         $v1, $s1, $s0
    ctx->pc = 0x371bb4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x371bb8: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x371BB8u;
    {
        const bool branch_taken_0x371bb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x371bb8) {
            ctx->pc = 0x371B70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_371b70;
        }
    }
    ctx->pc = 0x371BC0u;
label_371bc0:
    // 0x371bc0: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x371bc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x371bc4: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x371bc4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x371bc8: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x371bc8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x371bcc: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x371bccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x371bd0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x371bd0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x371bd4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x371bd4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x371bd8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x371bd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x371bdc: 0x3e00008  jr          $ra
    ctx->pc = 0x371BDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x371BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371BDCu;
        // 0x371be0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x371BDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x371BE4u;
}
