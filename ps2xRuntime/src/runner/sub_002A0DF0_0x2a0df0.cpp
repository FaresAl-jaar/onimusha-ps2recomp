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

// Function: sub_002A0DF0
// Address: 0x2a0df0 - 0x2a0f1c
void sub_002A0DF0_0x2a0df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A0DF0_0x2a0df0");
#endif

    switch (ctx->pc) {
        case 0x2a0e18u: goto label_2a0e18;
        case 0x2a0eacu: goto label_2a0eac;
        case 0x2a0ec8u: goto label_2a0ec8;
        case 0x2a0ee4u: goto label_2a0ee4;
        default: break;
    }

    ctx->pc = 0x2a0df0u;

    // 0x2a0df0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2a0df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2a0df4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2a0df4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2a0df8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2a0df8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2a0dfc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2a0dfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2a0e00: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2a0e00u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0e04: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2a0e04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2a0e08: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2a0e08u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0e0c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a0e0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2a0e10: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2a0e10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0e14: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a0e14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2a0e18:
    // 0x2a0e18: 0x1218c0  sll         $v1, $s2, 3
    ctx->pc = 0x2a0e18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x2a0e1c: 0x722023  subu        $a0, $v1, $s2
    ctx->pc = 0x2a0e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x2a0e20: 0x8e830080  lw          $v1, 0x80($s4)
    ctx->pc = 0x2a0e20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 128)));
    // 0x2a0e24: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2a0e24u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x2a0e28: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x2a0e28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2a0e2c: 0x960300c6  lhu         $v1, 0xC6($s0)
    ctx->pc = 0x2a0e2cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 198)));
    // 0x2a0e30: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x2a0e30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x2a0e34: 0x1460002c  bnez        $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x2A0E34u;
    {
        const bool branch_taken_0x2a0e34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a0e34) {
            ctx->pc = 0x2A0EE8u;
            goto label_2a0ee8;
        }
    }
    ctx->pc = 0x2A0E3Cu;
    // 0x2a0e3c: 0x8e820094  lw          $v0, 0x94($s4)
    ctx->pc = 0x2a0e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 148)));
    // 0x2a0e40: 0x122180  sll         $a0, $s2, 6
    ctx->pc = 0x2a0e40u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
    // 0x2a0e44: 0x2642821  addu        $a1, $s3, $a0
    ctx->pc = 0x2a0e44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x2a0e48: 0x448821  addu        $s1, $v0, $a0
    ctx->pc = 0x2a0e48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2a0e4c: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x2a0e4cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2a0e50: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2a0e50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2a0e54: 0x7e230000  sq          $v1, 0x0($s1)
    ctx->pc = 0x2a0e54u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 3));
    // 0x2a0e58: 0x78a30010  lq          $v1, 0x10($a1)
    ctx->pc = 0x2a0e58u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2a0e5c: 0x7e230010  sq          $v1, 0x10($s1)
    ctx->pc = 0x2a0e5cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 3));
    // 0x2a0e60: 0x78a30020  lq          $v1, 0x20($a1)
    ctx->pc = 0x2a0e60u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x2a0e64: 0x7e230020  sq          $v1, 0x20($s1)
    ctx->pc = 0x2a0e64u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), GPR_VEC(ctx, 3));
    // 0x2a0e68: 0x78a30030  lq          $v1, 0x30($a1)
    ctx->pc = 0x2a0e68u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x2a0e6c: 0x7e230030  sq          $v1, 0x30($s1)
    ctx->pc = 0x2a0e6cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), GPR_VEC(ctx, 3));
    // 0x2a0e70: 0x8e830070  lw          $v1, 0x70($s4)
    ctx->pc = 0x2a0e70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 112)));
    // 0x2a0e74: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x2a0e74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x2a0e78: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x2a0e78u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a0e7c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2a0e7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2a0e80: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A0E80u;
    {
        const bool branch_taken_0x2a0e80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A0E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0E80u;
        // 0x2a0e84: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0e80) {
            ctx->pc = 0x2A0E98u;
            goto label_2a0e98;
        }
    }
    ctx->pc = 0x2A0E88u;
    // 0x2a0e88: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A0E88u;
    {
        const bool branch_taken_0x2a0e88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2a0e88) {
            ctx->pc = 0x2A0E98u;
            goto label_2a0e98;
        }
    }
    ctx->pc = 0x2A0E90u;
    // 0x2a0e90: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2A0E90u;
    {
        const bool branch_taken_0x2a0e90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a0e90) {
            ctx->pc = 0x2A0ED0u;
            goto label_2a0ed0;
        }
    }
    ctx->pc = 0x2A0E98u;
label_2a0e98:
    // 0x2a0e98: 0x8e0500c0  lw          $a1, 0xC0($s0)
    ctx->pc = 0x2a0e98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x2a0e9c: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A0E9Cu;
    {
        const bool branch_taken_0x2a0e9c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0E9Cu;
        // 0x2a0ea0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0e9c) {
            ctx->pc = 0x2A0EB0u;
            goto label_2a0eb0;
        }
    }
    ctx->pc = 0x2A0EA4u;
    // 0x2a0ea4: 0xc04144e  jal         func_105138
    ctx->pc = 0x2A0EA4u;
    SET_GPR_U32(ctx, 31, 0x2A0EACu);
    ctx->pc = 0x2A0EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0EA4u;
    // 0x2a0ea8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105138u, 0x2A0EA4u, 0x2A0EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0EACu;
label_2a0eac:
    // 0x2a0eac: 0x0  nop
    ctx->pc = 0x2a0eacu;
    // NOP
label_2a0eb0:
    // 0x2a0eb0: 0x8e820128  lw          $v0, 0x128($s4)
    ctx->pc = 0x2a0eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 296)));
    // 0x2a0eb4: 0x121980  sll         $v1, $s2, 6
    ctx->pc = 0x2a0eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
    // 0x2a0eb8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2a0eb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0ebc: 0x26060040  addiu       $a2, $s0, 0x40
    ctx->pc = 0x2a0ebcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x2a0ec0: 0xc04144e  jal         func_105138
    ctx->pc = 0x2A0EC0u;
    SET_GPR_U32(ctx, 31, 0x2A0EC8u);
    ctx->pc = 0x2A0EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0EC0u;
    // 0x2a0ec4: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105138u, 0x2A0EC0u, 0x2A0EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0EC8u;
label_2a0ec8:
    // 0x2a0ec8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2A0EC8u;
    {
        const bool branch_taken_0x2a0ec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a0ec8) {
            ctx->pc = 0x2A0EE8u;
            goto label_2a0ee8;
        }
    }
    ctx->pc = 0x2A0ED0u;
label_2a0ed0:
    // 0x2a0ed0: 0x8e820128  lw          $v0, 0x128($s4)
    ctx->pc = 0x2a0ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 296)));
    // 0x2a0ed4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2a0ed4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0ed8: 0x26060040  addiu       $a2, $s0, 0x40
    ctx->pc = 0x2a0ed8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x2a0edc: 0xc04144e  jal         func_105138
    ctx->pc = 0x2A0EDCu;
    SET_GPR_U32(ctx, 31, 0x2A0EE4u);
    ctx->pc = 0x2A0EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0EDCu;
    // 0x2a0ee0: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105138u, 0x2A0EDCu, 0x2A0EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0EE4u;
label_2a0ee4:
    // 0x2a0ee4: 0x0  nop
    ctx->pc = 0x2a0ee4u;
    // NOP
label_2a0ee8:
    // 0x2a0ee8: 0x9683006a  lhu         $v1, 0x6A($s4)
    ctx->pc = 0x2a0ee8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 106)));
    // 0x2a0eec: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2a0eecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2a0ef0: 0x243182a  slt         $v1, $s2, $v1
    ctx->pc = 0x2a0ef0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2a0ef4: 0x1460ffc8  bnez        $v1, . + 4 + (-0x38 << 2)
    ctx->pc = 0x2A0EF4u;
    {
        const bool branch_taken_0x2a0ef4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a0ef4) {
            ctx->pc = 0x2A0E18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a0e18;
        }
    }
    ctx->pc = 0x2A0EFCu;
    // 0x2a0efc: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2a0efcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a0f00: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2a0f00u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a0f04: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2a0f04u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a0f08: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2a0f08u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a0f0c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a0f0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a0f10: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a0f10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a0f14: 0x3e00008  jr          $ra
    ctx->pc = 0x2A0F14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A0F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0F14u;
        // 0x2a0f18: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A0F14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A0F1Cu;
}
