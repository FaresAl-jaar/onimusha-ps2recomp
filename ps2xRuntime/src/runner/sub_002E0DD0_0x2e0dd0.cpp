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

// Function: sub_002E0DD0
// Address: 0x2e0dd0 - 0x2e0fac
void sub_002E0DD0_0x2e0dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E0DD0_0x2e0dd0");
#endif

    switch (ctx->pc) {
        case 0x2e0e5cu: goto label_2e0e5c;
        case 0x2e0e74u: goto label_2e0e74;
        case 0x2e0e8cu: goto label_2e0e8c;
        case 0x2e0eb8u: goto label_2e0eb8;
        case 0x2e0ee0u: goto label_2e0ee0;
        default: break;
    }

    ctx->pc = 0x2e0dd0u;

    // 0x2e0dd0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2e0dd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2e0dd4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2e0dd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2e0dd8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2e0dd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2e0ddc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2e0ddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2e0de0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2e0de0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0de4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e0de4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2e0de8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2e0de8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0dec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e0decu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e0df0: 0x90830033  lbu         $v1, 0x33($a0)
    ctx->pc = 0x2e0df0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 51)));
    // 0x2e0df4: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x2e0df4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x2e0df8: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E0DF8u;
    {
        const bool branch_taken_0x2e0df8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E0DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0DF8u;
        // 0x2e0dfc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0df8) {
            ctx->pc = 0x2E0E18u;
            goto label_2e0e18;
        }
    }
    ctx->pc = 0x2E0E00u;
    // 0x2e0e00: 0x2531821  addu        $v1, $s2, $s3
    ctx->pc = 0x2e0e00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x2e0e04: 0x90630120  lbu         $v1, 0x120($v1)
    ctx->pc = 0x2e0e04u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 288)));
    // 0x2e0e08: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E0E08u;
    {
        const bool branch_taken_0x2e0e08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E0E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0E08u;
        // 0x2e0e0c: 0x64060001  daddiu      $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0e08) {
            ctx->pc = 0x2E0E18u;
            goto label_2e0e18;
        }
    }
    ctx->pc = 0x2E0E10u;
    // 0x2e0e10: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2E0E10u;
    {
        const bool branch_taken_0x2e0e10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e0e10) {
            ctx->pc = 0x2E0E20u;
            goto label_2e0e20;
        }
    }
    ctx->pc = 0x2E0E18u;
label_2e0e18:
    // 0x2e0e18: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e0e18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0e1c: 0x0  nop
    ctx->pc = 0x2e0e1cu;
    // NOP
label_2e0e20:
    // 0x2e0e20: 0x128140  sll         $s0, $s2, 5
    ctx->pc = 0x2e0e20u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
    // 0x2e0e24: 0x2132821  addu        $a1, $s0, $s3
    ctx->pc = 0x2e0e24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x2e0e28: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2e0e28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e0e2c: 0x90a40181  lbu         $a0, 0x181($a1)
    ctx->pc = 0x2e0e2cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 385)));
    // 0x2e0e30: 0x10830013  beq         $a0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x2E0E30u;
    {
        const bool branch_taken_0x2e0e30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2E0E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0E30u;
        // 0x2e0e34: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0e30) {
            ctx->pc = 0x2E0E80u;
            goto label_2e0e80;
        }
    }
    ctx->pc = 0x2E0E38u;
    // 0x2e0e38: 0x1083000b  beq         $a0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2E0E38u;
    {
        const bool branch_taken_0x2e0e38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e0e38) {
            ctx->pc = 0x2E0E68u;
            goto label_2e0e68;
        }
    }
    ctx->pc = 0x2E0E40u;
    // 0x2e0e40: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E0E40u;
    {
        const bool branch_taken_0x2e0e40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e0e40) {
            ctx->pc = 0x2E0E50u;
            goto label_2e0e50;
        }
    }
    ctx->pc = 0x2E0E48u;
    // 0x2e0e48: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2E0E48u;
    {
        const bool branch_taken_0x2e0e48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e0e48) {
            ctx->pc = 0x2E0E90u;
            goto label_2e0e90;
        }
    }
    ctx->pc = 0x2E0E50u;
label_2e0e50:
    // 0x2e0e50: 0x24a40184  addiu       $a0, $a1, 0x184
    ctx->pc = 0x2e0e50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 388));
    // 0x2e0e54: 0xc09a630  jal         func_2698C0
    ctx->pc = 0x2E0E54u;
    SET_GPR_U32(ctx, 31, 0x2E0E5Cu);
    ctx->pc = 0x2E0E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0E54u;
    // 0x2e0e58: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2698C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2698C0u, 0x2E0E54u, 0x2E0E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0E5Cu;
label_2e0e5c:
    // 0x2e0e5c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2E0E5Cu;
    {
        const bool branch_taken_0x2e0e5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E0E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0E5Cu;
        // 0x2e0e60: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0e5c) {
            ctx->pc = 0x2E0E90u;
            goto label_2e0e90;
        }
    }
    ctx->pc = 0x2E0E64u;
    // 0x2e0e64: 0x0  nop
    ctx->pc = 0x2e0e64u;
    // NOP
label_2e0e68:
    // 0x2e0e68: 0x24a40184  addiu       $a0, $a1, 0x184
    ctx->pc = 0x2e0e68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 388));
    // 0x2e0e6c: 0xc09ab8c  jal         func_26AE30
    ctx->pc = 0x2E0E6Cu;
    SET_GPR_U32(ctx, 31, 0x2E0E74u);
    ctx->pc = 0x2E0E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0E6Cu;
    // 0x2e0e70: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26AE30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26AE30u, 0x2E0E6Cu, 0x2E0E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0E74u;
label_2e0e74:
    // 0x2e0e74: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2E0E74u;
    {
        const bool branch_taken_0x2e0e74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E0E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0E74u;
        // 0x2e0e78: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0e74) {
            ctx->pc = 0x2E0E90u;
            goto label_2e0e90;
        }
    }
    ctx->pc = 0x2E0E7Cu;
    // 0x2e0e7c: 0x0  nop
    ctx->pc = 0x2e0e7cu;
    // NOP
label_2e0e80:
    // 0x2e0e80: 0x24a40184  addiu       $a0, $a1, 0x184
    ctx->pc = 0x2e0e80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 388));
    // 0x2e0e84: 0xc09a8f0  jal         func_26A3C0
    ctx->pc = 0x2E0E84u;
    SET_GPR_U32(ctx, 31, 0x2E0E8Cu);
    ctx->pc = 0x2E0E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0E84u;
    // 0x2e0e88: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26A3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26A3C0u, 0x2E0E84u, 0x2E0E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0E8Cu;
label_2e0e8c:
    // 0x2e0e8c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2e0e8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e0e90:
    // 0x2e0e90: 0x1220003f  beqz        $s1, . + 4 + (0x3F << 2)
    ctx->pc = 0x2E0E90u;
    {
        const bool branch_taken_0x2e0e90 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E0E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0E90u;
        // 0x2e0e94: 0x121880  sll         $v1, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0e90) {
            ctx->pc = 0x2E0F90u;
            goto label_2e0f90;
        }
    }
    ctx->pc = 0x2E0E98u;
    // 0x2e0e98: 0x732021  addu        $a0, $v1, $s3
    ctx->pc = 0x2e0e98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x2e0e9c: 0x84830580  lh          $v1, 0x580($a0)
    ctx->pc = 0x2e0e9cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 1408)));
    // 0x2e0ea0: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E0EA0u;
    {
        const bool branch_taken_0x2e0ea0 = (GPR_S64(ctx, 3) < 0);
        if (branch_taken_0x2e0ea0) {
            ctx->pc = 0x2E0EB8u;
            goto label_2e0eb8;
        }
    }
    ctx->pc = 0x2E0EA8u;
    // 0x2e0ea8: 0x90860582  lbu         $a2, 0x582($a0)
    ctx->pc = 0x2e0ea8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1410)));
    // 0x2e0eac: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x2e0eacu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2e0eb0: 0xc0a685c  jal         func_29A170
    ctx->pc = 0x2E0EB0u;
    SET_GPR_U32(ctx, 31, 0x2E0EB8u);
    ctx->pc = 0x2E0EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0EB0u;
    // 0x2e0eb4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A170u, 0x2E0EB0u, 0x2E0EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0EB8u;
label_2e0eb8:
    // 0x2e0eb8: 0x2532021  addu        $a0, $s2, $s3
    ctx->pc = 0x2e0eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x2e0ebc: 0x908300e0  lbu         $v1, 0xE0($a0)
    ctx->pc = 0x2e0ebcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 224)));
    // 0x2e0ec0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2e0ec0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0ec4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2e0ec4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0ec8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2e0ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2e0ecc: 0xa08300e0  sb          $v1, 0xE0($a0)
    ctx->pc = 0x2e0eccu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 224), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e0ed0: 0x90830120  lbu         $v1, 0x120($a0)
    ctx->pc = 0x2e0ed0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 288)));
    // 0x2e0ed4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2e0ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2e0ed8: 0xa0830120  sb          $v1, 0x120($a0)
    ctx->pc = 0x2e0ed8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 288), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e0edc: 0x0  nop
    ctx->pc = 0x2e0edcu;
    // NOP
label_2e0ee0:
    // 0x2e0ee0: 0x8ca30040  lw          $v1, 0x40($a1)
    ctx->pc = 0x2e0ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x2e0ee4: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x2E0EE4u;
    {
        const bool branch_taken_0x2e0ee4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e0ee4) {
            ctx->pc = 0x2E0F38u;
            goto label_2e0f38;
        }
    }
    ctx->pc = 0x2E0EECu;
    // 0x2e0eec: 0x8e270004  lw          $a3, 0x4($s1)
    ctx->pc = 0x2e0eecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2e0ef0: 0x81880  sll         $v1, $t0, 2
    ctx->pc = 0x2e0ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x2e0ef4: 0x733021  addu        $a2, $v1, $s3
    ctx->pc = 0x2e0ef4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x2e0ef8: 0x1132821  addu        $a1, $t0, $s3
    ctx->pc = 0x2e0ef8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 19)));
    // 0x2e0efc: 0x3c03008c  lui         $v1, 0x8C
    ctx->pc = 0x2e0efcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)140 << 16));
    // 0x2e0f00: 0x2132021  addu        $a0, $s0, $s3
    ctx->pc = 0x2e0f00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x2e0f04: 0x24630430  addiu       $v1, $v1, 0x430
    ctx->pc = 0x2e0f04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1072));
    // 0x2e0f08: 0xacc70040  sw          $a3, 0x40($a2)
    ctx->pc = 0x2e0f08u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 64), GPR_U32(ctx, 7));
    // 0x2e0f0c: 0xa0b200c0  sb          $s2, 0xC0($a1)
    ctx->pc = 0x2e0f0cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 192), (uint8_t)GPR_U32(ctx, 18));
    // 0x2e0f10: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x2e0f10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2e0f14: 0xae2508e0  sw          $a1, 0x8E0($s1)
    ctx->pc = 0x2e0f14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2272), GPR_U32(ctx, 5));
    // 0x2e0f18: 0xa23208e5  sb          $s2, 0x8E5($s1)
    ctx->pc = 0x2e0f18u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2277), (uint8_t)GPR_U32(ctx, 18));
    // 0x2e0f1c: 0xa22808e4  sb          $t0, 0x8E4($s1)
    ctx->pc = 0x2e0f1cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2276), (uint8_t)GPR_U32(ctx, 8));
    // 0x2e0f20: 0x90840188  lbu         $a0, 0x188($a0)
    ctx->pc = 0x2e0f20u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 392)));
    // 0x2e0f24: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x2e0f24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2e0f28: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2e0f28u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2e0f2c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2e0f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2e0f30: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2E0F30u;
    {
        const bool branch_taken_0x2e0f30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E0F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0F30u;
        // 0x2e0f34: 0xac650000  sw          $a1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0f30) {
            ctx->pc = 0x2E0F48u;
            goto label_2e0f48;
        }
    }
    ctx->pc = 0x2E0F38u;
label_2e0f38:
    // 0x2e0f38: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2e0f38u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2e0f3c: 0x2d030020  sltiu       $v1, $t0, 0x20
    ctx->pc = 0x2e0f3cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x2e0f40: 0x1460ffe7  bnez        $v1, . + 4 + (-0x19 << 2)
    ctx->pc = 0x2E0F40u;
    {
        const bool branch_taken_0x2e0f40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E0F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0F40u;
        // 0x2e0f44: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0f40) {
            ctx->pc = 0x2E0EE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e0ee0;
        }
    }
    ctx->pc = 0x2E0F48u;
label_2e0f48:
    // 0x2e0f48: 0x8e63003c  lw          $v1, 0x3C($s3)
    ctx->pc = 0x2e0f48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
    // 0x2e0f4c: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2E0F4Cu;
    {
        const bool branch_taken_0x2e0f4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e0f4c) {
            ctx->pc = 0x2E0F70u;
            goto label_2e0f70;
        }
    }
    ctx->pc = 0x2E0F54u;
    // 0x2e0f54: 0x82630039  lb          $v1, 0x39($s3)
    ctx->pc = 0x2e0f54u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 57)));
    // 0x2e0f58: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E0F58u;
    {
        const bool branch_taken_0x2e0f58 = (GPR_S64(ctx, 3) < 0);
        if (branch_taken_0x2e0f58) {
            ctx->pc = 0x2E0F70u;
            goto label_2e0f70;
        }
    }
    ctx->pc = 0x2E0F60u;
    // 0x2e0f60: 0x16430003  bne         $s2, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E0F60u;
    {
        const bool branch_taken_0x2e0f60 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        if (branch_taken_0x2e0f60) {
            ctx->pc = 0x2E0F70u;
            goto label_2e0f70;
        }
    }
    ctx->pc = 0x2E0F68u;
    // 0x2e0f68: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x2e0f68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2e0f6c: 0xae63003c  sw          $v1, 0x3C($s3)
    ctx->pc = 0x2e0f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 60), GPR_U32(ctx, 3));
label_2e0f70:
    // 0x2e0f70: 0x96630602  lhu         $v1, 0x602($s3)
    ctx->pc = 0x2e0f70u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 1538)));
    // 0x2e0f74: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2E0F74u;
    {
        const bool branch_taken_0x2e0f74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e0f74) {
            ctx->pc = 0x2E0F80u;
            goto label_2e0f80;
        }
    }
    ctx->pc = 0x2E0F7Cu;
    // 0x2e0f7c: 0xa6630604  sh          $v1, 0x604($s3)
    ctx->pc = 0x2e0f7cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 1540), (uint16_t)GPR_U32(ctx, 3));
label_2e0f80:
    // 0x2e0f80: 0x96630034  lhu         $v1, 0x34($s3)
    ctx->pc = 0x2e0f80u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 52)));
    // 0x2e0f84: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2e0f84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2e0f88: 0xa6630034  sh          $v1, 0x34($s3)
    ctx->pc = 0x2e0f88u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 52), (uint16_t)GPR_U32(ctx, 3));
    // 0x2e0f8c: 0x0  nop
    ctx->pc = 0x2e0f8cu;
    // NOP
label_2e0f90:
    // 0x2e0f90: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2e0f90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e0f94: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2e0f94u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e0f98: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2e0f98u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e0f9c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e0f9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e0fa0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e0fa0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e0fa4: 0x3e00008  jr          $ra
    ctx->pc = 0x2E0FA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E0FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0FA4u;
        // 0x2e0fa8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E0FA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E0FACu;
}
