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

// Function: sub_00208A38
// Address: 0x208a38 - 0x208b04
void sub_00208A38_0x208a38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00208A38_0x208a38");
#endif

    switch (ctx->pc) {
        case 0x208a8cu: goto label_208a8c;
        case 0x208aa8u: goto label_208aa8;
        case 0x208ac4u: goto label_208ac4;
        case 0x208ad8u: goto label_208ad8;
        case 0x208aecu: goto label_208aec;
        default: break;
    }

    ctx->pc = 0x208a38u;

    // 0x208a38: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x208a38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x208a3c: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x208a3cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208a40: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x208a40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x208a44: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x208a44u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208a48: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x208a48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x208a4c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x208a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x208a50: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x208a50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x208a54: 0x26440004  addiu       $a0, $s2, 0x4
    ctx->pc = 0x208a54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x208a58: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x208a58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x208a5c: 0x8d110010  lw          $s1, 0x10($t0)
    ctx->pc = 0x208a5cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x208a60: 0x8d09000c  lw          $t1, 0xC($t0)
    ctx->pc = 0x208a60u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x208a64: 0x8d020008  lw          $v0, 0x8($t0)
    ctx->pc = 0x208a64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x208a68: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x208a68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208a6c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x208a6cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208a70: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x208a70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208a74: 0xae490044  sw          $t1, 0x44($s2)
    ctx->pc = 0x208a74u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 9));
    // 0x208a78: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x208A78u;
    {
        const bool branch_taken_0x208a78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x208A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208A78u;
        // 0x208a7c: 0xae510048  sw          $s1, 0x48($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208a78) {
            ctx->pc = 0x208A98u;
            goto label_208a98;
        }
    }
    ctx->pc = 0x208A80u;
    // 0x208a80: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x208a80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x208a84: 0xc0822c6  jal         func_208B18
    ctx->pc = 0x208A84u;
    SET_GPR_U32(ctx, 31, 0x208A8Cu);
    ctx->pc = 0x208A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208A84u;
    // 0x208a88: 0x120302d  daddu       $a2, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208B18u, 0x208A84u, 0x208A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208A8Cu;
label_208a8c:
    // 0x208a8c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x208A8Cu;
    {
        const bool branch_taken_0x208a8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208A8Cu;
        // 0x208a90: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208a8c) {
            ctx->pc = 0x208AF0u;
            goto label_208af0;
        }
    }
    ctx->pc = 0x208A94u;
    // 0x208a94: 0x0  nop
    ctx->pc = 0x208a94u;
    // NOP
label_208a98:
    // 0x208a98: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x208a98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x208a9c: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x208a9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208aa0: 0xc081274  jal         func_2049D0
    ctx->pc = 0x208AA0u;
    SET_GPR_U32(ctx, 31, 0x208AA8u);
    ctx->pc = 0x208AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208AA0u;
    // 0x208aa4: 0x1187c2  srl         $s0, $s1, 31 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 17), 31));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2049D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2049D0u, 0x208AA0u, 0x208AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208AA8u;
label_208aa8:
    // 0x208aa8: 0x26440004  addiu       $a0, $s2, 0x4
    ctx->pc = 0x208aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x208aac: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x208aacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x208ab0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x208ab0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208ab4: 0x8fa6000c  lw          $a2, 0xC($sp)
    ctx->pc = 0x208ab4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x208ab8: 0x2308021  addu        $s0, $s1, $s0
    ctx->pc = 0x208ab8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x208abc: 0xc0822c6  jal         func_208B18
    ctx->pc = 0x208ABCu;
    SET_GPR_U32(ctx, 31, 0x208AC4u);
    ctx->pc = 0x208AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208ABCu;
    // 0x208ac0: 0x108043  sra         $s0, $s0, 1 (Delay Slot)
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208B18u, 0x208ABCu, 0x208AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208AC4u;
label_208ac4:
    // 0x208ac4: 0x26440014  addiu       $a0, $s2, 0x14
    ctx->pc = 0x208ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
    // 0x208ac8: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x208ac8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x208acc: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x208accu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208ad0: 0xc0822c6  jal         func_208B18
    ctx->pc = 0x208AD0u;
    SET_GPR_U32(ctx, 31, 0x208AD8u);
    ctx->pc = 0x208AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208AD0u;
    // 0x208ad4: 0x8fa60010  lw          $a2, 0x10($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208B18u, 0x208AD0u, 0x208AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208AD8u;
label_208ad8:
    // 0x208ad8: 0x26440024  addiu       $a0, $s2, 0x24
    ctx->pc = 0x208ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 36));
    // 0x208adc: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x208adcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x208ae0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x208ae0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208ae4: 0xc0822c6  jal         func_208B18
    ctx->pc = 0x208AE4u;
    SET_GPR_U32(ctx, 31, 0x208AECu);
    ctx->pc = 0x208AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208AE4u;
    // 0x208ae8: 0x8fa60014  lw          $a2, 0x14($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208B18u, 0x208AE4u, 0x208AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208AECu;
label_208aec:
    // 0x208aec: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x208aecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_208af0:
    // 0x208af0: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x208af0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x208af4: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x208af4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x208af8: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x208af8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x208afc: 0x3e00008  jr          $ra
    ctx->pc = 0x208AFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x208B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208AFCu;
        // 0x208b00: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208AFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x208B04u;
}
