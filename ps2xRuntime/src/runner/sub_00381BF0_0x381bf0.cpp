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

// Function: sub_00381BF0
// Address: 0x381bf0 - 0x381d00
void sub_00381BF0_0x381bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00381BF0_0x381bf0");
#endif

    switch (ctx->pc) {
        case 0x381c70u: goto label_381c70;
        case 0x381cc4u: goto label_381cc4;
        case 0x381cccu: goto label_381ccc;
        case 0x381cf0u: goto label_381cf0;
        default: break;
    }

    ctx->pc = 0x381bf0u;

    // 0x381bf0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x381bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x381bf4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x381bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x381bf8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x381bf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x381bfc: 0x90832b21  lbu         $v1, 0x2B21($a0)
    ctx->pc = 0x381bfcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 11041)));
    // 0x381c00: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x381c00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x381c04: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x381C04u;
    {
        const bool branch_taken_0x381c04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x381C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381C04u;
        // 0x381c08: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x381c04) {
            ctx->pc = 0x381C20u;
            goto label_381c20;
        }
    }
    ctx->pc = 0x381C0Cu;
    // 0x381c0c: 0x306200fd  andi        $v0, $v1, 0xFD
    ctx->pc = 0x381c0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)253);
    // 0x381c10: 0xa2022b21  sb          $v0, 0x2B21($s0)
    ctx->pc = 0x381c10u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11041), (uint8_t)GPR_U32(ctx, 2));
    // 0x381c14: 0x92022b21  lbu         $v0, 0x2B21($s0)
    ctx->pc = 0x381c14u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11041)));
    // 0x381c18: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x381c18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x381c1c: 0xa2022b21  sb          $v0, 0x2B21($s0)
    ctx->pc = 0x381c1cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11041), (uint8_t)GPR_U32(ctx, 2));
label_381c20:
    // 0x381c20: 0x92032b21  lbu         $v1, 0x2B21($s0)
    ctx->pc = 0x381c20u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11041)));
    // 0x381c24: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x381c24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x381c28: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x381C28u;
    {
        const bool branch_taken_0x381c28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x381C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381C28u;
        // 0x381c2c: 0x306200ef  andi        $v0, $v1, 0xEF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)239);
        ctx->in_delay_slot = false;
        if (branch_taken_0x381c28) {
            ctx->pc = 0x381C50u;
            goto label_381c50;
        }
    }
    ctx->pc = 0x381C30u;
    // 0x381c30: 0xa2022b21  sb          $v0, 0x2B21($s0)
    ctx->pc = 0x381c30u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11041), (uint8_t)GPR_U32(ctx, 2));
    // 0x381c34: 0x92022b21  lbu         $v0, 0x2B21($s0)
    ctx->pc = 0x381c34u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11041)));
    // 0x381c38: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x381c38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x381c3c: 0xa2022b21  sb          $v0, 0x2B21($s0)
    ctx->pc = 0x381c3cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11041), (uint8_t)GPR_U32(ctx, 2));
    // 0x381c40: 0x92022b21  lbu         $v0, 0x2B21($s0)
    ctx->pc = 0x381c40u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11041)));
    // 0x381c44: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x381c44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x381c48: 0xa2022b21  sb          $v0, 0x2B21($s0)
    ctx->pc = 0x381c48u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11041), (uint8_t)GPR_U32(ctx, 2));
    // 0x381c4c: 0x0  nop
    ctx->pc = 0x381c4cu;
    // NOP
label_381c50:
    // 0x381c50: 0x92032b21  lbu         $v1, 0x2B21($s0)
    ctx->pc = 0x381c50u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11041)));
    // 0x381c54: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x381c54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x381c58: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x381C58u;
    {
        const bool branch_taken_0x381c58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x381C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381C58u;
        // 0x381c5c: 0x306200fb  andi        $v0, $v1, 0xFB (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)251);
        ctx->in_delay_slot = false;
        if (branch_taken_0x381c58) {
            ctx->pc = 0x381C80u;
            goto label_381c80;
        }
    }
    ctx->pc = 0x381C60u;
    // 0x381c60: 0xa2022b21  sb          $v0, 0x2B21($s0)
    ctx->pc = 0x381c60u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11041), (uint8_t)GPR_U32(ctx, 2));
    // 0x381c64: 0x96052b22  lhu         $a1, 0x2B22($s0)
    ctx->pc = 0x381c64u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 11042)));
    // 0x381c68: 0xc0e0740  jal         func_381D00
    ctx->pc = 0x381C68u;
    SET_GPR_U32(ctx, 31, 0x381C70u);
    ctx->pc = 0x381C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x381C68u;
    // 0x381c6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x381D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x381D00u, 0x381C68u, 0x381C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x381C70u;
label_381c70:
    // 0x381c70: 0x92022b21  lbu         $v0, 0x2B21($s0)
    ctx->pc = 0x381c70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11041)));
    // 0x381c74: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x381c74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x381c78: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x381C78u;
    {
        const bool branch_taken_0x381c78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x381C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381C78u;
        // 0x381c7c: 0xa2022b21  sb          $v0, 0x2B21($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 11041), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x381c78) {
            ctx->pc = 0x381CE8u;
            goto label_381ce8;
        }
    }
    ctx->pc = 0x381C80u;
label_381c80:
    // 0x381c80: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x381c80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x381c84: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x381C84u;
    {
        const bool branch_taken_0x381c84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x381C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381C84u;
        // 0x381c88: 0x306200f7  andi        $v0, $v1, 0xF7 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)247);
        ctx->in_delay_slot = false;
        if (branch_taken_0x381c84) {
            ctx->pc = 0x381CB0u;
            goto label_381cb0;
        }
    }
    ctx->pc = 0x381C8Cu;
    // 0x381c8c: 0xa2022b21  sb          $v0, 0x2B21($s0)
    ctx->pc = 0x381c8cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11041), (uint8_t)GPR_U32(ctx, 2));
    // 0x381c90: 0x8e020148  lw          $v0, 0x148($s0)
    ctx->pc = 0x381c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x381c94: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x381c94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x381c98: 0xae020148  sw          $v0, 0x148($s0)
    ctx->pc = 0x381c98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 2));
    // 0x381c9c: 0x92022b21  lbu         $v0, 0x2B21($s0)
    ctx->pc = 0x381c9cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11041)));
    // 0x381ca0: 0x304200fe  andi        $v0, $v0, 0xFE
    ctx->pc = 0x381ca0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)254);
    // 0x381ca4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x381CA4u;
    {
        const bool branch_taken_0x381ca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x381CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381CA4u;
        // 0x381ca8: 0xa2022b21  sb          $v0, 0x2B21($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 11041), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x381ca4) {
            ctx->pc = 0x381CE8u;
            goto label_381ce8;
        }
    }
    ctx->pc = 0x381CACu;
    // 0x381cac: 0x0  nop
    ctx->pc = 0x381cacu;
    // NOP
label_381cb0:
    // 0x381cb0: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x381cb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x381cb4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x381CB4u;
    {
        const bool branch_taken_0x381cb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x381CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381CB4u;
        // 0x381cb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x381cb4) {
            ctx->pc = 0x381CD8u;
            goto label_381cd8;
        }
    }
    ctx->pc = 0x381CBCu;
    // 0x381cbc: 0xc0e074c  jal         func_381D30
    ctx->pc = 0x381CBCu;
    SET_GPR_U32(ctx, 31, 0x381CC4u);
    ctx->pc = 0x381D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x381D30u, 0x381CBCu, 0x381CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x381CC4u;
label_381cc4:
    // 0x381cc4: 0xc0e0758  jal         func_381D60
    ctx->pc = 0x381CC4u;
    SET_GPR_U32(ctx, 31, 0x381CCCu);
    ctx->pc = 0x381CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x381CC4u;
    // 0x381cc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x381D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x381D60u, 0x381CC4u, 0x381CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x381CCCu;
label_381ccc:
    // 0x381ccc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x381CCCu;
    {
        const bool branch_taken_0x381ccc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x381ccc) {
            ctx->pc = 0x381CE8u;
            goto label_381ce8;
        }
    }
    ctx->pc = 0x381CD4u;
    // 0x381cd4: 0x0  nop
    ctx->pc = 0x381cd4u;
    // NOP
label_381cd8:
    // 0x381cd8: 0x8e020148  lw          $v0, 0x148($s0)
    ctx->pc = 0x381cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x381cdc: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x381cdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x381ce0: 0xae020148  sw          $v0, 0x148($s0)
    ctx->pc = 0x381ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 2));
    // 0x381ce4: 0x0  nop
    ctx->pc = 0x381ce4u;
    // NOP
label_381ce8:
    // 0x381ce8: 0xc0a4d3c  jal         func_2934F0
    ctx->pc = 0x381CE8u;
    SET_GPR_U32(ctx, 31, 0x381CF0u);
    ctx->pc = 0x381CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x381CE8u;
    // 0x381cec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2934F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2934F0u, 0x381CE8u, 0x381CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x381CF0u;
label_381cf0:
    // 0x381cf0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x381cf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x381cf4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x381cf4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x381cf8: 0x3e00008  jr          $ra
    ctx->pc = 0x381CF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x381CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381CF8u;
        // 0x381cfc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x381CF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x381D00u;
}
